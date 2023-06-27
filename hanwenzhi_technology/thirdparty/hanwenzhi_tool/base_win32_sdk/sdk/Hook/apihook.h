// APIHook.h: interface for the CAPIHook class.
// ����ʵ����ͨ���޸ĵ������ʵ��hook�ķ�ʽ��
// ʵ��API�Ĺҽ�(HOOK)
// writer : zhengheng 
// date	  : 5/14/04
// ����������Ĵ�������<Window���ı��>
// ����ʵ���˽����ڶ�API�Ĺҽ� ����Ҫ�ҽ�ϵͳ�����н���Ӧ�������ĳ��DLLע�뼼��(���繳��)
// 
// ΪʲôҪʹ��_HOOKALL��:
//		ʹ�øú꽫��ҽ�LoadLibraryA(W),LoadLibraryExA(W),GetProcAddress�������
//		�ҽ��������������ʹ��ָ�������ĹҽӸ����ף������ڼ�����dllʱҲ����ȷ���޸��䵼���
//����ϸԭ�����<Window���ı��>��22�½�
//		�����Ҫ�ҽ�ĳ�����̵ĺ�����������Ըý��̵��ü������ҽӵĺ�����ȫ�����������ѿ��ƣ��Ϳ��Բ��ú�
//
//
// ��λָ����ҽӺ�����ԭ��ַ��
//		��ʱδʵ��		
//      һ�����������hook�������ٵ��ñ����������ϵ�ַ
//
// ������Ա��
//		���캯��������ReplaceIATEntryInAllMod�ҽ�
//		��������������ReplaceIATEntryInAllMod����ҽ�
//
//
// ʹ�÷�����
//		.h
//		typedef int (WINAPI *PFNMESSAGEBOXA)(HWND,PCSTR,PCSTR,UINT);
//		typedef int (WINAPI *PFNMESSAGEBOXW)(HWND,PCWSTR,PCWSTR,UINT);
//	
//		�������-���� .h
//		int WINAPI Hook_MessageBoxW(HWND hWnd , PCWSTR pszText , LPCWSTR pszCaption,UINT uType);
//		int WINAPI Hook_MessageBoxA(HWND hWnd , PCSTR pszText , LPCSTR pszCaption,UINT uType);
//
//		Ҫ���صĺ��� .cpp
//		CAPIHook g_MessageBoxA("User32.dll","MessageBoxA",(PROC)Hook_MessageBoxA,TRUE/FALSE);
//		CAPIHook g_MessageBoxW("User32.dll","MessageBoxW",(PROC)Hook_MessageBoxW,TRUE/FALSE);
//
//		����������� .cpp
//		int WINAPI Hook_MessageBoxW(HWND hWnd , PCWSTR pszText , LPCWSTR pszCaption,UINT uType)
//		{
//			int ret = ((PFNMESSAGEBOXW)(PROC)g_MessageBoxW)(hWnd,pszText,pszCaption,uType);
//			return ret;
//		}
//		int WINAPI Hook_MessageBoxA(HWND hWnd , PCSTR pszText , LPCSTR pszCaption,UINT uType)
//		{
//			int ret = ((PFNMESSAGEBOXA)(PROC)g_MessageBoxA)(hWnd,pszText,pszCaption,uType);
//			return ret;
//		}
//////////////////////////////////////////////////////////////////////
//#define _HOOKALL 


#ifndef _H_APIHOOK_D9818A08_E513_4C3A_B871_EDECE33FA910
#define _H_APIHOOK_D9818A08_E513_4C3A_B871_EDECE33FA910


namespace sdk
{
	namespace util
	{
		namespace system
		{
			namespace hook
			{

				class CAPIHook  
				{
				public:
					CAPIHook(PCSTR pszCaleeModName , PSTR pszFuncName , PROC pfnHook , BOOL fExcludeAPIHookMod);
					~CAPIHook();

					// ����API��ʵ��ַ
					operator PROC() { return m_pfnOrig;}
					// Calls the real GetProcAddress
					static FARPROC WINAPI GetProcAddressRaw(HMODULE hMod ,PCSTR pszProcName);

					//private:
				public:
					static FARPROC WINAPI GetProcAddress(HMODULE hMod , PCSTR pszProcName);
					static HMODULE ModuleFromAddress(PVOID pv);
					// *** ��Ա���� ***
					// ����������ģ��� import section �ڸı��ַ
					static BOOL WINAPI ReplaceIATEntryInAllMods(
						PCSTR pszCalleeModName,		
						PROC  pfnOrig,				
						PROC  pfnHook,				
						BOOL fExcludeAPIHookMod);	
					// ������ָ��ģ��� import section �ڸı��ַ
					static BOOL WINAPI ReplaceIATEntryInOneMod(
						PCSTR pszCalleeModName,	
						PROC  pfnOrig,		
						PROC  pfnHook,			
						HMODULE hmodCaller);	

					// ��ĳ��DLL�ڹҽ�API��ű�����ʱ������������£���DLL�ڶԱ��ҽӺ����ĵ�������ʵ��
					// �÷���������Ϊ�������������
					// Used when a DLL is newly loaded after hooking a function
					static void WINAPI FixupNewlyLoadedModule(HMODULE hMod , DWORD dwFlags);

					// ��DLL������ʱ���������º����Ĺҹ�
					static HMODULE WINAPI LoadLibraryExW(PCWSTR pszModulePath,HANDLE hFile,DWORD dwFlags);
					static HMODULE WINAPI LoadLibraryExA(PCSTR pszModulePath,HANDLE hFile,DWORD dwFlags);
					static HMODULE WINAPI LoadLibraryW(PCWSTR pszModulePath);
					static HMODULE WINAPI LoadLibraryA(PCSTR pszModulePath);

					// *** ��Ա���� ***
					static PVOID sm_pvMaxAppAddr;		// Maximum private memory address
					static CAPIHook *sm_pHead;			// 
					CAPIHook *m_pNext;					// 
					PCSTR	m_pszCalleeModName;			// API���ڵ�ģ��(ANSI) Module containing the function
					PCSTR	m_pszFuncName;				// Ҫ�ҽӵ�API����(ANSI) Function name in callee
					PROC	m_pfnOrig;					// API��ʵ��ַ 
					PROC	m_pfnHook;					// �ҽӺ�����ַ
					BOOL	m_fExcludeAPIHookMod;		// ʵ�ֹҽ�? Hook module w/CAPIHook implementation? Ӧ���ǻ�ԭ�����ð�
				private:
					//�������2015��8��10�գ���ǰ������Ƶ���_HOOKALL����ɶ��¼�dll��hook��֮ǰ��hookģʽ�ǲ�hook��ģ�飬�Ҹĳ���hookҲ������ģ�飬�������Ժ����Ҫ�����������ԭʼ��ַ��ס
					static void initHook();
					static int hasInit;
					static int hookState;




#ifdef _HOOKALL
					static CAPIHook sm_LoadLibraryA;
					static CAPIHook sm_LoadLibraryW;
					static CAPIHook sm_LoadLibraryExA;
					static CAPIHook sm_LoadLibraryExW;
					static CAPIHook sm_GetProcAddress;
#endif
				};


			}
		}
		



	}

}

#endif