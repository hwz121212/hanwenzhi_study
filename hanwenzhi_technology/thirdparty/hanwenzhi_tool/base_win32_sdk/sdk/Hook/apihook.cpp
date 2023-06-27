#include "stdafx.h"
#include "apihook.h"


#include <dbghelp.h>
#pragma comment( lib, "dbghelp.lib" )


#include<Tlhelp32.h>




namespace sdk
{
	namespace util
	{
		namespace system
		{
			namespace hook
			{



#ifndef TRACE
#define TRACE ATLTRACE
#endif

#ifndef ASSERT
#define ASSERT ATLASSERT
#endif

				//20131031�ռ��ϣ�Ϊ��hook���ж���--------------------����ϵͳ��ʹ�õĶ�Ӧ���������µ���
				typedef HMODULE (WINAPI *PFN_LoadLibraryA)(__in LPCSTR lpLibFileName);
				typedef HMODULE (WINAPI *PFN_LoadLibraryW)( __in LPCWSTR lpLibFileName );
				typedef HMODULE (WINAPI *PFN_LoadLibraryExA)(    __in       LPCSTR lpLibFileName,    __reserved HANDLE hFile,    __in       DWORD dwFlags    );
				typedef HMODULE (WINAPI *PFN_LoadLibraryExW)(    __in       LPCWSTR lpLibFileName,    __reserved HANDLE hFile,    __in       DWORD dwFlags    );
				typedef FARPROC (WINAPI *PFN_GetProcAddress) (    __in HMODULE hModule,    __in LPCSTR lpProcName    );

				PFN_LoadLibraryA _LoadLibraryA=LoadLibraryA;
				PFN_LoadLibraryW _LoadLibraryW=LoadLibraryW;
				PFN_LoadLibraryExA _LoadLibraryExA=LoadLibraryExA;
				PFN_LoadLibraryExW _LoadLibraryExW=LoadLibraryExW;
				PFN_GetProcAddress _GetProcAddress=GetProcAddress;
				sdk::util::system::lock::InstanceLockBase APIHookLocker;
				const BYTE cPushOpCode = 0x68;
				//#include "..\classlib\debugwatch.h"
				//////////////////////////////////////////////////////////////////////
				// ������������98�ĵ���ģʽ�£���������ʹģ���import sectionָ��һ�������
				//
				// ����ڴ��ַ(������Window98)
				PVOID CAPIHook::sm_pvMaxAppAddr = NULL;
				//const BYTE cPushOpCode = 0x68;
				//
				//////////////////////////////////////////////////////////////////
				//
				// CAPIHook �������ӱ��ͷָ��
				CAPIHook *CAPIHook::sm_pHead = NULL;
				//
				///////////////////////////////////////////////////////////////////////


				//-------------------------------------------------------------
#ifdef _HOOKALL
				CAPIHook CAPIHook::sm_LoadLibraryA("Kernel32.dll","LoadLibraryA",(PROC)CAPIHook::LoadLibraryA , TRUE);
				CAPIHook CAPIHook::sm_LoadLibraryW("Kernel32.dll","LoadLibraryW",(PROC)CAPIHook::LoadLibraryW , TRUE);
				CAPIHook CAPIHook::sm_LoadLibraryExA("Kernel32.dll","LoadLibraryExA",(PROC)CAPIHook::LoadLibraryExA , TRUE);
				CAPIHook CAPIHook::sm_LoadLibraryExW("Kernel32.dll","LoadLibraryExW",(PROC)CAPIHook::LoadLibraryExW , TRUE);
				CAPIHook CAPIHook::sm_GetProcAddress("Kernel32.dll","GetProcAddress",(PROC)CAPIHook::GetProcAddress , TRUE);
#endif
				int CAPIHook::hasInit=0;
				int CAPIHook::hookState=1;
				// �ҽ� LoadLibrary��GetProcAddress����
				void CAPIHook::initHook(){
					sdk::util::system::lock::InstanceLock threadCountLocker(&APIHookLocker);
					if(hasInit==1){
						return;
					}
					hasInit=1;
					CAPIHook *c1=new CAPIHook("Kernel32.dll","LoadLibraryA",(PROC)CAPIHook::LoadLibraryA , FALSE);
					CAPIHook *c2=new CAPIHook("Kernel32.dll","LoadLibraryW",(PROC)CAPIHook::LoadLibraryW , FALSE);
					CAPIHook *c3=new CAPIHook("Kernel32.dll","LoadLibraryExA",(PROC)CAPIHook::LoadLibraryExA , FALSE);
					CAPIHook *c4=new CAPIHook("Kernel32.dll","LoadLibraryExW",(PROC)CAPIHook::LoadLibraryExW , FALSE);
					CAPIHook *c5=new CAPIHook("Kernel32.dll","GetProcAddress",(PROC)CAPIHook::GetProcAddress , FALSE);
				}

				//
				// ���캯�����޸�����ģ���ֽڣ��ҽ�ָ��������
				// ������
				//		fExcludeAPIHookMod����ʾ�Ƿ�Ҫ�޸ı�ģ��(module of hook api) �ĹҽӺ����ĵ�ַ
				//							�ò���ֱ�Ӵ���ReplaceIATEntryInAllMods , 
				//							���ڸò��������ÿ��Բο�ReplaceIATEntryInAllMods�Ĳ���˵��
				// fExcludeAPIHookMod�����true����ģ�鲻hook
				CAPIHook::CAPIHook(PCSTR pszCalleeModName , PSTR pszFuncName , PROC pfnHook ,
					BOOL fExcludeAPIHookMod)
				{
					if(this->hasInit==0){
						initHook();
					}
					if( sm_pvMaxAppAddr = NULL)
					{
						// window98 only
						// �õ�Ӧ�ó����DLL�ɵ��������ڴ���ʵ�ַ
						SYSTEM_INFO	si;
						GetSystemInfo(&si);
						sm_pvMaxAppAddr = si.lpMaximumApplicationAddress;
					}

					m_pNext	= sm_pHead;
					sm_pHead = this;

					// ����ҽӵ�API����Ϣ
					// ������
					//	 ��̬���ӿ�
					//	 ҪHOOK�ĺ�������
					//	 ���������ַ
					//	 ����ԭ������ַ
					m_pszCalleeModName		= pszCalleeModName;		
					m_pszFuncName			= pszFuncName;			
					m_pfnHook				= pfnHook;				
					m_fExcludeAPIHookMod	= fExcludeAPIHookMod;
					m_pfnOrig				= GetProcAddressRaw( ::GetModuleHandleA(pszCalleeModName) , m_pszFuncName);


					TRACE("**׼���޸�%s**\n",m_pszFuncName);
					ASSERT( m_pfnOrig != NULL);

					if( m_pfnOrig > sm_pvMaxAppAddr)
					{
						// �����ַ�ڹ���DLL�� ����ַӦ�ñ��޸�
						LPBYTE pb = (LPBYTE)m_pfnOrig;
						if(pb[0] == cPushOpCode )
						{
							//����PUSH���룬�õ���ʵ��ַ
							PVOID pv = *(PVOID *)&pb[1];
							m_pfnOrig = (PROC)pv;
						}

					}

					// ������ģ��ҽ��������
					BOOL r=ReplaceIATEntryInAllMods(m_pszCalleeModName , m_pfnOrig , m_pfnHook , 
						m_fExcludeAPIHookMod);


				}
				//�������û���Թ�����֪���Ƿ����
				CAPIHook::~CAPIHook()
				{
					// ����ҽ�
					ReplaceIATEntryInAllMods(m_pszCalleeModName , m_pfnHook , m_pfnOrig , 
						m_fExcludeAPIHookMod);

					//��������ɾ���ö���ʵ��
					CAPIHook *p = sm_pHead;
					if( p == this )
					{
						sm_pHead = p->m_pNext;
					}
					else
					{
						// fFound�ڴ˴��������ж��Ƿ�ɾ���ɹ�
						BOOL fFound = FALSE;

						// ��������
						for(; !fFound && (p->m_pNext != NULL); p=p->m_pNext)
						{
							if( p->m_pNext == this)
							{
								p->m_pNext = p->m_pNext->m_pNext;
								fFound = TRUE;
								break;
							}
						}
					}


				}

				// Ϊ�������DLL ��д������ԹҽӺ���
				// dwFlag ΪLoadLibraryExA(W)����Ĳ���
				void WINAPI CAPIHook::FixupNewlyLoadedModule(HMODULE hMod, DWORD dwFlags)
				{
					if( (hMod != NULL) && ((dwFlags & LOAD_LIBRARY_AS_DATAFILE) == 0))
					{
						for( CAPIHook *p = sm_pHead; p!=NULL ;p = p->m_pNext)
						{
							if(p->m_pszFuncName){
								TRACE("**�ҽ�%s**\n",p->m_pszFuncName);
							}
							ReplaceIATEntryInOneMod(p->m_pszCalleeModName , 
								p->m_pfnOrig , p->m_pfnHook , hMod);

						}
					}
				}
				//void WideString2Ascii(const wchar_t* pwszSrc,std::string& strOut)  ;
				void writelogW(LPCWSTR content,int level);
				// �ҽ�LoadLibraryA��HOOK����
				HMODULE WINAPI CAPIHook::LoadLibraryA(PCSTR pszModulePath)
				{
					TRACE("**׼������A%s**\n",pszModulePath);
					//HMODULE hMod = ::LoadLibraryA(pszModulePath);
					HMODULE hMod = _LoadLibraryA(pszModulePath);
					// Ϊ�����DLL�޸������
					FixupNewlyLoadedModule(hMod , 0);
					return hMod;
				}
				// �ҽ�LoadLibraryW��HOOK����
				HMODULE WINAPI CAPIHook::LoadLibraryW(PCWSTR pszModulePath)
				{
					//std::string temStr;
					//WideString2Ascii(pszModulePath,temStr);
					//TRACE("**׼������W%s**\n",temStr.c_str());
					// writelogW(pszModulePath,10);
					//HMODULE hMod = ::LoadLibraryW(pszModulePath);
					HMODULE hMod = _LoadLibraryW(pszModulePath);
					// Ϊ�����DLL�޸������
					FixupNewlyLoadedModule(hMod , 0);
					return hMod;
				}

				HMODULE WINAPI CAPIHook::LoadLibraryExA(PCSTR pszModulePath, HANDLE hFile, DWORD dwFlags)
				{

					TRACE("**׼������EA%s**\n",pszModulePath);
					//HMODULE hMod = ::LoadLibraryExA(pszModulePath , hFile , dwFlags);
					HMODULE hMod = _LoadLibraryExA(pszModulePath , hFile , dwFlags);
					FixupNewlyLoadedModule(hMod , dwFlags);
					return hMod;
				}

				HMODULE WINAPI CAPIHook::LoadLibraryExW(PCWSTR pszModulePath, HANDLE hFile, DWORD dwFlags)
				{
					//std::string temStr;
					//WideString2Ascii(pszModulePath,temStr);
					//TRACE("**׼������EW%s**\n",temStr.c_str());
					// writelogW(pszModulePath,10);
					//HMODULE hMod = ::LoadLibraryExW(pszModulePath , hFile , dwFlags);
					HMODULE hMod = _LoadLibraryExW(pszModulePath , hFile , dwFlags);
					FixupNewlyLoadedModule(hMod , dwFlags);
					return hMod;
				}

				FARPROC WINAPI CAPIHook::GetProcAddress(HMODULE hMod, PCSTR pszProcName)
				{

					FARPROC pfn = GetProcAddressRaw(hMod , pszProcName);
					if(hookState==0){
						return pfn;
					}
					CAPIHook *p = sm_pHead;

					for(;(pfn != NULL) && (p != NULL); p = p->m_pNext)
					{

						if( pfn == p->m_pfnOrig )
						{
							pfn = p->m_pfnHook;
							break;
						}
					}

					return pfn;
				}


				// ע�⣺�÷�������Ϊ����
				FARPROC WINAPI CAPIHook::GetProcAddressRaw(HMODULE hMod, PCSTR pszProcName)
				{
					//return ::GetProcAddress(hMod , pszProcName);
					return _GetProcAddress(hMod , pszProcName);

				}

				//
				// �������޸�ָ������������ģ��������
				//
				// ������fExcludeAPIHookMod ��
				// ע�� ���̿ռ��ڿ��ܰ������ģ�飬����kernel32.dll���������xxx.exe
				//		ÿ��ģ�鶼���������ѵ������(�����ģ�����е��õ�����ģ��ĺ���)��
				//		���������ʾ��ReplaceIATEntryInAllMods�������ڵ�ģ���Ƿ�Ҫ�޸������
				//		������ģ���������޸ĵĻ���������ʽ�ص��ñ��ҽӺ���
				//
				BOOL WINAPI CAPIHook::ReplaceIATEntryInAllMods(
					PCSTR pszCalleeModName,	
					PROC  pfnOrig,
					PROC  pfnHook,			
					BOOL  fExcludeAPIHookMod)		
				{
					HMODULE hModThisMod = fExcludeAPIHookMod?ModuleFromAddress(ReplaceIATEntryInAllMods) :NULL;

					//
					// �õ������ڵ�ģ���б�
					//
					HANDLE	hthSnapshot	= ::CreateToolhelp32Snapshot(TH32CS_SNAPMODULE , 0);
					if( hthSnapshot == NULL )
						return FALSE;

					//
					// ͨ������ ReplaceIATEntryInOneMod �����޸�ÿ��ģ�������
					//
					MODULEENTRY32 me = { sizeof(me) };
					BOOL fMoreMods = ::Module32First(hthSnapshot , &me);	

					for(;fMoreMods ;fMoreMods = ::Module32Next(hthSnapshot , &me))
					{	
						if( me.hModule != hModThisMod )		
						{	
							if( ReplaceIATEntryInOneMod(pszCalleeModName , pfnOrig , pfnHook , me.hModule) )
								TRACE("%sģ���޸ĳɹ�\n",me.szModule);
							else
								;//TRACE("%sģ���޸�ʧ��\n",me.szModule);

						}

					}

					return TRUE;
				}


				//
				// �������޸�ָ��������ָ��ģ��������
				//
				//
				BOOL WINAPI CAPIHook::ReplaceIATEntryInOneMod(
					PCSTR pszCalleeModName,		// Ҫ�ҽӵ�API���ڵ�ģ������
					PROC  pfnOrig,				// Ҫ�ҽӵĺ�����ַ
					PROC  pfnHook,				// ����ĺ�����ַ
					HMODULE hmodCaller)			// ָ����ģ��		
				{
					//
					// �ȵõ�ָ��ģ���������׵�ַ pImportDesc ������������˳�
					// �ٱ��������Ѱ���ɲ���pszCaleeModNameָ����ģ��(DLL)���Ҳ���ָ��ģ�����˳�
					// ע�⣺������������е������ַ���������ANSI(��������UNICODE)
					// Ȼ�����DLL(ģ��)��Ѱ��ָ���ĺ�����
					//

					ULONG	ulSize;
					PIMAGE_IMPORT_DESCRIPTOR pImportDesc=(PIMAGE_IMPORT_DESCRIPTOR)ImageDirectoryEntryToData(hmodCaller,
						TRUE,IMAGE_DIRECTORY_ENTRY_IMPORT,&ulSize);
					if( pImportDesc == NULL)
					{
						//
						// û�������
						//
						return FALSE;
					}


					for(; pImportDesc->Name ; pImportDesc++)
					{	
						PSTR pszModName = (PSTR)((PBYTE)hmodCaller + pImportDesc->Name);
						if( lstrcmpiA( pszModName , pszCalleeModName ) ==0 )
							break;
					}
					if(pImportDesc->Name==0)
					{
						// û���ҵ�ָ����DLL(ģ��)		
						return FALSE;
					}


					//
					// ����ָ��ģ���������ÿ�����뺯��
					//

					PIMAGE_THUNK_DATA pThunk=(PIMAGE_THUNK_DATA)((PBYTE)hmodCaller + pImportDesc->FirstThunk );
					for(; pThunk->u1.Function ; pThunk++)
					{
						PROC *ppfn=(PROC*)&pThunk->u1.Function;
						BOOL fFound=(*ppfn == pfnOrig);

						if( !fFound && (*ppfn > sm_pvMaxAppAddr))
						{
							// �����������98�ĵ���ģʽ��
							// �����ַ��ָ��һ��ָ��(cPushOpCode) , ��ָ�����Ǻ�����ȷ�ĵ�ַ
							LPBYTE pbInFunc = (LPBYTE)*ppfn;
							if( pbInFunc[0] == cPushOpCode )
							{
								ppfn = (PROC *)&pbInFunc[1];
								fFound = (*ppfn == pfnOrig);
							}
						}

						if( fFound )
						{
							WriteProcessMemory(GetCurrentProcess(),ppfn,&pfnHook,
								sizeof(pfnHook),NULL);
							return TRUE;
						}

					}

					return FALSE;

				}

				// ���ڴ��ַ�������ڵ�ģ����
				// ͨ���ú������Դ���һ��������ַָ�룬���ɷ��ذ������ģ����
				HMODULE CAPIHook::ModuleFromAddress(PVOID pv)
				{
					MEMORY_BASIC_INFORMATION	mbi;
					return ( (VirtualQuery(pv , &mbi , sizeof(mbi)) != 0)?(HMODULE)mbi.AllocationBase : NULL);
				}



			}
		}

	}
}