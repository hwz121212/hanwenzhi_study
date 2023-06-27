// APIHook.h: interface for the CAPIHook class.
// 本类实现了通过修改导入表来实现hook的方式，
// 实现API的挂接(HOOK)
// writer : zhengheng 
// date	  : 5/14/04
// 声明：该类的代码来自<Window核心编程>
// 该类实现了进程内对API的挂接 ，若要挂接系统内所有进程应该配合用某种DLL注入技术(比如钩子)
// 
// 为什么要使用_HOOKALL宏:
//		使用该宏将会挂接LoadLibraryA(W),LoadLibraryExA(W),GetProcAddress五个函数
//		挂接这五个函数，将使对指定函数的挂接更彻底，可以在加载新dll时也能正确的修改其导入表，
//。详细原因查阅<Window核心编程>第22章节
//		如果仅要挂接某个进程的函数，并且你对该进程调用即将被挂接的函数完全清楚或可以自已控制，就可以不用宏
//
//
// 如何恢复被挂接函数的原地址：
//		暂时未实现		
//      一般情况下是在hook函数中再调用保留起来的老地址
//
// 函数成员：
//		构造函数：调用ReplaceIATEntryInAllMod挂接
//		析构函数：调用ReplaceIATEntryInAllMod解除挂接
//
//
// 使用范例：
//		.h
//		typedef int (WINAPI *PFNMESSAGEBOXA)(HWND,PCSTR,PCSTR,UINT);
//		typedef int (WINAPI *PFNMESSAGEBOXW)(HWND,PCWSTR,PCWSTR,UINT);
//	
//		替代函数-声明 .h
//		int WINAPI Hook_MessageBoxW(HWND hWnd , PCWSTR pszText , LPCWSTR pszCaption,UINT uType);
//		int WINAPI Hook_MessageBoxA(HWND hWnd , PCSTR pszText , LPCSTR pszCaption,UINT uType);
//
//		要拦截的函数 .cpp
//		CAPIHook g_MessageBoxA("User32.dll","MessageBoxA",(PROC)Hook_MessageBoxA,TRUE/FALSE);
//		CAPIHook g_MessageBoxW("User32.dll","MessageBoxW",(PROC)Hook_MessageBoxW,TRUE/FALSE);
//
//		替代函数定义 .cpp
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

					// 返回API真实地址
					operator PROC() { return m_pfnOrig;}
					// Calls the real GetProcAddress
					static FARPROC WINAPI GetProcAddressRaw(HMODULE hMod ,PCSTR pszProcName);

					//private:
				public:
					static FARPROC WINAPI GetProcAddress(HMODULE hMod , PCSTR pszProcName);
					static HMODULE ModuleFromAddress(PVOID pv);
					// *** 成员方法 ***
					// 进程内所有模块的 import section 内改变地址
					static BOOL WINAPI ReplaceIATEntryInAllMods(
						PCSTR pszCalleeModName,		
						PROC  pfnOrig,				
						PROC  pfnHook,				
						BOOL fExcludeAPIHookMod);	
					// 进程内指定模块的 import section 内改变地址
					static BOOL WINAPI ReplaceIATEntryInOneMod(
						PCSTR pszCalleeModName,	
						PROC  pfnOrig,		
						PROC  pfnHook,			
						HMODULE hmodCaller);	

					// 当某个DLL在挂接API后才被加载时，在这种情况下，该DLL内对被挂接函数的调用是真实的
					// 该方法就是因为解决这个问题而设
					// Used when a DLL is newly loaded after hooking a function
					static void WINAPI FixupNewlyLoadedModule(HMODULE hMod , DWORD dwFlags);

					// 当DLL被加载时，调用以下函数的挂钩
					static HMODULE WINAPI LoadLibraryExW(PCWSTR pszModulePath,HANDLE hFile,DWORD dwFlags);
					static HMODULE WINAPI LoadLibraryExA(PCSTR pszModulePath,HANDLE hFile,DWORD dwFlags);
					static HMODULE WINAPI LoadLibraryW(PCWSTR pszModulePath);
					static HMODULE WINAPI LoadLibraryA(PCSTR pszModulePath);

					// *** 成员变量 ***
					static PVOID sm_pvMaxAppAddr;		// Maximum private memory address
					static CAPIHook *sm_pHead;			// 
					CAPIHook *m_pNext;					// 
					PCSTR	m_pszCalleeModName;			// API处在的模块(ANSI) Module containing the function
					PCSTR	m_pszFuncName;				// 要挂接的API名称(ANSI) Function name in callee
					PROC	m_pfnOrig;					// API真实地址 
					PROC	m_pfnHook;					// 挂接函数地址
					BOOL	m_fExcludeAPIHookMod;		// 实现挂接? Hook module w/CAPIHook implementation? 应该是还原的作用吧
				private:
					//这里加于2015年8月10日，以前程序设计的用_HOOKALL来完成对新加dll的hook，之前的hook模式是不hook本模块，我改成了hook也包含本模块，这样做以后就需要把五个函数的原始地址记住
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