#include "stdafx.h"
#include "BalloonUtil.h"



namespace sdk
{


	//IDI_TRUECRYPT_ICON
	void CBalloonUtil::TaskBarIconDisplayBalloonTooltip (HWND hwnd, UINT iIcon, wchar_t *headline, wchar_t *text, BOOL warning)
	{
		COSVersion::OSVersionEnum nCurrentOS = COSVersion::WIN_UNKNOWN;
		int CurrentOSMajor = 0;
		int CurrentOSMinor = 0;
		int CurrentOSServicePack = 0;
		COSVersion::GetOSVersionInfo(nCurrentOS, CurrentOSMajor, CurrentOSMinor, CurrentOSServicePack);		
		if (nCurrentOS == COSVersion::WIN_2000)
		{
			MessageBoxW (hwnd, text, headline, warning ? MB_ICONWARNING : MB_ICONINFORMATION);
			return;
		}

		NOTIFYICONDATAW tnid; 

		ZeroMemory (&tnid, sizeof (tnid));

		tnid.cbSize = sizeof (tnid); 
		tnid.hWnd = hwnd; 
		tnid.uID = iIcon; 
		//tnid.uVersion = (IsOSAtLeast (WIN_VISTA) ? NOTIFYICON_VERSION_4 : NOTIFYICON_VERSION);

		//Shell_NotifyIconW (NIM_SETVERSION, &tnid);

		tnid.uFlags = NIF_INFO; 
		tnid.dwInfoFlags = (warning ? NIIF_WARNING : NIIF_INFO);
		tnid.uTimeout = (COSVersion::IsOSAtLeast (COSVersion::WIN_VISTA) ? 1000 : 5000); // in ms

		wcsncpy (tnid.szInfoTitle, headline, ARRAYSIZE (tnid.szInfoTitle) - 1);
		wcsncpy (tnid.szInfo, text, ARRAYSIZE (tnid.szInfo) - 1);

		// Display the balloon tooltip quickly twice in a row to avoid the slow and unwanted "fade-in" phase
		Shell_NotifyIconW (NIM_MODIFY, &tnid);
		Shell_NotifyIconW (NIM_MODIFY, &tnid);
	}




}
