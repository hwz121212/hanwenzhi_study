#include "stdafx.h"
#include "OsInfo.h"


namespace sdk{
	namespace os_info{

		BOOL IsPE()
		{
			HKEY hKey;
			long l_ret;
			char lpbuf[120];
			memset(lpbuf,0,120);
			DWORD dwSize=120;
			CString  strdata;
			l_ret = RegOpenKey(HKEY_LOCAL_MACHINE,_T("SYSTEM\\CurrentControlSet\\Control"),&hKey);
			CString str;
			str.Format(_T("%d"),l_ret);
			if (l_ret == ERROR_SUCCESS)
			{
				long l_ret2;
				l_ret2=RegQueryValueEx(hKey, _T("SystemBootDevice"),NULL,NULL,(BYTE*)lpbuf,&dwSize);
				if(l_ret2==ERROR_SUCCESS)
				{
					strdata.Format(_T("%s"),lpbuf);
					if (strdata.CompareNoCase(_T("ramdisk(0)"))==0)
					{
						return TRUE;
					}			
				}
			}

			return FALSE;
		}


		//判断PE是否在WINDOWS7上。TRUE是。FALSE不是。
		BOOL JudgeW7_PE()
		{
			CStringArray arrayDisk;
			char m_drives_name[500];
			char *ptr;
			GetLogicalDriveStrings(500,m_drives_name);
			ptr=m_drives_name;

			//获取系统盘符 
			UINT type;
			while (*ptr)
			{
				type = GetDriveType(ptr);
				int strLength = strlen(ptr);
				char *p = NULL;
				p = new char[strLength + 1];
				memset(p, 0, strLength + 1);
				memcpy(p, ptr, strLength);
				if (type == DRIVE_FIXED)

				{
					arrayDisk.Add(p);
				}

				ptr+=strlen(ptr)+1;

				if (p!= NULL)

				{
					delete []p;
					p = NULL;
				}

			} 

			int len;
			len = arrayDisk.GetSize();
			CString strdisk,temp,temp_W7,temp_XP;
			CFileFind filefind,filefind1,filefind2;
			BOOL Is_W7 = FALSE;//TRUE为W7，FALSE为其他系统

			for (int i =0; i<len;i++)
			{
				strdisk = arrayDisk.GetAt(i);

				temp_XP =strdisk+_T("\\Documents and Settings\\All Users");
				if (filefind.FindFile(temp_XP))
				{
					return FALSE;
				}
				temp_W7 =strdisk+_T("\\Users\\Default");
				if (filefind.FindFile(temp_W7))
				{
					return TRUE;
				}
			}

			return FALSE;
		}



		static OSVERSIONINFOEX InitFullVersion()
		{
			OSVERSIONINFOEX fullVersion;
			ZeroMemory(&fullVersion, sizeof(OSVERSIONINFOEX));
			fullVersion.dwOSVersionInfoSize = sizeof(OSVERSIONINFOEX);
			GetVersionEx((LPOSVERSIONINFO)&fullVersion);

			return fullVersion;
		}

		static bool InitIs64Bit()
		{
#if defined(_WIN64)
			return true;  // 64-bit programs run only on Win64
#else
			// 32-bit programs run on both 32-bit and 64-bit Windows
			// so must sniff
			BOOL f64 = FALSE;
			return (IsWow64Process(GetCurrentProcess(), &f64) && f64);
#endif
		}

		OSVERSIONINFOEX GetFullVersion()
		{
			static const OSVERSIONINFOEX fullVersion = InitFullVersion();
			return fullVersion;
		}

		DWORD GetOsVersion()
		{
			static const DWORD version = MAKEWORD(GetFullVersion().dwMinorVersion, GetFullVersion().dwMajorVersion);
			return version;
		}

		bool IsXPOrLater()
		{
			return (GetOsVersion() >= 0x0501);
		}

		bool IsVista()
		{
			return (GetOsVersion() == 0x0600);
		}

		bool IsVistaOrLater()
		{
			return (GetOsVersion() >= 0x0600);
		}

		bool Is7()
		{
			return (GetOsVersion() == 0x0601);
		}

		bool Is7OrLater()
		{
			return (GetOsVersion() >= 0x0601);
		}

		bool Is8()
		{
			return (GetOsVersion() == 0x0602);
		}

		bool Is8OrLater()
		{
			return (GetOsVersion() >= 0x0602);
		}

		bool Is64Bit()
		{
			const bool bIs64Bit = InitIs64Bit();
			return bIs64Bit;
		}

		BOOL IsServerOS ()
		{
			OSVERSIONINFOEXA osVer;
			osVer.dwOSVersionInfoSize = sizeof (OSVERSIONINFOEXA);
			GetVersionExA ((LPOSVERSIONINFOA) &osVer);

			return (osVer.wProductType == VER_NT_SERVER || osVer.wProductType == VER_NT_DOMAIN_CONTROLLER);
		}



		int GetScreenWidth()
		{
			return GetSystemMetrics(SM_CXSCREEN);
		}

		int GetScreenHeight()
		{
			return GetSystemMetrics(SM_CYSCREEN);
		}

		int GetScreenWorkWidth()
		{
			RECT rc;
			SystemParametersInfo(SPI_GETWORKAREA,   0,   &rc,   0) ;
			return rc.right;				
		}

		int GetScreenWorkHeight()
		{
			RECT rc;
			SystemParametersInfo(SPI_GETWORKAREA,   0,   &rc,   0) ;
			return rc.bottom;
		}

		int GetScreenColor()
		{
			HDC hdc=::GetDC(NULL);
			return GetDeviceCaps(hdc,BITSPIXEL); 
		}

		string GetCookiesFolder()
		{
			string strReturn;
			TCHAR szPath[MAX_PATH];				
			if (SHGetSpecialFolderPath(NULL, szPath, CSIDL_COOKIES, FALSE))
			{
				strReturn = szPath;  
			}
			return strReturn;
		}

		string GetCacheFolder()
		{
			string strReturn;
			TCHAR szPath[MAX_PATH];				
			if (SHGetSpecialFolderPath(NULL, szPath, CSIDL_INTERNET_CACHE, FALSE))
			{
				strReturn = szPath;  
			}
			return strReturn;
		}


		string GetAppDataFolder()
		{
			string strReturn;
			TCHAR szPath[MAX_PATH];				
			if (SHGetSpecialFolderPath(NULL, szPath, CSIDL_APPDATA, FALSE))
			{
				strReturn = szPath;  
			}
			return strReturn;
		}

		string GetFlashCookieFolder()
		{
			string strReturn;  
			strReturn	= GetAppDataFolder();
			strReturn	+=  "\\Macromedia\\Flash Player";
			return strReturn;
		}

		

	}
}
