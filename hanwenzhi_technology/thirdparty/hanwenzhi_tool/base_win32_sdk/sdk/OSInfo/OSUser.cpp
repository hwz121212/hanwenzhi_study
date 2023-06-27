#include "stdafx.h"
#include "OSUser.h"
#include "OSVersion.h"



namespace sdk
{

	BOOL COSUser::IsAdmin (void)
	{
		return IsUserAnAdmin ();
	}



	BOOL COSUser::IsUacSupported ()
	{
		HKEY hkey;
		DWORD value = 1, size = sizeof (DWORD);

		if (!COSVersion::IsOSAtLeast (COSVersion::WIN_VISTA))
			return FALSE;

		if (RegOpenKeyEx (HKEY_LOCAL_MACHINE, "Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System", 0, KEY_READ, &hkey) == ERROR_SUCCESS)
		{
			if (RegQueryValueEx (hkey, "EnableLUA", 0, 0, (LPBYTE) &value, &size) != ERROR_SUCCESS)
				value = 1;

			RegCloseKey (hkey);
		}

		return value != 0;
	}



	BOOL COSUser::IsBuiltInAdmin ()
	{
		BOOL bReturn = FALSE;

		HANDLE procToken;
		DWORD size;

		if (!IsAdmin() || !OpenProcessToken (GetCurrentProcess(), TOKEN_QUERY, &procToken))
		{
			return bReturn;
		}

		do 
		{			
			if (GetTokenInformation (procToken, TokenUser, NULL, 0, &size) || GetLastError() != ERROR_INSUFFICIENT_BUFFER)break;
			TOKEN_USER *tokenUser = (TOKEN_USER *) malloc (size);
			if (!tokenUser)break;
				
			if (!GetTokenInformation (procToken, TokenUser, tokenUser, size, &size))break;
			bReturn = IsWellKnownSid (tokenUser->User.Sid, WinAccountAdministratorSid);
			
		} while (false);
		
		CloseHandle(procToken);

		return bReturn;
	}

	BOOL COSUser::IsRemoteSession()
	{
		return GetSystemMetrics (SM_REMOTESESSION) != 0;
	}
	




}



