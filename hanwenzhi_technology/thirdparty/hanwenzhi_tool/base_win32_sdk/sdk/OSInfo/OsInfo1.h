#ifndef _H_OS_INFO_858A9EFB_8A2D_450E_84FA_5C3EFBA4CBCB
#define _H_OS_INFO_858A9EFB_8A2D_450E_84FA_5C3EFBA4CBCB

namespace sdk
{
	namespace os_info
	{
		AFX_EXT_API BOOL IsPE();
		AFX_EXT_API BOOL JudgeW7_PE();



		
		AFX_EXT_API OSVERSIONINFOEX GetFullVersion();
		AFX_EXT_API DWORD GetOsVersion();

		AFX_EXT_API bool IsXPOrLater();
		AFX_EXT_API bool IsVista();
		AFX_EXT_API bool IsVistaOrLater();
		AFX_EXT_API bool Is7();
		AFX_EXT_API bool Is7OrLater();
		AFX_EXT_API bool Is8();
		AFX_EXT_API bool Is8OrLater();
		AFX_EXT_API bool Is64Bit();

		AFX_EXT_API BOOL IsServerOS ();



		AFX_EXT_API int GetScreenWidth();
		AFX_EXT_API int GetScreenHeight();
		AFX_EXT_API int GetScreenWorkWidth();
		AFX_EXT_API int GetScreenWorkHeight();
		AFX_EXT_API int GetScreenColor();

		AFX_EXT_API string GetCookiesFolder();
		AFX_EXT_API string GetCacheFolder();
		AFX_EXT_API string GetAppDataFolder();

		AFX_EXT_API string GetFlashCookieFolder();
		
		
	}
}






#endif


