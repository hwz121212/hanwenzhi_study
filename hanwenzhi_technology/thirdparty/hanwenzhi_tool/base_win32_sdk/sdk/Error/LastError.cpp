#include "stdafx.h"
#include "LastError.h"


namespace sdk
{
	CString CLastError::GetLastErr(int iCode)
	{
		CString strReturn = TEXT("Error number not found.");
		DWORD dwError = iCode;

		HLOCAL hlocal = NULL;   // Buffer that gets the error message string

		// Get the error code's textual description
		BOOL fOk = FormatMessage(FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_ALLOCATE_BUFFER, 
									NULL, dwError, MAKELANGID(LANG_ENGLISH, SUBLANG_ENGLISH_US), 
									(PTSTR) &hlocal, 0, NULL);

		if (!fOk) 
		{
			// Is it a network-related error?
			HMODULE hDll = LoadLibraryEx(TEXT("netmsg.dll"), NULL, DONT_RESOLVE_DLL_REFERENCES);
			if (hDll != NULL) 
			{
				FormatMessage(
					FORMAT_MESSAGE_FROM_HMODULE | FORMAT_MESSAGE_FROM_SYSTEM,
					hDll, dwError, MAKELANGID(LANG_ENGLISH, SUBLANG_ENGLISH_US),
					(PTSTR) &hlocal, 0, NULL);
				FreeLibrary(hDll);
			}
		}

		if (hlocal != NULL) 
		{
			strReturn = (PCTSTR) LocalLock(hlocal);			
			LocalFree(hlocal);
		} 
		
		return strReturn;
	}





}

