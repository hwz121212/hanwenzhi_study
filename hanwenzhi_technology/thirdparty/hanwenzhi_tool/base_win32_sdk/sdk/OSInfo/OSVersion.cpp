#include "stdafx.h"
#include "OSVersion.h"






namespace sdk
{
	
	//OSVersionEnum nCurrentOS = WIN_UNKNOWN;
	// 	int CurrentOSMajor = 0;
	// 	int CurrentOSMinor = 0;
	//int CurrentOSServicePack = 0;
	bool  COSVersion::GetOSVersionInfo(OSVersionEnum& nCurrentOS, int& CurrentOSMajor, int& CurrentOSMinor, int& CurrentOSServicePack)
	{

		OSVERSIONINFO os;
		os.dwOSVersionInfoSize = sizeof (OSVERSIONINFO);

		if (GetVersionEx (&os) == FALSE)
		{
			return false;
		}
		
		CurrentOSMajor = os.dwMajorVersion;
		CurrentOSMinor = os.dwMinorVersion;

		if (os.dwPlatformId == VER_PLATFORM_WIN32_NT && CurrentOSMajor == 5 && CurrentOSMinor == 0)
			nCurrentOS = WIN_2000;
		else if (os.dwPlatformId == VER_PLATFORM_WIN32_NT && CurrentOSMajor == 5 && CurrentOSMinor == 1)
			nCurrentOS = WIN_XP;
		else if (os.dwPlatformId == VER_PLATFORM_WIN32_NT && CurrentOSMajor == 5 && CurrentOSMinor == 2)
		{
			OSVERSIONINFOEX osEx;

			osEx.dwOSVersionInfoSize = sizeof (OSVERSIONINFOEX);
			GetVersionEx ((LPOSVERSIONINFOA) &osEx);

			if (osEx.wProductType == VER_NT_SERVER || osEx.wProductType == VER_NT_DOMAIN_CONTROLLER)
				nCurrentOS = WIN_SERVER_2003;
			else
				nCurrentOS = WIN_XP64;
		}
		else if (os.dwPlatformId == VER_PLATFORM_WIN32_NT && CurrentOSMajor == 6 && CurrentOSMinor == 0)
		{
			OSVERSIONINFOEX osEx;

			osEx.dwOSVersionInfoSize = sizeof (OSVERSIONINFOEX);
			GetVersionEx ((LPOSVERSIONINFOA) &osEx);

			if (osEx.wProductType == VER_NT_SERVER || osEx.wProductType == VER_NT_DOMAIN_CONTROLLER)
				nCurrentOS = WIN_SERVER_2008;
			else
				nCurrentOS = WIN_VISTA;
		}
		else if (os.dwPlatformId == VER_PLATFORM_WIN32_NT && CurrentOSMajor == 6 && CurrentOSMinor == 1)
			nCurrentOS = (IsServerOS() ? WIN_SERVER_2008_R2 : WIN_7);
		else if (os.dwPlatformId == VER_PLATFORM_WIN32_NT && CurrentOSMajor == 4)
			nCurrentOS = WIN_NT4;
		else if (os.dwPlatformId == VER_PLATFORM_WIN32_WINDOWS && os.dwMajorVersion == 4 && os.dwMinorVersion == 0)
			nCurrentOS = WIN_95;
		else if (os.dwPlatformId == VER_PLATFORM_WIN32_WINDOWS && os.dwMajorVersion == 4 && os.dwMinorVersion == 10)
			nCurrentOS = WIN_98;
		else if (os.dwPlatformId == VER_PLATFORM_WIN32_WINDOWS && os.dwMajorVersion == 4 && os.dwMinorVersion == 90)
			nCurrentOS = WIN_ME;
		else if (os.dwPlatformId == VER_PLATFORM_WIN32s)
			nCurrentOS = WIN_31;
		else
			nCurrentOS = WIN_UNKNOWN;

		return true;
	}





	BOOL COSVersion::IsOSAtLeast (OSVersionEnum reqMinOS)
	{
		return IsOSVersionAtLeast (reqMinOS, 0);
	}


	// Returns TRUE if the operating system is at least reqMinOS and service pack at least reqMinServicePack.
	// Example 1: IsOSVersionAtLeast (WIN_VISTA, 1) called under Windows 2008, returns TRUE.
	// Example 2: IsOSVersionAtLeast (WIN_XP, 3) called under Windows XP SP1, returns FALSE.
	// Example 3: IsOSVersionAtLeast (WIN_XP, 3) called under Windows Vista SP1, returns TRUE.
	BOOL COSVersion::IsOSVersionAtLeast (OSVersionEnum reqMinOS, int reqMinServicePack)
	{
		/* When updating this function, update IsOSAtLeast() in Ntdriver.c too. */

		OSVersionEnum nCurrentOS = WIN_UNKNOWN;
		int CurrentOSMajor = 0;
		int CurrentOSMinor = 0;
		int CurrentOSServicePack = 0;
		GetOSVersionInfo(nCurrentOS, CurrentOSMajor, CurrentOSMinor, CurrentOSServicePack);
		
		int major = 0, minor = 0;

		switch (reqMinOS)
		{
		case WIN_2000:			major = 5; minor = 0; break;
		case WIN_XP:			major = 5; minor = 1; break;
		case WIN_SERVER_2003:	major = 5; minor = 2; break;
		case WIN_VISTA:			major = 6; minor = 0; break;
		case WIN_7:				major = 6; minor = 1; break;

		default:
			break;
		}

		return ((CurrentOSMajor << 16 | CurrentOSMinor << 8 | CurrentOSServicePack)
			>= (major << 16 | minor << 8 | reqMinServicePack));
	}



	BOOL COSVersion::IsServerOS ()
	{
		OSVERSIONINFOEXA osVer;
		osVer.dwOSVersionInfoSize = sizeof (OSVERSIONINFOEXA);
		GetVersionExA ((LPOSVERSIONINFOA) &osVer);

		return (osVer.wProductType == VER_NT_SERVER || osVer.wProductType == VER_NT_DOMAIN_CONTROLLER);
	}



	std::string COSVersion::GetWindowsEdition ()
	{
		string osname = "win";

		OSVERSIONINFOEXA osVer;
		osVer.dwOSVersionInfoSize = sizeof (OSVERSIONINFOEXA);
		GetVersionExA ((LPOSVERSIONINFOA) &osVer);

		BOOL home = (osVer.wSuiteMask & VER_SUITE_PERSONAL);
		BOOL server = (osVer.wProductType == VER_NT_SERVER || osVer.wProductType == VER_NT_DOMAIN_CONTROLLER);

		HKEY hkey;
		char productName[300] = {0};
		DWORD productNameSize = sizeof (productName);
		if (RegOpenKeyEx (HKEY_LOCAL_MACHINE, "SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion", 0, KEY_QUERY_VALUE, &hkey) == ERROR_SUCCESS)
		{
			if (RegQueryValueEx (hkey, "ProductName", 0, 0, (LPBYTE) &productName, &productNameSize) != ERROR_SUCCESS || productNameSize < 1)
				productName[0] = 0;

			RegCloseKey (hkey);
		}

		OSVersionEnum nCurrentOS = WIN_UNKNOWN;
		int CurrentOSMajor = 0;
		int CurrentOSMinor = 0;
		int CurrentOSServicePack = 0;
		GetOSVersionInfo(nCurrentOS, CurrentOSMajor, CurrentOSMinor, CurrentOSServicePack);


		switch (nCurrentOS)
		{
		case WIN_2000:
			osname += "2000";
			break;

		case WIN_XP:
		case WIN_XP64:
			osname += "xp";
			osname += home ? "-home" : "-pro";
			break;

		case WIN_SERVER_2003:
			osname += "2003";
			break;

		case WIN_VISTA:
			osname += "vista";
			break;

		case WIN_SERVER_2008:
			osname += "2008";
			break;

		case WIN_7:
			osname += "7";
			break;

		case WIN_SERVER_2008_R2:
			osname += "2008r2";
			break;

		default:
			stringstream s;
			s << CurrentOSMajor << "." << CurrentOSMinor;
			osname += s.str();
			break;
		}

		if (server)
			osname += "-server";

		if (IsOSAtLeast (WIN_VISTA))
		{	
			if (home)
				osname += "-home";
			else if (strstr (productName, "Standard") != 0)
				osname += "-standard";
			else if (strstr (productName, "Professional") != 0)
				osname += "-pro";
			else if (strstr (productName, "Business") != 0)
				osname += "-business";
			else if (strstr (productName, "Enterprise") != 0)
				osname += "-enterprise";
			else if (strstr (productName, "Datacenter") != 0)
				osname += "-datacenter";
			else if (strstr (productName, "Ultimate") != 0)
				osname += "-ultimate";
		}

		if (GetSystemMetrics (SM_STARTER))
			osname += "-starter";
		else if (strstr (productName, "Basic") != 0)
			osname += "-basic";

		if (Is64BitOs())
			osname += "-x64";

		if (CurrentOSServicePack > 0)
		{
			stringstream s;
			s << "-sp" << CurrentOSServicePack;
			osname += s.str();
		}

		return osname;
	}


	BOOL COSVersion::Is64BitOs ()
	{
		static BOOL isWow64 = FALSE;
		static BOOL valid = FALSE;
		typedef BOOL (__stdcall *LPFN_ISWOW64PROCESS ) (HANDLE hProcess,PBOOL Wow64Process);
		LPFN_ISWOW64PROCESS fnIsWow64Process;

		if (valid)
			return isWow64;

		fnIsWow64Process = (LPFN_ISWOW64PROCESS) GetProcAddress (GetModuleHandle("kernel32"), "IsWow64Process");

		if (fnIsWow64Process != NULL)
			if (!fnIsWow64Process (GetCurrentProcess(), &isWow64))
				isWow64 = FALSE;

		valid = TRUE;
		return isWow64;
	}












}