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

				//20131031日加上，为了hook所有东西--------------------将本系统中使用的对应函数都用新的了
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
				// 当程序运行在98的调试模式下，调试器会使模块的import section指向一个存根。
				//
				// 最大内存地址(仅用于Window98)
				PVOID CAPIHook::sm_pvMaxAppAddr = NULL;
				//const BYTE cPushOpCode = 0x68;
				//
				//////////////////////////////////////////////////////////////////
				//
				// CAPIHook 对象链接表的头指针
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
				// 挂接 LoadLibrary和GetProcAddress方法
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
				// 构造函数：修改输入模块字节，挂接指定函数！
				// 参数：
				//		fExcludeAPIHookMod：表示是否要修改本模块(module of hook api) 的挂接函数的地址
				//							该参数直接传给ReplaceIATEntryInAllMods , 
				//							关于该参数的作用可以参考ReplaceIATEntryInAllMods的参数说明
				// fExcludeAPIHookMod如果是true，则本模块不hook
				CAPIHook::CAPIHook(PCSTR pszCalleeModName , PSTR pszFuncName , PROC pfnHook ,
					BOOL fExcludeAPIHookMod)
				{
					if(this->hasInit==0){
						initHook();
					}
					if( sm_pvMaxAppAddr = NULL)
					{
						// window98 only
						// 得到应用程序和DLL可到达的最大内存访问地址
						SYSTEM_INFO	si;
						GetSystemInfo(&si);
						sm_pvMaxAppAddr = si.lpMaximumApplicationAddress;
					}

					m_pNext	= sm_pHead;
					sm_pHead = this;

					// 保存挂接的API的信息
					// 包括：
					//	 动态链接库
					//	 要HOOK的函数名称
					//	 替代函数地址
					//	 保存原函数地址
					m_pszCalleeModName		= pszCalleeModName;		
					m_pszFuncName			= pszFuncName;			
					m_pfnHook				= pfnHook;				
					m_fExcludeAPIHookMod	= fExcludeAPIHookMod;
					m_pfnOrig				= GetProcAddressRaw( ::GetModuleHandleA(pszCalleeModName) , m_pszFuncName);


					TRACE("**准备修改%s**\n",m_pszFuncName);
					ASSERT( m_pfnOrig != NULL);

					if( m_pfnOrig > sm_pvMaxAppAddr)
					{
						// 这个地址在共享DLL里 ，地址应该被修复
						LPBYTE pb = (LPBYTE)m_pfnOrig;
						if(pb[0] == cPushOpCode )
						{
							//跳过PUSH代码，得到真实地址
							PVOID pv = *(PVOID *)&pb[1];
							m_pfnOrig = (PROC)pv;
						}

					}

					// 在所有模块挂接这个函数
					BOOL r=ReplaceIATEntryInAllMods(m_pszCalleeModName , m_pfnOrig , m_pfnHook , 
						m_fExcludeAPIHookMod);


				}
				//这个方法没测试过，不知道是否好用
				CAPIHook::~CAPIHook()
				{
					// 解除挂接
					ReplaceIATEntryInAllMods(m_pszCalleeModName , m_pfnHook , m_pfnOrig , 
						m_fExcludeAPIHookMod);

					//从链表中删除该对象实例
					CAPIHook *p = sm_pHead;
					if( p == this )
					{
						sm_pHead = p->m_pNext;
					}
					else
					{
						// fFound在此处仅用来判断是否删除成功
						BOOL fFound = FALSE;

						// 遍历链表
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

				// 为新载入的DLL 改写输入表以挂接函数
				// dwFlag 为LoadLibraryExA(W)传入的参数
				void WINAPI CAPIHook::FixupNewlyLoadedModule(HMODULE hMod, DWORD dwFlags)
				{
					if( (hMod != NULL) && ((dwFlags & LOAD_LIBRARY_AS_DATAFILE) == 0))
					{
						for( CAPIHook *p = sm_pHead; p!=NULL ;p = p->m_pNext)
						{
							if(p->m_pszFuncName){
								TRACE("**挂接%s**\n",p->m_pszFuncName);
							}
							ReplaceIATEntryInOneMod(p->m_pszCalleeModName , 
								p->m_pfnOrig , p->m_pfnHook , hMod);

						}
					}
				}
				//void WideString2Ascii(const wchar_t* pwszSrc,std::string& strOut)  ;
				void writelogW(LPCWSTR content,int level);
				// 挂接LoadLibraryA的HOOK函数
				HMODULE WINAPI CAPIHook::LoadLibraryA(PCSTR pszModulePath)
				{
					TRACE("**准备加载A%s**\n",pszModulePath);
					//HMODULE hMod = ::LoadLibraryA(pszModulePath);
					HMODULE hMod = _LoadLibraryA(pszModulePath);
					// 为载入的DLL修改输入表
					FixupNewlyLoadedModule(hMod , 0);
					return hMod;
				}
				// 挂接LoadLibraryW的HOOK函数
				HMODULE WINAPI CAPIHook::LoadLibraryW(PCWSTR pszModulePath)
				{
					//std::string temStr;
					//WideString2Ascii(pszModulePath,temStr);
					//TRACE("**准备加载W%s**\n",temStr.c_str());
					// writelogW(pszModulePath,10);
					//HMODULE hMod = ::LoadLibraryW(pszModulePath);
					HMODULE hMod = _LoadLibraryW(pszModulePath);
					// 为载入的DLL修改输入表
					FixupNewlyLoadedModule(hMod , 0);
					return hMod;
				}

				HMODULE WINAPI CAPIHook::LoadLibraryExA(PCSTR pszModulePath, HANDLE hFile, DWORD dwFlags)
				{

					TRACE("**准备加载EA%s**\n",pszModulePath);
					//HMODULE hMod = ::LoadLibraryExA(pszModulePath , hFile , dwFlags);
					HMODULE hMod = _LoadLibraryExA(pszModulePath , hFile , dwFlags);
					FixupNewlyLoadedModule(hMod , dwFlags);
					return hMod;
				}

				HMODULE WINAPI CAPIHook::LoadLibraryExW(PCWSTR pszModulePath, HANDLE hFile, DWORD dwFlags)
				{
					//std::string temStr;
					//WideString2Ascii(pszModulePath,temStr);
					//TRACE("**准备加载EW%s**\n",temStr.c_str());
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


				// 注意：该方法不能为内联
				FARPROC WINAPI CAPIHook::GetProcAddressRaw(HMODULE hMod, PCSTR pszProcName)
				{
					//return ::GetProcAddress(hMod , pszProcName);
					return _GetProcAddress(hMod , pszProcName);

				}

				//
				// 描述：修改指定进程中所有模块的输入表
				//
				// 参数：fExcludeAPIHookMod ：
				// 注： 进程空间内可能包含多个模块，比如kernel32.dll，自身程序xxx.exe
				//		每个模块都可能有自已的输入表(如果该模块内有调用到其它模块的函数)，
				//		这个参数表示：ReplaceIATEntryInAllMods函数所在的模块是否要修改输入表
				//		如果这个模块的输入表不修改的话，可以显式地调用被挂接函数
				//
				BOOL WINAPI CAPIHook::ReplaceIATEntryInAllMods(
					PCSTR pszCalleeModName,	
					PROC  pfnOrig,
					PROC  pfnHook,			
					BOOL  fExcludeAPIHookMod)		
				{
					HMODULE hModThisMod = fExcludeAPIHookMod?ModuleFromAddress(ReplaceIATEntryInAllMods) :NULL;

					//
					// 得到进程内的模块列表
					//
					HANDLE	hthSnapshot	= ::CreateToolhelp32Snapshot(TH32CS_SNAPMODULE , 0);
					if( hthSnapshot == NULL )
						return FALSE;

					//
					// 通过调用 ReplaceIATEntryInOneMod 依次修改每个模块输入表
					//
					MODULEENTRY32 me = { sizeof(me) };
					BOOL fMoreMods = ::Module32First(hthSnapshot , &me);	

					for(;fMoreMods ;fMoreMods = ::Module32Next(hthSnapshot , &me))
					{	
						if( me.hModule != hModThisMod )		
						{	
							if( ReplaceIATEntryInOneMod(pszCalleeModName , pfnOrig , pfnHook , me.hModule) )
								TRACE("%s模块修改成功\n",me.szModule);
							else
								;//TRACE("%s模块修改失败\n",me.szModule);

						}

					}

					return TRUE;
				}


				//
				// 描述：修改指定进程中指定模块的输入表
				//
				//
				BOOL WINAPI CAPIHook::ReplaceIATEntryInOneMod(
					PCSTR pszCalleeModName,		// 要挂接的API所在的模块名称
					PROC  pfnOrig,				// 要挂接的函数地址
					PROC  pfnHook,				// 替代的函数地址
					HMODULE hmodCaller)			// 指定的模块		
				{
					//
					// 先得到指定模块输入表的首地址 pImportDesc ，无输入表则退出
					// 再遍历输入表，寻找由参数pszCaleeModName指定的模块(DLL)，找不到指定模块则退出
					// 注意：程序内输入表中的所有字符串都是用ANSI(决不能用UNICODE)
					// 然后遍历DLL(模块)，寻找指定的函数名
					//

					ULONG	ulSize;
					PIMAGE_IMPORT_DESCRIPTOR pImportDesc=(PIMAGE_IMPORT_DESCRIPTOR)ImageDirectoryEntryToData(hmodCaller,
						TRUE,IMAGE_DIRECTORY_ENTRY_IMPORT,&ulSize);
					if( pImportDesc == NULL)
					{
						//
						// 没有输入表
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
						// 没有找到指定的DLL(模块)		
						return FALSE;
					}


					//
					// 遍历指定模块的输入表的每个导入函数
					//

					PIMAGE_THUNK_DATA pThunk=(PIMAGE_THUNK_DATA)((PBYTE)hmodCaller + pImportDesc->FirstThunk );
					for(; pThunk->u1.Function ; pThunk++)
					{
						PROC *ppfn=(PROC*)&pThunk->u1.Function;
						BOOL fFound=(*ppfn == pfnOrig);

						if( !fFound && (*ppfn > sm_pvMaxAppAddr))
						{
							// 如果是运行在98的调试模式下
							// 这个地址是指向一个指令(cPushOpCode) , 而指令后才是函数正确的地址
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

				// 由内存地址返回所在的模块句柄
				// 通过该函数可以传入一个函数地址指针，即可返回包含其的模块句柄
				HMODULE CAPIHook::ModuleFromAddress(PVOID pv)
				{
					MEMORY_BASIC_INFORMATION	mbi;
					return ( (VirtualQuery(pv , &mbi , sizeof(mbi)) != 0)?(HMODULE)mbi.AllocationBase : NULL);
				}



			}
		}

	}
}