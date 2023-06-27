#include "stdafx.h"
#include "OSInfo.h"
#include <WinInet.h>
#include <iptypes.h>
#include <IPHlpApi.h>
#include <nb30.h>

#include <comutil.h>
#pragma comment(lib, "comsuppw")
#include <wbemcli.h>


#pragma comment(lib, "wininet")
#pragma comment(lib, "iphlpapi")
#pragma comment(lib, "Netapi32")
#pragma comment(lib, "version")
#pragma comment(lib, "WbemUuid")

namespace sdk
{


	const DWORD STR_ARRAY_SIZE = 256;

	int	COsUtil::GetMemorySize()
	{
		MEMORYSTATUSEX memStatusEx;
		memStatusEx.dwLength = sizeof(MEMORYSTATUSEX);
		GlobalMemoryStatusEx(&memStatusEx);
		return memStatusEx.ullTotalPhys / (1024*1024);
	}



	int COsUtil::GetCptName(char v_szComputerName[], int v_nBufferSize)
	{
		return gethostname(v_szComputerName, v_nBufferSize);
	}


	DWORD COsUtil::GetOSMajorVersion()
	{
		OSVERSIONINFOEX osvi;
		BOOL bOsVersionInfoEx;

		// Try calling GetVersionEx using the OSVERSIONINFOEX structure.
		// If that fails, try using the OSVERSIONINFO structure.

		ZeroMemory(&osvi, sizeof(OSVERSIONINFOEX));
		osvi.dwOSVersionInfoSize = sizeof(OSVERSIONINFOEX);

		if (!(bOsVersionInfoEx = GetVersionEx((OSVERSIONINFO *)&osvi)))
		{
			// If OSVERSIONINFOEX doesn't work, try OSVERSIONINFO.
			osvi.dwOSVersionInfoSize = sizeof (OSVERSIONINFO);
			if (!GetVersionEx((OSVERSIONINFO *)&osvi))
			{
				return 0;
			}
		}

		return osvi.dwMajorVersion;
	}

	int	COsUtil::GetOSVersion(char v_szOSVersion[])
	{
		OSVERSIONINFOEX osvi;
		BOOL bOsVersionInfoEx;

		// Try calling GetVersionEx using the OSVERSIONINFOEX structure.
		// If that fails, try using the OSVERSIONINFO structure.

		ZeroMemory(&osvi, sizeof(OSVERSIONINFOEX));
		osvi.dwOSVersionInfoSize = sizeof(OSVERSIONINFOEX);

		if (!(bOsVersionInfoEx = GetVersionEx((OSVERSIONINFO *)&osvi)))
		{
			// If OSVERSIONINFOEX doesn't work, try OSVERSIONINFO.
			osvi.dwOSVersionInfoSize = sizeof (OSVERSIONINFO);
			if (!GetVersionEx((OSVERSIONINFO *)&osvi))
			{
				return -1;
			}
		}

		string	strOSInfo;//操作系统信息

		switch (osvi.dwPlatformId)
		{
		case VER_PLATFORM_WIN32_NT:
			{
				// Test for the product.
				if (osvi.dwMajorVersion <= 4)
					strOSInfo = "Microsoft Windows NT ";

				if (osvi.dwMajorVersion == 5 && osvi.dwMinorVersion == 0)
					strOSInfo = "Microsoft Windows 2000 ";

				if (osvi.dwMajorVersion == 5 && osvi.dwMinorVersion == 1)
					strOSInfo = "Microsoft Windows XP ";

				if (osvi.dwMajorVersion == 5 && osvi.dwMinorVersion == 2)
					strOSInfo = "Microsoft Windows 2003 ";

				if (osvi.dwMajorVersion == 6 && osvi.dwMinorVersion == 0)
					strOSInfo = "Microsoft Windows Vista ";

				if (osvi.dwMajorVersion == 6 && osvi.dwMinorVersion == 1)
					strOSInfo = "Microsoft Windows 7";

				// Test for product type.
				if (bOsVersionInfoEx)
				{
					if (osvi.wProductType == VER_NT_WORKSTATION)
					{
						(osvi.wSuiteMask & VER_SUITE_PERSONAL) ? (strOSInfo += "Personal ") : (strOSInfo += "Professional ");
					}
					else if ( osvi.wProductType == VER_NT_SERVER )
					{
						if (osvi.wSuiteMask & VER_SUITE_DATACENTER)
							strOSInfo += "DataCenter Server ";
						else if (osvi.wSuiteMask & VER_SUITE_ENTERPRISE)
							strOSInfo += "Advanced Server ";
						else
							strOSInfo += "Server ";
					}
				}
				else
				{
					HKEY hKey;
					char szProductType[STR_ARRAY_SIZE] = {0};
					DWORD dwBufLen = STR_ARRAY_SIZE;

					RegOpenKeyEx(HKEY_LOCAL_MACHINE,
						"SYSTEM\\CurrentControlSet\\Control\\ProductOptions",
						0, 
						KEY_QUERY_VALUE, 
						&hKey );
					RegQueryValueEx(hKey, "ProductType", NULL, NULL, (LPBYTE) szProductType, &dwBufLen);
					RegCloseKey( hKey );

					if (lstrcmpi("WINNT", szProductType) == 0)
						strOSInfo += "Professional ";
					if (lstrcmpi("LANMANNT", szProductType) == 0)
						strOSInfo += "Server ";
					if (lstrcmpi("SERVERNT", szProductType) == 0)
						strOSInfo += "Advanced Server ";
				}

				// Display version, service pack (if any), and build number.

				char szVersion[STR_ARRAY_SIZE] = {0};//操作系统版本号
				sprintf(szVersion,"%s version %d.%d.%d",
					osvi.szCSDVersion,
					osvi.dwMajorVersion,
					osvi.dwMinorVersion,
					osvi.dwBuildNumber & 0xFFFF
					);
				strOSInfo += szVersion;
			}
			break;
		case VER_PLATFORM_WIN32_WINDOWS:
			{
				if (osvi.dwMajorVersion == 4 && osvi.dwMinorVersion == 0)
				{
					strOSInfo = "Microsoft Windows 95 ";
					if (osvi.szCSDVersion[1] == 'C' || osvi.szCSDVersion[1] == 'B')
						strOSInfo += "OSR2 ";
				} 

				if (osvi.dwMajorVersion == 4 && osvi.dwMinorVersion == 10)
				{
					strOSInfo = "Microsoft Windows 98 ";
					if (osvi.szCSDVersion[1] == 'A')
						strOSInfo += "SE ";
				} 

				if (osvi.dwMajorVersion == 4 && osvi.dwMinorVersion == 90)
				{
					strOSInfo = "Microsoft Windows Me ";
				} 
			}
			break;
		case VER_PLATFORM_WIN32s:
			strOSInfo = "Microsoft Win32s ";
			break;
		}
		strcpy(v_szOSVersion, strOSInfo.c_str());
		return 0;
	}


	int	COsUtil::GetIEVersion(char v_szIEVersion[])
	{
		HKEY hKey;
		LONG ret = 0;
		DWORD type = REG_SZ;
		DWORD size = STR_ARRAY_SIZE;
		char szIEVersion[STR_ARRAY_SIZE] = {0};

		ret = RegOpenKeyEx(HKEY_LOCAL_MACHINE, "Software\\Microsoft\\Internet Explorer", 0, KEY_ALL_ACCESS, &hKey);
		if (ret != ERROR_SUCCESS)
		{
			return -1;
		}
		ret = RegQueryValueEx(hKey, "svcVersion", NULL, &type, (unsigned char *)szIEVersion, &size);
		if (ret != ERROR_SUCCESS)
		{
			ret = RegQueryValueEx(hKey, "Version", NULL, &type, (unsigned char *)szIEVersion, &size);
			if (ret != ERROR_SUCCESS)
			{
				RegCloseKey(hKey);
				return -1;
			}
		}
		lstrcpy(v_szIEVersion, szIEVersion);

		RegCloseKey(hKey);
		return 0;
	}

	BOOL COsUtil::IsUseProxy()
	{
		HKEY hKey;
		LONG ret = 0;
		DWORD type = REG_DWORD;
		DWORD size = sizeof(DWORD);
		DWORD dwProxy = 0;

		ret = RegOpenKeyEx(HKEY_CURRENT_USER, 
			"Software\\Microsoft\\Windows\\CurrentVersion\\Internet Settings",
			0,
			KEY_ALL_ACCESS,
			&hKey);
		if (ret != ERROR_SUCCESS)
		{
			return FALSE;
		}
		ret = RegQueryValueEx(hKey, "ProxyEnable", NULL, &type, (unsigned char *)dwProxy, &size);
		if (ret != ERROR_SUCCESS)
		{
			RegCloseKey(hKey);
			return FALSE;
		}
		RegCloseKey(hKey);

		return dwProxy ? TRUE : FALSE;
	}

	int	COsUtil::GetIEProxy(char v_szProxyServer[])
	{
		INTERNET_PROXY_INFO *pIEinfo = NULL;
		DWORD dwSize = 0;
		int nRet = -1;
		if (!InternetQueryOption(NULL, INTERNET_OPTION_PROXY, pIEinfo, &dwSize))
		{
			if (GetLastError() == ERROR_INSUFFICIENT_BUFFER)
			{
				pIEinfo = (INTERNET_PROXY_INFO*)new char[dwSize];
				if (InternetQueryOption(NULL, INTERNET_OPTION_PROXY, pIEinfo, &dwSize))
				{
					lstrcpy(v_szProxyServer, pIEinfo->lpszProxy);
					nRet = 0;
				}
			}
		}
		return nRet;
	}

	int COsUtil::GetIPAddress(char v_szIPAddress[])
	{
		int ret = -1;
		PIP_ADAPTER_INFO pAdapterInfo;
		PIP_ADAPTER_INFO pAdapter = NULL;
		DWORD dwRetVal = 0;

		ULONG ulOutBufLen = sizeof (IP_ADAPTER_INFO);
		pAdapterInfo = (IP_ADAPTER_INFO *) malloc(sizeof (IP_ADAPTER_INFO));
		if (pAdapterInfo == NULL) return -1;

		if (GetAdaptersInfo(pAdapterInfo, &ulOutBufLen) == ERROR_BUFFER_OVERFLOW) 
		{
			free(pAdapterInfo);
			pAdapterInfo = (IP_ADAPTER_INFO *) malloc(ulOutBufLen);
			if (pAdapterInfo == NULL) return -1;
		}

		if ((dwRetVal = GetAdaptersInfo(pAdapterInfo, &ulOutBufLen)) == NO_ERROR) 
		{
			pAdapter = pAdapterInfo;
			while (pAdapter) 
			{
				if( pAdapter->AddressLength != 0 
					&& lstrcmp(pAdapter->IpAddressList.IpAddress.String,"0.0.0.0") !=0 
					&& lstrlen(pAdapter->GatewayList.IpAddress.String) !=0)
				{
					lstrcpy(v_szIPAddress, pAdapter->IpAddressList.IpAddress.String);
					ret = 0;
					break;
				}
				pAdapter = pAdapter->Next;
			}
		} 
		if (pAdapterInfo) free(pAdapterInfo);

		return ret;
	}

	CString COsUtil::GetLocalIP()
	{
		CString strReturn = "";
		char name[256];
		memset(name,0,256);

		WSADATA wsaData;
		memset(name, 0, 255);
		int wsaret=WSAStartup(0x101,&wsaData);

		if(gethostname(name,256) == SOCKET_ERROR)
			return strReturn;
		hostent * ht = gethostbyname(name);
		if(!ht)
			return strReturn;
		in_addr addr;
		memset(&addr,0,sizeof(addr));
		for(int i=0;(u_long *)ht->h_addr_list[i];i++)
		{
			addr.s_addr = *((u_long *)ht->h_addr_list[i]);
			strReturn = inet_ntoa(addr);
			if(strReturn=="127.0.0.1"||strReturn=="0.0.0.0")
			{
				continue;
			}
			else
			{
				break;
			}
		}
		return strReturn;
	}

	int	COsUtil::GetMacAddress(char v_szMacAddress[]) {
		vector<string> mac_addresses;
		GetMacAddresses(&mac_addresses);
		if (mac_addresses.size() > 0) {
			strcpy(v_szMacAddress, mac_addresses[0].c_str());
			return 0;
		} else {
			return -1;
		}
	}

	//无法判断是物理网卡还是虚拟网卡
	// int	GetMacAddress(char v_szMacAddress[])
	// {
	// 	NCB ncb;     
	// 	typedef struct _ASTAT_     
	// 	{
	// 		ADAPTER_STATUS adapt;
	// 		NAME_BUFFER NameBuff[30];
	// 	}ASTAT, *PASTAT;
	// 
	// 	ASTAT Adapter;   
	// 
	// 	typedef struct _LANA_ENUM
	// 	{ 
	// 		UCHAR length;
	// 		UCHAR lana[MAX_LANA];
	// 	}LANA_ENUM;
	// 
	// 	LANA_ENUM lana_enum;
	// 
	// 	UCHAR uRetCode;
	// 	ZeroMemory(&Adapter, sizeof(Adapter));
	// 	ZeroMemory(&ncb, sizeof(ncb));
	// 	ZeroMemory(&lana_enum, sizeof(lana_enum));
	// 
	// 	ncb.ncb_command = NCBENUM;
	// 	ncb.ncb_buffer = (unsigned char *)&lana_enum; 
	// 	ncb.ncb_length = sizeof(LANA_ENUM);
	// 	uRetCode = Netbios(&ncb);
	// 
	// 	if (uRetCode != NRC_GOODRET)
	// 	{
	// 		return -1;     
	// 	}
	// 
	// 	for (int lana=0; lana<lana_enum.length; lana++)     
	// 	{
	// 		ncb.ncb_command = NCBRESET; 
	// 		ncb.ncb_lana_num = lana_enum.lana[lana]; 
	// 		uRetCode = Netbios(&ncb);   
	// 		if (uRetCode == NRC_GOODRET) break; 
	// 	} 
	// 
	// 	if (uRetCode != NRC_GOODRET)
	// 	{
	// 		return -1;
	// 	}
	// 
	// 	ZeroMemory(&ncb, sizeof(ncb));
	// 	ncb.ncb_command = NCBASTAT;  
	// 	ncb.ncb_lana_num = lana_enum.lana[0];
	// 	strcpy((char*)ncb.ncb_callname, "*"); 
	// 	ncb.ncb_buffer = (unsigned char *)&Adapter;
	// 	ncb.ncb_length = sizeof(Adapter);
	// 	uRetCode = Netbios(&ncb);  
	// 	if (uRetCode != NRC_GOODRET)   
	// 	{
	// 		return -1;     
	// 	}
	// 
	// 	sprintf(v_szMacAddress,"%02X-%02X-%02X-%02X-%02X-%02X",     
	// 		Adapter.adapt.adapter_address[0],     
	// 		Adapter.adapt.adapter_address[1],     
	// 		Adapter.adapt.adapter_address[2],     
	// 		Adapter.adapt.adapter_address[3],     
	// 		Adapter.adapt.adapter_address[4],     
	// 		Adapter.adapt.adapter_address[5]  
	// 		); 
	// 	return 0;
	// }

	void COsUtil::GetMacAddresses(std::vector<std::string>* mac_addresses)
	{
		mac_addresses->clear();
		IP_ADAPTER_INFO AdapterInfo[32];       // Allocate information for up to 32 NICs
		DWORD dwBufLen = sizeof(AdapterInfo);  // Save memory size of buffer
		DWORD dwStatus = GetAdaptersInfo(      // Call GetAdapterInfo
			AdapterInfo,                 // [out] buffer to receive data
			&dwBufLen);                  // [in] size of receive data buffer

		//No network card? Other error?
		if(dwStatus != ERROR_SUCCESS)
			return;

		PIP_ADAPTER_INFO pAdapterInfo = AdapterInfo;
		char szBuffer[512];
		while (pAdapterInfo)
		{
			if (strstr(pAdapterInfo->Description, "PCI") && pAdapterInfo->Type == MIB_IF_TYPE_ETHERNET)
			{
				sprintf(szBuffer, "%.2x-%.2x-%.2x-%.2x-%.2x-%.2x",
					pAdapterInfo->Address[0], 
					pAdapterInfo->Address[1], 
					pAdapterInfo->Address[2], 
					pAdapterInfo->Address[3], 
					pAdapterInfo->Address[4], 
					pAdapterInfo->Address[5]);
				mac_addresses->push_back(szBuffer);
			}
			pAdapterInfo = pAdapterInfo->Next;
		}
	}

	int COsUtil::GetDNSServerList(char v_szDNSServerList[])
	{
		IP_ADDR_STRING *pIPAddr = NULL; 
		FIXED_INFO *FixedInfo = (FIXED_INFO *)GlobalAlloc(GPTR, sizeof(FIXED_INFO)); 
		ULONG ulOutBufLen = sizeof(FIXED_INFO);

		if (ERROR_BUFFER_OVERFLOW == GetNetworkParams(FixedInfo, &ulOutBufLen))
		{ 
			GlobalFree(FixedInfo); 
			FixedInfo = (FIXED_INFO *)GlobalAlloc(GPTR, ulOutBufLen); 
		} 

		if (GetNetworkParams(FixedInfo, &ulOutBufLen))
		{ 
			GlobalFree(FixedInfo);  
			return -1;
		} 
		else
		{
			lstrcat(v_szDNSServerList, FixedInfo->DnsServerList.IpAddress.String);
			lstrcat(v_szDNSServerList, "|");

			pIPAddr = FixedInfo->DnsServerList.Next; 
			while (pIPAddr) 
			{ 
				lstrcat(v_szDNSServerList, pIPAddr->IpAddress.String);
				lstrcat(v_szDNSServerList, "|");
				pIPAddr = pIPAddr->Next;
			} 
		} 

		GlobalFree( FixedInfo ); 
		return 0;
	}

	int COsUtil::GetFlashPlayerVersion(char v_szFlashPlayerVersion[])
	{
		HKEY hKey; 
		LPCTSTR lpRun = "SOFTWARE\\Macromedia\\FlashPlayer"; 
		int nRet = -1;
		if (RegOpenKeyEx(HKEY_LOCAL_MACHINE, lpRun, 0, KEY_QUERY_VALUE, &hKey) == ERROR_SUCCESS) 
		{ 
			DWORD dwType = REG_SZ;
			char szVersion[STR_ARRAY_SIZE] = {0};
			DWORD dwLen = STR_ARRAY_SIZE;
			if (RegQueryValueEx(hKey, TEXT("CurrentVersion"), NULL, &dwType, (BYTE*)szVersion, &dwLen) == ERROR_SUCCESS)
			{
				int i = 0;
				while(i<STR_ARRAY_SIZE && szVersion[i])
				{
					if (szVersion[i] == ',')
						szVersion[i] = '.';
					i++;
				}
				lstrcpy(v_szFlashPlayerVersion, szVersion);
				nRet = 0;
			}
			RegCloseKey(hKey); 
		} 
		return nRet;
	}



	int COsUtil::GetSilverLightVersion(char v_szSLVersion[])
	{
		HKEY hKey; 
		LPCTSTR lpRun = "SOFTWARE\\Microsoft\\Silverlight"; 
		int nRet = -1;
		if (RegOpenKeyEx(HKEY_LOCAL_MACHINE, lpRun, 0, KEY_QUERY_VALUE, &hKey) == ERROR_SUCCESS) 
		{ 
			DWORD dwType = REG_SZ;
			char szVersion[STR_ARRAY_SIZE] = {0};
			DWORD dwLen = STR_ARRAY_SIZE;
			if (RegQueryValueEx(hKey, TEXT("Version"), NULL, &dwType, (BYTE*)szVersion, &dwLen) == ERROR_SUCCESS)
			{
				lstrcpy(v_szSLVersion, szVersion);
				nRet = 0;
			}
			RegCloseKey(hKey); 
		} 
		return nRet;
	}

	int COsUtil::GetAntivirusSoftwareInfo(char v_szAntivirusSoftware[])
	{
		HRESULT hres;

		hres =  CoInitialize(NULL); 
		if (FAILED(hres))
		{
			return -1;
		}

		IWbemLocator *pLoc = NULL;
		hres = CoCreateInstance(
			CLSID_WbemLocator,
			0,
			CLSCTX_INPROC_SERVER,
			IID_IWbemLocator, (LPVOID *) &pLoc);

		if (FAILED(hres))
		{
			CoUninitialize();
			return -1;
		}

		IWbemServices *pSvc = NULL;

		// Connect to the root\SecurityCenter namespace with
		// the current user and obtain pointer pSvc
		// to make IWbemServices calls.
		hres = pLoc->ConnectServer(
			_bstr_t(L"ROOT\\SecurityCenter"), // Object path of WMI namespace
			NULL,                    // User name. NULL = current user
			NULL,                    // User password. NULL = current
			0,                      // Locale. NULL indicates current
			NULL,                    // Security flags.
			0,                      // Authority (e.g. Kerberos)
			0,                      // Context object 
			&pSvc                    // pointer to IWbemServices proxy
			);

		if (FAILED(hres))
		{
			pLoc->Release();    
			CoUninitialize();
			return -1;
		}

		hres = CoSetProxyBlanket(
			pSvc,                        // Indicates the proxy to set
			RPC_C_AUTHN_WINNT,          // RPC_C_AUTHN_xxx
			RPC_C_AUTHZ_NONE,            // RPC_C_AUTHZ_xxx
			NULL,                        // Server principal name 
			RPC_C_AUTHN_LEVEL_CALL,      // RPC_C_AUTHN_LEVEL_xxx 
			RPC_C_IMP_LEVEL_IMPERSONATE, // RPC_C_IMP_LEVEL_xxx
			NULL,                        // client identity
			EOAC_NONE                    // proxy capabilities 
			);

		if (FAILED(hres))
		{
			pSvc->Release();
			pLoc->Release();    
			CoUninitialize();
			return -1;
		}

		IEnumWbemClassObject* pEnumerator = NULL;
		hres = pSvc->ExecQuery(
			bstr_t("WQL"), 
			bstr_t("SELECT * FROM AntiVirusProduct"),
			WBEM_FLAG_FORWARD_ONLY | WBEM_FLAG_RETURN_IMMEDIATELY, 
			NULL,
			&pEnumerator);

		if (FAILED(hres))
		{
			pSvc->Release();
			pLoc->Release();
			CoUninitialize();
			return -1;
		}

		IWbemClassObject *pclsObj;
		ULONG uReturn = 0;
		string strResult;
		while (pEnumerator)
		{
			HRESULT hr = pEnumerator->Next(WBEM_INFINITE, 1, 
				&pclsObj, &uReturn);

			if(0 == uReturn)
			{
				break;
			}

			VARIANT vtProp;

			// Get the value of the Name property
			hr = pclsObj->Get(L"displayName", 0, &vtProp, 0, 0);
			strResult += _com_util::ConvertBSTRToString(vtProp.bstrVal);
			hr = pclsObj->Get(L"versionNumber", 0, &vtProp, 0, 0);
			strResult +=  _com_util::ConvertBSTRToString(vtProp.bstrVal);
			strResult += ";";
			VariantClear(&vtProp); 
			pclsObj->Release();
		}

		lstrcpy(v_szAntivirusSoftware, strResult.c_str());
		// Cleanup
		// ========
		pSvc->Release();
		pLoc->Release();
		pEnumerator->Release();
		//pclsObj->Release();
		CoUninitialize();
		return 0;  // Program successfully completed.
	}


	BOOL COsUtil::IsX64Platform()
	{
		SYSTEM_INFO si;
		ZeroMemory(&si, sizeof(SYSTEM_INFO));
		typedef void (WINAPI *PGetNativeSystemInfo)(LPSYSTEM_INFO);

		PGetNativeSystemInfo pGetNativeSystemInfo = (PGetNativeSystemInfo) GetProcAddress( 
			GetModuleHandle(_T("kernel32.dll")), "GetNativeSystemInfo");

		if(NULL != pGetNativeSystemInfo)
		{
			pGetNativeSystemInfo(&si);
		}
		else 
		{
			GetSystemInfo(&si);
		}

		if( si.wProcessorArchitecture == PROCESSOR_ARCHITECTURE_AMD64)
		{
			return TRUE;
		}
		return FALSE;
	}



	BOOL COsUtil::Is64BitOs ()
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

	BOOL COsUtil::IsServerOS ()
	{
		OSVERSIONINFOEXA osVer;
		osVer.dwOSVersionInfoSize = sizeof (OSVERSIONINFOEXA);
		GetVersionExA ((LPOSVERSIONINFOA) &osVer);

		return (osVer.wProductType == VER_NT_SERVER || osVer.wProductType == VER_NT_DOMAIN_CONTROLLER);
	}



}
