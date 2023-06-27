#include "stdafx.h"
#include "ExeFile.h"



namespace sdk
{




	BOOL CExeFile::GetExecutableImageInformation (const string &path, string &version, string &description, string &companyName, string &productName)
	{
		DWORD handle;
		DWORD size = GetFileVersionInfoSize (path.c_str(), &handle);
		if (size == 0)
			return FALSE;

		void *buf = malloc (size);
		if (!GetFileVersionInfo (path.c_str(), handle, size, buf))
			return FALSE;

		version = description = companyName = productName = "";

		UINT varSize;
		VS_FIXEDFILEINFO *fileInfo;
		if (VerQueryValue (buf, "\\", (LPVOID *) &fileInfo, &varSize) && varSize > 0)
		{
			stringstream s;
			s << HIWORD (fileInfo->dwFileVersionMS) << '.' << LOWORD (fileInfo->dwFileVersionMS) << '.' << HIWORD (fileInfo->dwFileVersionLS) << '.' << LOWORD (fileInfo->dwFileVersionLS);
			version = s.str();
		}

		DWORD *langCodes;
		if (VerQueryValue (buf, "\\VarFileInfo\\Translation", (LPVOID *) &langCodes, &varSize) && varSize >= sizeof (DWORD))
		{
			char prefix[128];
			sprintf_s (prefix, sizeof (prefix), "\\StringFileInfo\\%04x%04x\\", LOWORD (langCodes[0]), HIWORD (langCodes[0]));

			char *str;
			if (VerQueryValue (buf, (string (prefix) + "FileDescription").c_str(), (LPVOID *) &str, &varSize) && varSize > 0)
				description = str;

			if (VerQueryValue (buf, (string (prefix) + "CompanyName").c_str(), (LPVOID *) &str, &varSize) && varSize > 0)
				companyName = str;

			if (VerQueryValue (buf, (string (prefix) + "ProductName").c_str(), (LPVOID *) &str, &varSize) && varSize > 0)
				productName = str;
		}

		free(buf);

		return TRUE;
	}




}