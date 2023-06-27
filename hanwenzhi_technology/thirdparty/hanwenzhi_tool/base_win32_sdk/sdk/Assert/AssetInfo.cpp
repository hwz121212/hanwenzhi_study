#include "stdafx.h"
#include "AssetInfo.h"


#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0500
#endif						




#pragma comment(lib, "wbemuuid.lib")
#include <cfgmgr32.h>
#include <comdef.h>
#include <setupapi.h>
#pragma comment(lib, "Setupapi.lib")


namespace sdk
{
	namespace assert_info
	{


#define STATUS_SUCCESS         0x00000000
#define MaxKEYLen              255

#define ASSET_VECTOR_PUSHBACK_INT_TO_STRING(X,Y) {string temp = ""; char buffer[128]; memset(buffer, 0, sizeof(buffer)); sprintf(buffer, "%d",Y); temp = buffer; X.push_back(temp);};
#define ASSET_VECTOR_PUSHBACK_STRING(X,Y) { X.push_back(Y);};
#define ASSET_VECTOR_PUSHBACK_DOUBLE_TO_STRING(X,Y) {string temp = ""; char buffer[128]; memset(buffer, 0, sizeof(buffer)); sprintf(buffer, "%2.1f",Y); temp = buffer; X.push_back(temp);};


		bool CSystemAssetInfo::ExecuteSQLQuery(char* strSQL, IEnumWbemClassObject** pEnumerator)
		{
			bool bReturn = false;
			if (m_pWbemServices != NULL)   
			{
				HRESULT hres;                                          
				hres = m_pWbemServices->ExecQuery(bstr_t("WQL"), bstr_t(strSQL), WBEM_FLAG_FORWARD_ONLY|WBEM_FLAG_RETURN_IMMEDIATELY, NULL, pEnumerator);  
				if (FAILED(hres) || (*pEnumerator) ==NULL)
				{
					bReturn = false;
				}
				else
				{	
					bReturn = true;
				}		
			}

			return bReturn;
		}

		bool CSystemAssetInfo::ExecuteSQLQueryNext(IEnumWbemClassObject* pEnumerator,  IWbemClassObject **pclsObj)
		{
			bool bReturn = false;
			HRESULT hr = NULL;                                              
			ULONG uReturn = 0;                                              
			hr = pEnumerator->Next(WBEM_INFINITE, 1, pclsObj, &uReturn);            
			if(FAILED(hr) || uReturn == 0 || (*pclsObj) == NULL)     
			{
				bReturn = false;
			}
			else
			{
				bReturn = true;
			}

			return bReturn;			                                             
		}

		bool CSystemAssetInfo::ExecuteGetStringValue( IWbemClassObject *pObj, LPCWSTR pwName, VARIANT var, string & str)
		{
			bool bReturn = false;
			HRESULT hres;                                            
			hres = pObj->Get(pwName, 0, &var, 0, 0);                    
			if (( SUCCEEDED(hres) && (V_VT(&var) == VT_BSTR)))       
			{                                                        
				str = _bstr_t(var);                          
				bReturn = true;                                  
			}               

			return bReturn;
		}

		bool CSystemAssetInfo::ExecuteGetStringValueToInt( IWbemClassObject *pObj, LPCWSTR pwName, VARIANT var, int & iInfo, int iNum)
		{
			bool bReturn = false;

			HRESULT hres;                                            
			hres = pObj->Get(pwName, 0, &var, 0, 0);                    
			if (( SUCCEEDED(hres) && (V_VT(&var) == VT_BSTR)))       
			{                                                        
				string strTemp = _bstr_t(var); 
				iInfo = atoi(strTemp.c_str()) /iNum; 
				bReturn = true;
			}          

			return bReturn;
		}

		bool CSystemAssetInfo::ExecuteGetIntValue( IWbemClassObject *pObj, LPCWSTR pwName, VARIANT var, int & iVal)
		{
			bool bReturn = false;
			HRESULT hres;                                      
			hres = pObj->Get(pwName, 0, &var, 0, 0);             
			if (( SUCCEEDED(hres) && (V_VT(&var) == VT_I4)))   
			{                                                  
				iVal = (int)var.lVal;  
				bReturn = true;
			}         

			return bReturn;
		}
		//////////////////////////////////////////////////////////////////////
		// Construction/Destruction
		//////////////////////////////////////////////////////////////////////
		CSystemAssetInfo::CSystemAssetInfo()
		{
			m_pbBIOSData = NULL;
			m_SMBiosLen = 0;
			m_byMajorVersion = 0;
			m_byMinorVersion = 0;
			bIsWindows2000 = FALSE;
			pLocator = NULL;
			m_pWbemServices = NULL;

			//获得操作系统的版本信息
			OSVERSIONINFO osvi;
			ZeroMemory(&osvi, sizeof(osvi)); 
			osvi.dwOSVersionInfoSize = sizeof(osvi);
			if(GetVersionEx(&osvi))    
			{    
				bIsWindows2000 = FALSE;
				if (VER_PLATFORM_WIN32_NT ==  osvi.dwPlatformId)
				{
					if (osvi.dwMajorVersion == 5 && osvi.dwMinorVersion == 0)
						bIsWindows2000 = TRUE;
				}
			}
		}

		CSystemAssetInfo::~CSystemAssetInfo()
		{
			UnInitialize();
		}

		BOOL CSystemAssetInfo::InitializeCom()
		{
			HRESULT hres;

			// Initialize COM.
			hres = CoInitializeEx(0, COINIT_MULTITHREADED); 
			if (FAILED(hres))
				return FALSE;    

			// setup process-wide security context
			hres = CoInitializeSecurity(NULL, -1, NULL,NULL, RPC_C_AUTHN_LEVEL_DEFAULT,
				RPC_C_IMP_LEVEL_IMPERSONATE,NULL,EOAC_NONE, NULL);
			if (FAILED(hres))
				return FALSE;  
			return TRUE;
		}


		BOOL CSystemAssetInfo::Initialize()
		{
			HRESULT hres;

			// Obtain the initial locator to Windows Management on a particular host computer.
			hres = CoCreateInstance(CLSID_WbemLocator, 0, CLSCTX_INPROC_SERVER, IID_IWbemLocator, (LPVOID *) &pLocator);
			if (FAILED(hres))
				return FALSE; 

			// Connect to the root\cimv2 namespace with the current user and obtain pointer pSvc
			// to make IWbemServices calls.
			hres = pLocator->ConnectServer(_bstr_t(L"ROOT\\CIMV2"), NULL, NULL, 0, NULL, 0, 0, &m_pWbemServices);                              
			if (FAILED(hres))
			{
				if (pLocator)
				{
					pLocator->Release();
					pLocator = NULL;    
				}
				return FALSE; 
			}

			// Set the IWbemServices proxy so that impersonation of the user (client) occurs.
			hres = CoSetProxyBlanket(m_pWbemServices, RPC_C_AUTHN_WINNT, RPC_C_AUTHZ_NONE, NULL,     
				RPC_C_AUTHN_LEVEL_CALL, RPC_C_IMP_LEVEL_IMPERSONATE, 
				NULL, EOAC_NONE);
			if (FAILED(hres))
			{
				if (pLocator)
				{
					pLocator->Release();
					pLocator = NULL;
				}
				if (m_pWbemServices)
				{
					m_pWbemServices->Release();
					m_pWbemServices = NULL;
				}

				return FALSE; 
			}
			return GetSMBIOSData();
		}

		BOOL CSystemAssetInfo::IsInitialize()
		{
			if (pLocator == NULL || m_pWbemServices == NULL || m_pbBIOSData == NULL)
				return FALSE;
			else
				return TRUE;
		}

		void CSystemAssetInfo::UnInitialize()
		{
			if (m_pbBIOSData != NULL)
			{
				delete [] m_pbBIOSData;
				m_pbBIOSData = NULL;
			}

			if (pLocator)
			{
				pLocator->Release();
				pLocator = NULL;
			}
			if (m_pWbemServices)
			{
				m_pWbemServices->Release();
				m_pWbemServices = NULL;
			}

			CoUninitialize();

		}

		BOOL CSystemAssetInfo::GetSysSummaryInfo(SYS_SUM_INFO_ST& stSysSumInfo)    //Win32_OperatingSystem
		{
			string strTemp = "";
			IEnumWbemClassObject* pEnumerator = NULL;
			ExecuteSQLQuery("SELECT * FROM Win32_OperatingSystem", &pEnumerator);
			char buffer[128];

			// Get the data from the query
			IWbemClassObject *pclsObj;
			while (pEnumerator)
			{
				if (!ExecuteSQLQueryNext(pEnumerator, &pclsObj))break;        


				VARIANT vtProp;
				VariantInit(&vtProp);  

				ExecuteGetStringValue(pclsObj, L"BootDevice", vtProp, stSysSumInfo.strBootDevice);
				ExecuteGetStringValue(pclsObj, L"Caption", vtProp, stSysSumInfo.strCaption);     
				//stSysSumInfo.strCaption.replace("?", "");
				ExecuteGetStringValue(pclsObj, L"CSName", vtProp, stSysSumInfo.strCSName);
				ExecuteGetStringValue(pclsObj, L"Manufacturer", vtProp, stSysSumInfo.strManufacturer);
				ExecuteGetStringValue(pclsObj, L"Organization", vtProp, stSysSumInfo.strOrganization);
				ExecuteGetStringValue(pclsObj, L"SerialNumber", vtProp, stSysSumInfo.strSerialNumber);
				ExecuteGetStringValue(pclsObj, L"SystemDirectory", vtProp, stSysSumInfo.strSystemDirectory);
				ExecuteGetStringValue(pclsObj, L"Version", vtProp, stSysSumInfo.strVersion);
				ExecuteGetStringValue(pclsObj, L"WindowsDirectory", vtProp, stSysSumInfo.strWindowsDirectory);
				ExecuteGetStringValue(pclsObj, L"InstallDate", vtProp, stSysSumInfo.strInstallData);    
				if (stSysSumInfo.strInstallData.length())
				{
					strTemp =  stSysSumInfo.strInstallData;			
					memset(buffer, 0, sizeof(buffer));
					sprintf(buffer, "%c%c%c%c-%c%c-%c%c %c%c:%c%c:%c%c",strTemp[0], strTemp[1],
						strTemp[2], strTemp[3], strTemp[4], strTemp[5],
						strTemp[6], strTemp[7], strTemp[8], strTemp[9],
						strTemp[10], strTemp[11], strTemp[12], strTemp[13]);
					stSysSumInfo.strInstallData = buffer;
				}      

				ExecuteGetStringValue(pclsObj, L"LastBootUpTime", vtProp, stSysSumInfo.strLastBootUpTime);          
				if (stSysSumInfo.strLastBootUpTime.length())
				{  
					strTemp =  stSysSumInfo.strLastBootUpTime;			
					memset(buffer, 0, sizeof(buffer));
					sprintf(buffer, "%c%c%c%c-%c%c-%c%c %c%c:%c%c:%c%c",strTemp[0], strTemp[1],
						strTemp[2], strTemp[3], strTemp[4], strTemp[5],
						strTemp[6], strTemp[7], strTemp[8], strTemp[9],
						strTemp[10], strTemp[11], strTemp[12], strTemp[13]);
					stSysSumInfo.strLastBootUpTime = buffer;
				}        


				string strCSDVersion;
				ExecuteGetStringValue(pclsObj, L"CSDVersion", vtProp, strCSDVersion);
				if (strCSDVersion.length())
				{
					stSysSumInfo.strVersion += " ";
					stSysSumInfo.strVersion += strCSDVersion;
				}

				string strBuildNumber = "";
				ExecuteGetStringValue(pclsObj, L"BuildNumber", vtProp, strBuildNumber);
				if (strBuildNumber.length())
				{
					stSysSumInfo.strVersion += " BuildNumber ";
					stSysSumInfo.strVersion += strBuildNumber;
				}

				ExecuteGetStringValueToInt(pclsObj, L"SizeStoredInPagingFiles", vtProp, stSysSumInfo.iSizeStoredInPagingFiles, 1024);
				ExecuteGetStringValueToInt(pclsObj, L"TotalVirtualMemorySize", vtProp, stSysSumInfo.iTotalVirtualMemorySize, 1);
				ExecuteGetStringValueToInt(pclsObj, L"TotalVisibleMemorySize", vtProp, stSysSumInfo.iTotalVisibleMemorySize, 1024);
				if (stSysSumInfo.iTotalVisibleMemorySize != 0)
				{
					//格式化内存数据.
					int iTempA = stSysSumInfo.iTotalVisibleMemorySize/64;
					int iTempB = stSysSumInfo.iTotalVisibleMemorySize%64;
					if(iTempB > 0)
						iTempA++;

					stSysSumInfo.iTotalVisibleMemorySize = iTempA *64;
				}                

				VariantClear(&vtProp);
				pclsObj->Release();
			}
			pEnumerator->Release();

			pEnumerator = NULL;
			ExecuteSQLQuery("SELECT * FROM Win32_ComputerSystem", &pEnumerator);
			while (pEnumerator)
			{
				if (!ExecuteSQLQueryNext(pEnumerator, &pclsObj))break; 

				VARIANT vtProp;
				VariantInit(&vtProp);

				ExecuteGetStringValue(pclsObj, L"Caption", vtProp, stSysSumInfo.strSysName);
				ExecuteGetStringValue(pclsObj, L"Manufacturer", vtProp, stSysSumInfo.strSysManufacturer);
				ExecuteGetStringValue(pclsObj, L"Model", vtProp, stSysSumInfo.strSysModel);
				ExecuteGetStringValue(pclsObj, L"SystemType", vtProp, stSysSumInfo.strSysType);

				VariantClear(&vtProp);
				pclsObj->Release();
			}
			pEnumerator->Release();

			pEnumerator = NULL;
			ExecuteSQLQuery("SELECT * FROM Win32_Processor", &pEnumerator);
			while (pEnumerator)
			{
				if (!ExecuteSQLQueryNext(pEnumerator, &pclsObj))break; 

				VARIANT vtProp;
				VariantInit(&vtProp);      

				ExecuteGetStringValue(pclsObj, L"Caption", vtProp, stSysSumInfo.strCPU);
				ExecuteGetIntValue(pclsObj, L"MaxClockSpeed", vtProp, stSysSumInfo.iCPUSpeed);
				if( stSysSumInfo.iCPUSpeed != 0)
				{
					memset(buffer, 0, sizeof(buffer));
					sprintf(buffer, " GenuineIntel ~%d Mhz", stSysSumInfo.iCPUSpeed);
					stSysSumInfo.strCPU += buffer;
				}

				VariantClear(&vtProp);
				pclsObj->Release();
			}
			pEnumerator->Release();

			pEnumerator = NULL;
			ExecuteSQLQuery("SELECT * FROM Win32_DiskDrive", &pEnumerator);
			while (pEnumerator)
			{
				if (!ExecuteSQLQueryNext(pEnumerator, &pclsObj))break; 

				VARIANT vtProp;
				VariantInit(&vtProp);

				string strSize = "";
				ExecuteGetStringValue(pclsObj, L"Size", vtProp, strSize);
				if (strSize.length())
				{
					double dTemp = atof(strSize.c_str())/1024;
					stSysSumInfo.iDiskSize += (int)dTemp/1024;
				} 

				VariantClear(&vtProp);
				pclsObj->Release();
			}
			pEnumerator->Release();

			BIOS_INFO_ST m_BiosInfo;
			GetBIOSInfo(m_BiosInfo);


			stSysSumInfo.strBios = m_BiosInfo.strVendor + " " + m_BiosInfo.strVersion +" "+m_BiosInfo.strReleaseData;
			stSysSumInfo.strSMBios = m_BiosInfo.strSMBIOS;

			HKEY hKey;
			TCHAR ValueBuf[MaxKEYLen];
			DWORD dwValueBufSize;    
			DWORD dwType = REG_SZ;
			if (ERROR_SUCCESS == RegOpenKeyEx(HKEY_LOCAL_MACHINE, "SOFTWARE\\Microsoft\\Internet Explorer", 0, KEY_ALL_ACCESS, &hKey))
			{
				dwValueBufSize = MaxKEYLen;
				if ( ERROR_SUCCESS == RegQueryValueEx(hKey, "Version", NULL, &dwType, (LPBYTE)ValueBuf, &dwValueBufSize) )
					stSysSumInfo.strIEVer = ValueBuf;

				if (hKey)
				{
					RegCloseKey(hKey);
					hKey = NULL;
				}
			}

			SOFTWARE_INFO_VECTOR vSoftwareInfo;
			GetSoftwareInfo(vSoftwareInfo);
			for (int i = 0; i < vSoftwareInfo.size(); i++)
			{
				string strNameTemp = vSoftwareInfo[i].strDisplayName;
				if (vSoftwareInfo[i].strDisplayName.find("Microsoft Office",0) != -1)
				{
					if (vSoftwareInfo[i].strDisplayName.find("KB") != -1)
					{
						continue;
					}
					if (vSoftwareInfo[i].strDisplayName.find("kb") != -1)
					{
						continue;
					}
					if (vSoftwareInfo[i].strDisplayName.find("Kb") != -1)
					{
						continue;
					}
					if (vSoftwareInfo[i].strDisplayName.find("kB") != -1)
					{
						continue;
					}
					if (vSoftwareInfo[i].strDisplayName.find("Access") != -1)
					{
						continue;
					}
					if (vSoftwareInfo[i].strDisplayName.find("Excel") != -1)
					{
						continue;
					}
					if (vSoftwareInfo[i].strDisplayName.find("PowerPoint") != -1)
					{
						continue;
					}
					if (vSoftwareInfo[i].strDisplayName.find("Publisher") != -1)
					{
						continue;
					}
					if (vSoftwareInfo[i].strDisplayName.find("Outlook") != -1)
					{
						continue;
					}
					if (vSoftwareInfo[i].strDisplayName.find("Word") != -1)
					{
						continue;
					}
					if (vSoftwareInfo[i].strDisplayName.find("Proof") != -1)
					{
						continue;
					}
					if (vSoftwareInfo[i].strDisplayName.find("IME") != -1)
					{
						continue;
					}
					if (vSoftwareInfo[i].strDisplayName.find("Proofing") != -1)
					{
						continue;
					}
					if (vSoftwareInfo[i].strDisplayName.find("InfoPath") != -1)
					{
						continue;
					}
					if (vSoftwareInfo[i].strDisplayName.find("Visio") != -1)
					{
						continue;
					}
					if (vSoftwareInfo[i].strDisplayName.find("Share") != -1)
					{
						continue;
					}
					if (vSoftwareInfo[i].strDisplayName.find("OneNote") != -1)
					{
						continue;
					}
					if (vSoftwareInfo[i].strDisplayName.find("Groove") != -1)
					{
						continue;
					}
					stSysSumInfo.strOfficeVersion = vSoftwareInfo[i].strDisplayVersion;
				}
			}

			return TRUE;
		} 

		BOOL CSystemAssetInfo::GetMemoryInfo(MEMORY_INFO_ST& stMemoryInfo)    //包括内存信息Win32_OperatingSystem
		{
			IEnumWbemClassObject* pEnumerator = NULL;
			ExecuteSQLQuery("SELECT * FROM Win32_OperatingSystem", &pEnumerator);

			IWbemClassObject *pclsObj;
			while (pEnumerator)
			{
				if (!ExecuteSQLQueryNext(pEnumerator, &pclsObj))break; 

				VARIANT vtProp;
				VariantInit(&vtProp);

				ExecuteGetStringValueToInt(pclsObj, L"TotalVirtualMemorySize", vtProp, stMemoryInfo.iTotalVirtualMemorySize, 1024);
				if (stMemoryInfo.iTotalVirtualMemorySize != 0)
				{
					//格式化内存数据.
					int iTempA = stMemoryInfo.iTotalVirtualMemorySize/64;
					int iTempB = stMemoryInfo.iTotalVirtualMemorySize%64;

					if(iTempB > 0)
						iTempA++;

					stMemoryInfo.iTotalVirtualMemorySize = iTempA*64;
				}        

				ExecuteGetStringValueToInt(pclsObj, L"TotalVisibleMemorySize", vtProp, stMemoryInfo.iTotalVisibleMemorySize,1024);
				if (stMemoryInfo.iTotalVisibleMemorySize != 0)
				{
					//格式化内存数据.
					int iTempA = stMemoryInfo.iTotalVisibleMemorySize/64;
					int iTempB = stMemoryInfo.iTotalVisibleMemorySize%64;

					if(iTempB > 0)
						iTempA++;


					stMemoryInfo.iTotalVisibleMemorySize = iTempA*64;
				}        

				ExecuteGetStringValueToInt(pclsObj, L"FreePhysicalMemory", vtProp, stMemoryInfo.iFreePhysicalMemory, 1024);
				ExecuteGetStringValueToInt(pclsObj, L"FreeSpaceInPagingFiles", vtProp, stMemoryInfo.iFreeSpaceInPagingFiles, 1024);
				ExecuteGetStringValueToInt(pclsObj, L"FreeVirtualMemory", vtProp, stMemoryInfo.iFreeVirtualMemory, 1024);

				VariantClear(&vtProp);
				pclsObj->Release();
			}
			pEnumerator->Release();

			pEnumerator = NULL;
			ExecuteSQLQuery("SELECT * FROM Win32_MemoryDevice", &pEnumerator);

			while (pEnumerator)
			{
				if (!ExecuteSQLQueryNext(pEnumerator, &pclsObj))break; 
				HRESULT hr = NULL;

				// Get the value of the Name property
				VARIANT vtProp;
				VariantInit(&vtProp);
				string csStartingAddress;
				string csEndingAddress;      

				ExecuteGetStringValue(pclsObj, L"StartingAddress", vtProp, csStartingAddress);
				ExecuteGetStringValue(pclsObj, L"EndingAddress", vtProp, csEndingAddress);

				int iSize = (atoi(csEndingAddress.c_str())+1 - atoi(csStartingAddress.c_str()))/1024;

				if (iSize != 0)
				{
					if (stMemoryInfo.strMemorySlotInfo.length())
						stMemoryInfo.strMemorySlotInfo += ";";

					char buffer[128];
					memset(buffer, 0, sizeof(buffer));
					sprintf(buffer, "%d", iSize);
					stMemoryInfo.strMemorySlotInfo += buffer;
				}

				VariantClear(&vtProp);
				pclsObj->Release();
			}
			pEnumerator->Release();

			DWORD dwTableIndex = 0;
			DWORD dwTableSize;
			BOOL bResult = FALSE;
			bResult = GetTableByType(m_pbBIOSData, m_SMBiosLen, 16, dwTableIndex, dwTableSize);
			if (bResult)
			{
				SMBios_TYPE16 stSMBiosType16;
				GetData(m_pbBIOSData+dwTableIndex, stSMBiosType16);
				stMemoryInfo.iSlotNumber = stSMBiosType16.wNumberofMemoryDevices;
			}

			dwTableIndex = 0;
			BYTE* temp = m_pbBIOSData;  
			for (int i = 0; i < stMemoryInfo.iSlotNumber; i++)
			{
				bResult = GetTableByType(temp, m_SMBiosLen, 17, dwTableIndex, dwTableSize);
				if (bResult)
				{
					SMBios_TYPE17 stSMBiosType17;
					temp = temp + dwTableIndex;
					GetData(temp, stSMBiosType17);
					temp = temp + dwTableSize;

					if (stSMBiosType17.wSize == 0)
						continue;

					if (stMemoryInfo.strMemoryFac.length())
						stMemoryInfo.strMemoryFac += ";";

					switch (stSMBiosType17.byFactor)
					{
					case 1:
						stMemoryInfo.strMemoryFac += "Other";
						break;
					case 2:
						stMemoryInfo.strMemoryFac += "Unknown";
						break;
					case 3:
						stMemoryInfo.strMemoryFac += "SIMM";
						break;
					case 4:
						stMemoryInfo.strMemoryFac += "SIP";
						break;
					case 5:
						stMemoryInfo.strMemoryFac += "Chip";
						break;
					case 6:
						stMemoryInfo.strMemoryFac += "DIP";
						break;
					case 7:
						stMemoryInfo.strMemoryFac += "ZIP";
						break;
					case 8:
						stMemoryInfo.strMemoryFac += "Proprietary Card";
						break;
					case 9:
						stMemoryInfo.strMemoryFac += "DIMM";
						break;
					case 10:
						stMemoryInfo.strMemoryFac += "TSOP";
						break;
					case 11:
						stMemoryInfo.strMemoryFac += "Row of chips";
						break;
					case 12:
						stMemoryInfo.strMemoryFac += "RIMM";
						break;
					case 13:
						stMemoryInfo.strMemoryFac += "SODIMM";
						break;
					case 14:
						stMemoryInfo.strMemoryFac += "SRIMM";
						break;    
					default :
						stMemoryInfo.strMemoryFac += "Unknown";
						break;
					}
				}

			}
			return TRUE;
		} 

		BOOL CSystemAssetInfo::GetDiskInfo(DISK_INFO_VECTOR& vDiskInfo) //Win32_DiskDrive
		{
			IEnumWbemClassObject* pEnumerator = NULL;
			ExecuteSQLQuery("SELECT * FROM Win32_DiskDrive", &pEnumerator);

			// Get the data from the query
			IWbemClassObject *pclsObj;
			ULONG uReturn = 0;    
			while (pEnumerator)
			{
				if (!ExecuteSQLQueryNext(pEnumerator, &pclsObj))break; 
				HRESULT hr = NULL;
				// Get the value of the Name property
				VARIANT vtProp;
				VariantInit(&vtProp);

				DISK_INFO_ST tempDiskInfo;

				string strTemp = "";  
				ExecuteGetStringValue(pclsObj, L"Size", vtProp, strTemp);
				if (strTemp.length())
				{
					double dTemp = atof(strTemp.c_str())/1024;
					tempDiskInfo.iSize = (int)dTemp/1024;
					if ( tempDiskInfo.iSize == 0)
						continue;    
				}        
				else
					continue;


				ExecuteGetStringValue(pclsObj, L"PNPDeviceID", vtProp, tempDiskInfo.strPNPDeviceID);
				if ( tempDiskInfo.strPNPDeviceID.length() == 0 || (tempDiskInfo.strPNPDeviceID.find("USB") != -1))
					continue;


				ExecuteGetStringValue(pclsObj, L"DeviceID", vtProp, tempDiskInfo.strDeviceID);
				ExecuteGetStringValue(pclsObj, L"Caption", vtProp, tempDiskInfo.strCaption);
				tempDiskInfo.strManufacturer = tempDiskInfo.strCaption;
				//ExecuteGetStringValue(pclsObj, L"Manufacturer", vtProp, tempDiskInfo.strManufacturer);
				ExecuteGetIntValue(pclsObj, L"BytesPerSector", vtProp, tempDiskInfo.iBytesPerSector);
				ExecuteGetIntValue(pclsObj, L"Index", vtProp, tempDiskInfo.iIndex);
				ExecuteGetIntValue(pclsObj, L"SectorsPerTrack", vtProp, tempDiskInfo.iSectorsPerTrack);
				ExecuteGetIntValue(pclsObj, L"TotalHeads", vtProp, tempDiskInfo.iTotalHeads);
				ExecuteGetIntValue(pclsObj, L"TracksPerCylinder", vtProp, tempDiskInfo.iTrackPerCylinder);



				ExecuteGetStringValueToInt(pclsObj, L"TotalCylinders", vtProp, tempDiskInfo.iTotalCylinders, 1); 
				ExecuteGetStringValueToInt(pclsObj, L"TotalSectors", vtProp, tempDiskInfo.iTotalSectors, 1); 
				ExecuteGetStringValueToInt(pclsObj, L"TotalTracks", vtProp, tempDiskInfo.iTotalTracks, 1); 



				vDiskInfo.push_back(tempDiskInfo);
				VariantClear(&vtProp);
				pclsObj->Release();
			}
			pEnumerator->Release();
			return TRUE;
		} 

		BOOL CSystemAssetInfo::GetLogicalDiskInfo(LOGICALDISK_INFO_VECTOR& vLogicDiskInfo)//Win32_LogicalDisk
		{
			IEnumWbemClassObject* pEnumerator = NULL;
			ExecuteSQLQuery("SELECT * FROM Win32_LogicalDisk", &pEnumerator);

			// Get the data from the query
			IWbemClassObject *pclsObj;
			ULONG uReturn = 0;
			while (pEnumerator)
			{
				if (!ExecuteSQLQueryNext(pEnumerator, &pclsObj))break; 
				HRESULT hr = NULL;

				// Get the value of the Name property
				VARIANT vtProp;
				VariantInit(&vtProp);

				LOGICALDISK_INFO_ST tempLogicalDisk;
				hr = pclsObj->Get(L"Description", 0, &vtProp, 0, 0);
				if ((SUCCEEDED(hr) && (V_VT(&vtProp) == VT_BSTR)))
				{
					tempLogicalDisk.strDescription = _bstr_t(vtProp);
					if (tempLogicalDisk.strDescription == "CD-ROM" || tempLogicalDisk.strDescription.find("ROM") != -1 ||
						tempLogicalDisk.strDescription.find("DVD") != -1 || tempLogicalDisk.strDescription.find("Remov") != -1 )
						continue;
				}

				ExecuteGetStringValue(pclsObj, L"Caption", vtProp, tempLogicalDisk.strCaption);
				ExecuteGetStringValue(pclsObj, L"FileSystem", vtProp, tempLogicalDisk.strFileSystem);
				ExecuteGetStringValue(pclsObj, L"VolumeName", vtProp, tempLogicalDisk.strVolumeName);
				ExecuteGetStringValue(pclsObj, L"VolumeSerialNumber", vtProp, tempLogicalDisk.strVolumeSerialNumber);



				string strTemp = "";
				ExecuteGetStringValue(pclsObj, L"FreeSpace", vtProp, strTemp);      
				if (strTemp.length())
				{
					double dTemp = atof(strTemp.c_str())/1024;
					tempLogicalDisk.iFreeSpace = (int)dTemp/1024;
				}    

				strTemp = "";
				ExecuteGetStringValue(pclsObj, L"Size", vtProp, strTemp); 
				if (strTemp.length())
				{
					double dTemp = atof(strTemp.c_str())/1024;
					tempLogicalDisk.iSize = (int)dTemp/1024;
				} 

				vLogicDiskInfo.push_back(tempLogicalDisk);
				VariantClear(&vtProp);
				pclsObj->Release();
			}
			pEnumerator->Release();
			return TRUE;
		} 
		BOOL CSystemAssetInfo::GetCDROMInfo(CDROM_INFO_VECTOR& vCDROMInfo)//Win32_CDROMDrive 
		{
			IEnumWbemClassObject* pEnumerator = NULL;
			ExecuteSQLQuery("SELECT * FROM Win32_CDROMDrive", &pEnumerator);

			// Get the data from the query
			IWbemClassObject *pclsObj;
			ULONG uReturn = 0;
			while (pEnumerator)
			{
				if (!ExecuteSQLQueryNext(pEnumerator, &pclsObj))break; 
				HRESULT hr = NULL;

				// Get the value of the Name property
				VARIANT vtProp;
				VariantInit(&vtProp);

				CDROM_INFO_ST tempCDROMInfo;        
				ExecuteGetStringValue(pclsObj, L"PNPDeviceID", vtProp, tempCDROMInfo.strPNPDeviceID);  
				if (tempCDROMInfo.strPNPDeviceID.length())
				{
					if (-1 == tempCDROMInfo.strPNPDeviceID.find("IDE"))
						continue;
				}
				else
					continue;          

				ExecuteGetStringValue(pclsObj, L"Caption", vtProp, tempCDROMInfo.strCaption);  
				ExecuteGetStringValue(pclsObj, L"Drive", vtProp, tempCDROMInfo.strDrive);  
				ExecuteGetStringValue(pclsObj, L"Manufacturer", vtProp, tempCDROMInfo.strManufacturer);  
				ExecuteGetStringValue(pclsObj, L"MediaType", vtProp, tempCDROMInfo.strMediaType);  

				vCDROMInfo.push_back(tempCDROMInfo);
				VariantClear(&vtProp);
				pclsObj->Release();
			}
			pEnumerator->Release();
			return TRUE;
		} 
		BOOL CSystemAssetInfo::GetNetAdapterInfo(NETADAPTER_INFO_VECTOR& vNetAdapterInfo) //Win32_NetworkAdapter
		{    
			IEnumWbemClassObject* pEnumerator = NULL;
			ExecuteSQLQuery("SELECT * FROM Win32_NetworkAdapter", &pEnumerator);

			// Get the data from the query
			IWbemClassObject *pclsObj;
			ULONG uReturn = 0;
			while (pEnumerator)
			{
				if (!ExecuteSQLQueryNext(pEnumerator, &pclsObj))break; 
				HRESULT hr = NULL;

				// Get the value of the Name property
				VARIANT vtProp;
				VariantInit(&vtProp);

				NETADAPTER_INFO_ST tempNetAdapter;        
				ExecuteGetStringValue(pclsObj, L"PNPDeviceID", vtProp, tempNetAdapter.strPNPDeviceID); 
				if (tempNetAdapter.strPNPDeviceID.length())
				{
					if (-1 == tempNetAdapter.strPNPDeviceID.find("PCI"))
						continue;
				}
				else
					continue;

				ExecuteGetStringValue(pclsObj, L"AdapterType", vtProp, tempNetAdapter.strAdapterType);
				ExecuteGetStringValue(pclsObj, L"Name", vtProp, tempNetAdapter.strName);
				ExecuteGetStringValue(pclsObj, L"MACAddress", vtProp, tempNetAdapter.strMACAddress);
				ExecuteGetStringValue(pclsObj, L"Manufacturer", vtProp, tempNetAdapter.strManufacturer);
				ExecuteGetStringValue(pclsObj, L"NetConnectionID", vtProp, tempNetAdapter.strNetConnectionID);

				HRESULT hres;                                      
				hres = pclsObj->Get(L"Speed", 0, &vtProp, 0, 0);              
				if (( SUCCEEDED(hres) && (V_VT(&vtProp) == VT_BSTR)))   
				{
					string temp = "";
					temp = _bstr_t(vtProp);                        
					tempNetAdapter.iSpeed = atoi(temp.c_str())/1000000;                               
				}    

				vNetAdapterInfo.push_back(tempNetAdapter);    
				VariantClear(&vtProp);
				pclsObj->Release();
			}
			pEnumerator->Release();
			return TRUE;
		} 
		BOOL CSystemAssetInfo::GetVideoInfo(VIDEO_INFO_VECTOR& vVideoInfo) //Win32_VideoController
		{
			IEnumWbemClassObject* pEnumerator = NULL;
			ExecuteSQLQuery("SELECT * FROM Win32_VideoController", &pEnumerator);

			// Get the data from the query 
			IWbemClassObject *pclsObj;
			ULONG uReturn = 0;
			while (pEnumerator)
			{
				if (!ExecuteSQLQueryNext(pEnumerator, &pclsObj))break; 
				HRESULT hr = NULL;

				// Get the value of the Name property
				VARIANT vtProp;
				VariantInit(&vtProp);

				VIDEO_INFO_ST tempVideoInfo;
				//判断是否为可用的显卡         
				ExecuteGetStringValue(pclsObj, L"PNPDeviceID", vtProp, tempVideoInfo.strPNPDeviceID);
				if (tempVideoInfo.strPNPDeviceID.length())
				{
					if (-1 == tempVideoInfo.strPNPDeviceID.find("PCI"))
						continue;
				}
				else
					continue;

				ExecuteGetIntValue(pclsObj,L"CurrentBitsPerPixel", vtProp, tempVideoInfo.iCurrentBitsPerPixel);

				ExecuteGetStringValue(pclsObj, L"Caption", vtProp, tempVideoInfo.strCaption);
				ExecuteGetStringValue(pclsObj, L"AdapterDACType", vtProp, tempVideoInfo.strAdapterDACType);
				ExecuteGetStringValue(pclsObj, L"DriverVersion", vtProp, tempVideoInfo.strDriverVersion);
				ExecuteGetStringValue(pclsObj, L"VideoModeDescription", vtProp, tempVideoInfo.strVideoModeDescription);

				ExecuteGetIntValue(pclsObj,L"CurrentRefreshRate", vtProp, tempVideoInfo.iCurrentRefreshRate);

				hr = pclsObj->Get(L"AdapterRAM", 0, &vtProp, 0, 0);
				if ((SUCCEEDED(hr) && (V_VT(&vtProp) == VT_I4)))
				{
					tempVideoInfo.iAdapterRAM = vtProp.lVal/(1024*1024);
				}

				VariantClear(&vtProp);
				vVideoInfo.push_back(tempVideoInfo);
				pclsObj->Release();
			}
			pEnumerator->Release();
			return TRUE;
		} 

		BOOL CSystemAssetInfo::GetSoundInfo(SOUND_INFO_VECTOR& vSoundInfo) //Win32_SoundDevice
		{
			IEnumWbemClassObject* pEnumerator = NULL;
			ExecuteSQLQuery("SELECT * FROM Win32_SoundDevice", &pEnumerator);

			// Get the data from the query
			IWbemClassObject *pclsObj;
			ULONG uReturn = 0;
			while (pEnumerator)
			{

				if (!ExecuteSQLQueryNext(pEnumerator, &pclsObj))break; 
				HRESULT hr = NULL;

				// Get the value of the Name property
				VARIANT vtProp;
				VariantInit(&vtProp);

				SOUND_INFO_ST tempSoundInfo;

				ExecuteGetStringValue(pclsObj, L"DeviceID", vtProp, tempSoundInfo.strDeviceID);
				if (tempSoundInfo.strDeviceID.length())
				{
					if (-1 != tempSoundInfo.strDeviceID.find("ROOT"))
						continue;
					if ( (-1 == tempSoundInfo.strDeviceID.find("HDAUDIO")) &&
						(-1 == tempSoundInfo.strDeviceID.find("PCI")) )
						continue;
				}
				else
					continue;

				ExecuteGetStringValue(pclsObj, L"Caption", vtProp, tempSoundInfo.strCaption);
				ExecuteGetStringValue(pclsObj, L"Manufacturer", vtProp, tempSoundInfo.strManufacturer);

				VariantClear(&vtProp);
				vSoundInfo.push_back(tempSoundInfo);
				pclsObj->Release();
			}
			pEnumerator->Release();
			return TRUE;
		} 

		BOOL CSystemAssetInfo::GetKeyBoardInfo(KEYBOARD_INFO_VECTOR& vKeyBoardInfo) //Win32_Keyboard.
		{
			IEnumWbemClassObject* pEnumerator = NULL;
			ExecuteSQLQuery("SELECT * FROM Win32_Keyboard", &pEnumerator);

			// Get the data from the query
			IWbemClassObject *pclsObj;
			ULONG uReturn = 0;
			while (pEnumerator)
			{

				if (!ExecuteSQLQueryNext(pEnumerator, &pclsObj))break; 
				HRESULT hr = NULL;

				// Get the value of the Name property
				VARIANT vtProp;
				VariantInit(&vtProp);

				KEYBOARD_INFO_ST stKeyBoard;
				ExecuteGetStringValue(pclsObj, L"DeviceID", vtProp, stKeyBoard.strDeviceID);
				if (stKeyBoard.strDeviceID.length())
				{
					if (-1 != stKeyBoard.strDeviceID.find("USB"))
						continue;
				}            

				ExecuteGetStringValue(pclsObj, L"Description", vtProp, stKeyBoard.strDescription);
				ExecuteGetIntValue(pclsObj,L"NumberOfFunctionKeys", vtProp, stKeyBoard.iNumberOfFunctionKeys);

				vKeyBoardInfo.push_back(stKeyBoard);
				VariantClear(&vtProp);
				pclsObj->Release();
			}
			pEnumerator->Release();
			return TRUE;
		} 

		BOOL CSystemAssetInfo::GetMouseInfo(MOUSE_INFO_VECTOR& vMouseInfo) //Win32_PointingDevice.
		{
			IEnumWbemClassObject* pEnumerator = NULL;
			ExecuteSQLQuery("SELECT * FROM Win32_PointingDevice", &pEnumerator);

			// Get the data from the query
			IWbemClassObject *pclsObj;
			ULONG uReturn = 0;
			while (pEnumerator)
			{

				if (!ExecuteSQLQueryNext(pEnumerator, &pclsObj))break; 
				HRESULT hr = NULL;

				// Get the value of the Name property
				VARIANT vtProp;
				VariantInit(&vtProp);

				MOUSE_INFO_ST stMouseInfo;
				ExecuteGetStringValue(pclsObj, L"DeviceID", vtProp, stMouseInfo.strDeviceID);
				if (stMouseInfo.strDeviceID.length())
				{
					if (-1 != stMouseInfo.strDeviceID.find("USB"))
						continue;
				}            

				ExecuteGetStringValue(pclsObj, L"Caption", vtProp, stMouseInfo.strCaption);
				ExecuteGetStringValue(pclsObj, L"Manufacturer", vtProp, stMouseInfo.strManufacturer);
				ExecuteGetIntValue(pclsObj,L"NumberOfButtons", vtProp, stMouseInfo.cNumberOfButtons);

				vMouseInfo.push_back(stMouseInfo);
				VariantClear(&vtProp);
				pclsObj->Release();
			}
			pEnumerator->Release();
			return TRUE;
		} 

		BOOL CSystemAssetInfo::GetMonitorInfo(MONITOR_INFO_VECTOR& vMonitorInfo) //Win32_DesktopMonitor.
		{
			IEnumWbemClassObject* pEnumerator = NULL;
			ExecuteSQLQuery("SELECT * FROM Win32_DesktopMonitor", &pEnumerator);

			// Get the data from the query 
			IWbemClassObject *pclsObj;
			ULONG uReturn = 0;
			while (pEnumerator)
			{
				if (!ExecuteSQLQueryNext(pEnumerator, &pclsObj))break; 
				HRESULT hr = NULL;
				// Get the value of the Name property
				VARIANT vtProp;
				VariantInit(&vtProp);

				//判断是否为可用的显示器
				MONITOR_INFO_ST tempMonitorInfo;
				ExecuteGetIntValue(pclsObj,L"PixelsPerXLogicalInch", vtProp, tempMonitorInfo.iPixelsPerXLogicalInch);
				if (tempMonitorInfo.iPixelsPerXLogicalInch == 0)
					continue;

				ExecuteGetStringValue(pclsObj, L"Caption", vtProp, tempMonitorInfo.strCaption);
				ExecuteGetStringValue(pclsObj, L"DeviceID", vtProp, tempMonitorInfo.strDeviceID);
				ExecuteGetStringValue(pclsObj, L"MonitorManufacturer", vtProp, tempMonitorInfo.strMonitorManufacturer);
				ExecuteGetStringValue(pclsObj, L"MonitorType", vtProp, tempMonitorInfo.strMonitorType);

				ExecuteGetIntValue(pclsObj,L"PixelsPerYLogicalInch", vtProp, tempMonitorInfo.iPixelsPerYLogicalInch);
				ExecuteGetIntValue(pclsObj,L"ScreenHeight", vtProp, tempMonitorInfo.iScreenHeight);
				ExecuteGetIntValue(pclsObj,L"ScreenWidth", vtProp, tempMonitorInfo.iScreenWidth);

				VariantClear(&vtProp);
				vMonitorInfo.push_back(tempMonitorInfo);
				pclsObj->Release();
			}
			pEnumerator->Release();
			return TRUE;
		} 

		BOOL CSystemAssetInfo::GetPrinterInfo(PRINTER_INFO_VECTOR& vPrinterInfo) //Win32_Printer
		{
			IEnumWbemClassObject* pEnumerator = NULL;
			ExecuteSQLQuery("SELECT * FROM Win32_Printer", &pEnumerator);

			// Get the data from the query
			IWbemClassObject *pclsObj;
			ULONG uReturn = 0;
			while (pEnumerator)
			{
				if (!ExecuteSQLQueryNext(pEnumerator, &pclsObj))break; 
				HRESULT hr = NULL;
				// Get the value of the Name property
				VARIANT vtProp;
				VariantInit(&vtProp);

				PRINTER_INFO_ST tempPrintInfo;

				ExecuteGetStringValue(pclsObj, L"DeviceID", vtProp, tempPrintInfo.strDeviceID);
				ExecuteGetStringValue(pclsObj, L"Caption", vtProp, tempPrintInfo.strCaption);

				vPrinterInfo.push_back(tempPrintInfo);
				VariantClear(&vtProp);
				pclsObj->Release();
			}
			pEnumerator->Release();
			return TRUE;
		} 

		BOOL CSystemAssetInfo::GetBatteryInfo(BATTERY_INFO_ST& stBatteryInfo) //Win32_Battery
		{
			IEnumWbemClassObject* pEnumerator = NULL;
			ExecuteSQLQuery("SELECT * FROM Win32_Battery", &pEnumerator);

			// Get the data from the query
			IWbemClassObject *pclsObj;
			ULONG uReturn = 0;
			while (pEnumerator)
			{
				if (!ExecuteSQLQueryNext(pEnumerator, &pclsObj))break; 
				HRESULT hr = NULL;

				// Get the value of the Name property
				VARIANT vtProp;
				VariantInit(&vtProp);

				ExecuteGetStringValue(pclsObj, L"Caption", vtProp, stBatteryInfo.strCaption);
				ExecuteGetStringValue(pclsObj, L"DeviceID", vtProp, stBatteryInfo.strDeviceID);
				ExecuteGetStringValue(pclsObj, L"Name", vtProp, stBatteryInfo.strName);

				string strTemp = "";
				ExecuteGetStringValue(pclsObj, L"DesignVoltage", vtProp, strTemp);
				if (strTemp.length())
					stBatteryInfo.dDesignVoltage = atof(strTemp.c_str());

				ExecuteGetIntValue(pclsObj,L"EstimatedChargeRemaining", vtProp, stBatteryInfo.iEstimatedChargeRemaining);
				ExecuteGetIntValue(pclsObj,L"EstimatedRunTime", vtProp, stBatteryInfo.iEstimatedRunTime);

				VariantClear(&vtProp);
				pclsObj->Release();
			}
			pEnumerator->Release();
			return TRUE;
		} 

		BOOL CSystemAssetInfo::Get1394Info(ASSET_1394_INFO_VECTOR& v1394Info)
		{
			IEnumWbemClassObject* pEnumerator = NULL;
			ExecuteSQLQuery("SELECT * FROM Win32_1394Controller", &pEnumerator);

			// Get the data from the query
			IWbemClassObject *pclsObj;
			ULONG uReturn = 0;
			while (pEnumerator)
			{  
				if (!ExecuteSQLQueryNext(pEnumerator, &pclsObj))break; 

				VARIANT vtProp;
				VariantInit(&vtProp);

				ASSET_1394_INFO_ST temp1394Info;

				ExecuteGetStringValue(pclsObj, L"DeviceID", vtProp, temp1394Info.strDeviceID);
				ExecuteGetStringValue(pclsObj, L"Caption", vtProp, temp1394Info.strCaption);
				ExecuteGetStringValue(pclsObj, L"Manufacturer", vtProp, temp1394Info.strManufacturer);

				v1394Info.push_back(temp1394Info);

				VariantClear(&vtProp);
				pclsObj->Release();
			}
			pEnumerator->Release();
			return TRUE;
		}

		BOOL CSystemAssetInfo::GetUSBInfo(USB_INFO_VECTOR& vUSBInfo)
		{
			IEnumWbemClassObject* pEnumerator = NULL;
			ExecuteSQLQuery("SELECT * FROM Win32_USBHub", &pEnumerator);

			// Get the data from the query
			IWbemClassObject *pclsObj;
			ULONG uReturn = 0;
			while (pEnumerator)
			{
				if (!ExecuteSQLQueryNext(pEnumerator, &pclsObj))break; 
				VARIANT vtProp;
				VariantInit(&vtProp);

				USB_INFO_ST tempUSBInfo;
				ExecuteGetStringValue(pclsObj, L"DeviceID", vtProp, tempUSBInfo.strDeviceID);
				ExecuteGetStringValue(pclsObj, L"Caption", vtProp, tempUSBInfo.strCaption);
				vUSBInfo.push_back(tempUSBInfo);

				VariantClear(&vtProp);
				pclsObj->Release();
			}
			pEnumerator->Release();
			return TRUE;
		}


		BOOL CSystemAssetInfo::GetCPUInfo(CPU_INFO_ST& stCPUInfo)
		{
			DWORD dwTableIndex = 0;
			DWORD dwTableSize;
			BOOL bResult = FALSE;
			bResult = GetTableByType(m_pbBIOSData, m_SMBiosLen, 4, dwTableIndex, dwTableSize);
			if (bResult)
			{
				SMBios_TYPE4 stSMBiosType4;
				GetData(m_pbBIOSData+dwTableIndex, stSMBiosType4);
				if (stSMBiosType4.byProcessorVersion)
				{
					stCPUInfo.strVersion = stSMBiosType4.szProcessorVersion;

				}

				switch (stSMBiosType4.byProcessorType)
				{
				case 1:
					stCPUInfo.strType = "Other";
					break;
				case 2:
					stCPUInfo.strType = "Unknown";
					break;
				case 3:
					stCPUInfo.strType = "Central Processor";
					break;
				case 4:
					stCPUInfo.strType = "Math Processor";
					break;
				case 5:
					stCPUInfo.strType = "DSP Processor";
					break;
				case 6:
					stCPUInfo.strType = "Video Processor";
					break;
				default :
					stCPUInfo.strType = "Unknown";
					break;
				}

				if (stSMBiosType4.byProcessorManufacturer)
				{
					stCPUInfo.strManufacturer = stSMBiosType4.szProcessorManufacturer;
				}

				stCPUInfo.wMaxSpeed = stSMBiosType4.wMaxSpeed;
				stCPUInfo.wCurrentSpeed = stSMBiosType4.wCurrentSpeed;
				stCPUInfo.wExternalClock = stSMBiosType4.wExternalClock;        

				GetTableByHandle( m_pbBIOSData, m_SMBiosLen, stSMBiosType4.wL1CacheHandle, dwTableIndex, dwTableSize);
				SMBios_TYPE7 stSMBiosType7;
				GetData(m_pbBIOSData+dwTableIndex, stSMBiosType7);
				stCPUInfo.wL1CacheSize = stSMBiosType7.wMaxmumCacheSize;

				GetTableByHandle(m_pbBIOSData, m_SMBiosLen, stSMBiosType4.wL2CacheHandle, dwTableIndex, dwTableSize);
				SMBios_TYPE7 stSMBiosType72;
				GetData(m_pbBIOSData+dwTableIndex, stSMBiosType72);
				stCPUInfo.wL2CacheSize = stSMBiosType72.wMaxmumCacheSize;

				if (stSMBiosType4.bySocketDesignation)
					stCPUInfo.strSocket = stSMBiosType4.szSocketDesignation;

				stCPUInfo.dVoltage = (stSMBiosType4.byVoltage-8*16)/10.0;
				if (stCPUInfo.dVoltage < 0)
					stCPUInfo.dVoltage = stSMBiosType4.byVoltage;

			}
			return TRUE;
		}

		BOOL CSystemAssetInfo::GetBIOSInfo(BIOS_INFO_ST& stBIOSInfo)
		{
			DWORD dwTableIndex = 0;
			DWORD dwTableSize;
			BOOL bResult = FALSE;
			bResult = GetTableByType(m_pbBIOSData, m_SMBiosLen, 0 , dwTableIndex, dwTableSize);
			if (bResult)
			{
				SMBios_TYPE0 m_type0;
				GetData(m_pbBIOSData+dwTableIndex,m_type0);
				if (m_type0.byVendor)
					stBIOSInfo.strVendor = m_type0.szVendor;

				if (m_type0.byBiosVersion)
					stBIOSInfo.strVersion = m_type0.szBIOSVersion;

				if (m_type0.byBIOSReleaseDate)
					stBIOSInfo.strReleaseData = m_type0.szBIOSReleaseDate;

				stBIOSInfo.iBIOSROMSize = 64*(m_type0.byBIOSROMSize+1);

				char buffer[128];
				memset(buffer, 0, sizeof(buffer));
				sprintf(buffer, "%d.%d", m_byMajorVersion,m_byMinorVersion);
				stBIOSInfo.strSMBIOS = buffer;
			}
			return TRUE;
		}

		BOOL CSystemAssetInfo::GetBaseBoardInfo(BASEBOARD_INFO_ST& stBaseBoardInfo)
		{
			DWORD dwTableIndex = 0;
			DWORD dwTableSize;
			BOOL bResult = FALSE;
			bResult = GetTableByType(m_pbBIOSData, m_SMBiosLen, 2, dwTableIndex, dwTableSize);
			if (bResult)
			{
				SMBios_TYPE2 stSMBiosType2;
				GetData(m_pbBIOSData+dwTableIndex, stSMBiosType2);
				if (stSMBiosType2.byManufacturer)
					stBaseBoardInfo.strManufacturer = stSMBiosType2.szManufacturer;

				if (stSMBiosType2.byProductName)
					stBaseBoardInfo.strProducName = stSMBiosType2.szProductName;

				switch (stSMBiosType2.byBoardType)
				{
				case 1:
					stBaseBoardInfo.strType = "Unknown";
					break;
				case 2:
					stBaseBoardInfo.strType = "Other";
					break;
				case 3:
					stBaseBoardInfo.strType = "Server Blade";
					break;
				case 4:
					stBaseBoardInfo.strType = "Connectivity Switch";
					break;
				case 5:
					stBaseBoardInfo.strType = "Connectivity Switch";
					break;
				case 6:
					stBaseBoardInfo.strType = "System Management Module";
					break;
				default:
					stBaseBoardInfo.strType = "Processor Module";
					break;
				}

				stBaseBoardInfo.strVersion = stSMBiosType2.szVersion;
				stBaseBoardInfo.strSerialNumber = stSMBiosType2.szSerialNumber;

			}
			return TRUE;
		}

		BOOL CSystemAssetInfo::GetSystemInfo(SYSTEM_INFO_ST& stSysInfo)
		{
			DWORD dwTableIndex = 0;
			DWORD dwTableSize;
			BOOL bResult = FALSE;

			bResult = GetTableByType(m_pbBIOSData, m_SMBiosLen, 1, dwTableIndex, dwTableSize);
			if (bResult)
			{
				SMBios_TYPE1 stSMBiosType1;
				GetData(m_pbBIOSData+dwTableIndex, stSMBiosType1);
				if (stSMBiosType1.byManufacturer)
					stSysInfo.strManufacturer = stSMBiosType1.szManufacturer;

				if (stSMBiosType1.byProductName)
					stSysInfo.strProductName = stSMBiosType1.szProductName;

				if (stSMBiosType1.byVersion)
					stSysInfo.strVersion = stSMBiosType1.szVersion;

				if (stSMBiosType1.bySerialNumber)
					stSysInfo.strSerialNumber = stSMBiosType1.szSerialNumber;

				if (stSMBiosType1.byUUID)
				{ 
					char buffer[128];
					memset(buffer, 0, sizeof(buffer));
					sprintf(buffer, "%x%x%x%x%x%x%x%x%x%x%x%x%x%x%x%x\r\n",
						stSMBiosType1.byUUID[0],stSMBiosType1.byUUID[1],stSMBiosType1.byUUID[2],
						stSMBiosType1.byUUID[3],stSMBiosType1.byUUID[4],stSMBiosType1.byUUID[5],
						stSMBiosType1.byUUID[6],stSMBiosType1.byUUID[7],stSMBiosType1.byUUID[8],
						stSMBiosType1.byUUID[9],stSMBiosType1.byUUID[10],stSMBiosType1.byUUID[11],
						stSMBiosType1.byUUID[12],stSMBiosType1.byUUID[13],stSMBiosType1.byUUID[14],
						stSMBiosType1.byUUID[15]);

					stSysInfo.strUUID = buffer;         
				}                
				switch (stSMBiosType1.byWakeupType)
				{
				case 0:
					stSysInfo.strWakeUpType = "Reserved";
					break;
				case 1:
					stSysInfo.strWakeUpType = "Other";
					break;
				case 2:
					stSysInfo.strWakeUpType = "Unknown";
					break;
				case 3:
					stSysInfo.strWakeUpType = "APM Timer";
					break;
				case 4:
					stSysInfo.strWakeUpType = "Modem Ring";
					break;
				case 5:
					stSysInfo.strWakeUpType = "LAN Remote";
					break;
				case 6:
					stSysInfo.strWakeUpType = "Power Switch";
					break;
				case 7:
					stSysInfo.strWakeUpType = "PCI PME";
					break;
				case 8:
					stSysInfo.strWakeUpType = "AC Power Restored";
					break;
				default:
					stSysInfo.strWakeUpType = "Unknown";
					break;
				}
			}
			return TRUE;
		}

		BOOL CSystemAssetInfo::GetModemInfo(MODEM_INFO_VECTOR & vModemInfo) //Win32_POTSModem
		{
			// Use the IWbemServices pointer to make requests of WMI	
			HRESULT hres;
			IEnumWbemClassObject* pEnumerator = NULL;
			ExecuteSQLQuery("SELECT * FROM Win32_POTSModem", &pEnumerator);

			// Get the data from the query
			IWbemClassObject *pclsObj;
			while (pEnumerator)
			{
				MODEM_INFO_ST stModemInfo;
				if (!ExecuteSQLQueryNext(pEnumerator, &pclsObj))break; 
				// Get the value of the Name property
				VARIANT vtProp;
				VariantInit(&vtProp);


				ExecuteGetStringValue(pclsObj, L"DeviceID", vtProp, stModemInfo.strDeviceID);
				if( stModemInfo.strDeviceID.length())
				{
					if (-1 == stModemInfo.strDeviceID.find("HDAUDIO"))
						continue;
				}
				else
					continue;

				ExecuteGetStringValue(pclsObj, L"Caption", vtProp, stModemInfo.strCaption);

				vModemInfo.push_back(stModemInfo);

				VariantClear(&vtProp);
				pclsObj->Release();
			}
			pEnumerator->Release();
			return TRUE;
		} 


		BOOL CSystemAssetInfo::GetSoftwareInfo(SOFTWARE_INFO_VECTOR & vSoftwareInfo)
		{
			HKEY    hKey, hSubKey;
			TCHAR    KeyBuf[MaxKEYLen], ValueBuf[MaxKEYLen];
			DWORD    dwKeyBufSize, dwValueBufSize;    
			DWORD    dwType = REG_SZ;
			if (ERROR_SUCCESS != RegOpenKeyEx(HKEY_LOCAL_MACHINE, "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall", 0, KEY_ALL_ACCESS, &hKey))
				return FALSE;  
			LONG retCode = ERROR_SUCCESS;

			//查询此键值下有多少个子键
			DWORD dwSubItem;
			if (RegQueryInfoKey(hKey, NULL, NULL, NULL, &dwSubItem, NULL, NULL, NULL, NULL, NULL, NULL, NULL) != ERROR_SUCCESS)
			{
				return FALSE;  
			}

			for (DWORD dwIndex = 0; dwIndex< dwSubItem; dwIndex++) 
			{ 
				SOFTWARE_INFO_ST tempSoftwareInfo;
				dwKeyBufSize = MaxKEYLen;
				retCode = RegEnumKeyEx(hKey, dwIndex, KeyBuf, &dwKeyBufSize, NULL, NULL, NULL, NULL);
				if (ERROR_SUCCESS != retCode)
					continue;

				// 排除系统安全更新, 以kb或KB打头
				if (!(KeyBuf[0] == 'k' && KeyBuf[1] == 'b') && !(KeyBuf[0] == 'K' && KeyBuf[1] == 'B'))
				{   
					char buffer[MaxKEYLen];
					memset(buffer, 0, sizeof(buffer));
					sprintf(buffer, "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\%s", KeyBuf);
					if ( ERROR_SUCCESS != RegOpenKeyEx(HKEY_LOCAL_MACHINE, buffer, 0, KEY_ALL_ACCESS, &hSubKey) )
						continue;


					// DisplayName
					dwValueBufSize = MaxKEYLen;
					if ( ERROR_SUCCESS != RegQueryValueEx(hSubKey, "DisplayName", NULL, &dwType, (LPBYTE)ValueBuf, &dwValueBufSize) )
					{
						RegCloseKey(hSubKey);
						continue;        // DisplayName不允许为空
					}
					tempSoftwareInfo.strDisplayName = ValueBuf;


					dwValueBufSize = MaxKEYLen;
					if ( ERROR_SUCCESS != RegQueryValueEx(hSubKey, "DisplayVersion", NULL, &dwType, (LPBYTE)ValueBuf, &dwValueBufSize) )
					{
						ValueBuf[0] = ' ';                //　若没有此项，则将其设置为空格 
						ValueBuf[1] = '\0';
					}
					tempSoftwareInfo.strDisplayVersion = ValueBuf;


					dwValueBufSize = MaxKEYLen;
					if ( ERROR_SUCCESS != RegQueryValueEx(hSubKey, "Publisher", NULL, &dwType, (LPBYTE)ValueBuf, &dwValueBufSize) )
					{
						ValueBuf[0] = ' ';                //　若没有此项，则将其设置为空格 
						ValueBuf[1] = '\0';
					}
					tempSoftwareInfo.strPublisher = ValueBuf;

					dwValueBufSize = MaxKEYLen;
					if ( ERROR_SUCCESS != RegQueryValueEx(hSubKey, "InstallDate", NULL, &dwType, (LPBYTE)ValueBuf, &dwValueBufSize) )
					{
						ValueBuf[0] = ' ';                //　若没有此项，则将其设置为空格 
						ValueBuf[1] = '\0';
					}
					if (dwValueBufSize > 7)
					{
						memset(buffer, 0, sizeof(buffer));
						sprintf(buffer, "%c%c%c%c-%c%c-%c%c", ValueBuf[0],ValueBuf[1], ValueBuf[2],
							ValueBuf[3], ValueBuf[4], ValueBuf[5], ValueBuf[6], ValueBuf[7]);
						tempSoftwareInfo.strInstallDate = buffer; 
					}

					else
						tempSoftwareInfo.strInstallDate = ValueBuf;


					dwValueBufSize = MaxKEYLen;
					if ( ERROR_SUCCESS != RegQueryValueEx(hSubKey, "InstallLocation", NULL, &dwType, (LPBYTE)ValueBuf, &dwValueBufSize) )
					{
						ValueBuf[0] = ' ';                //　若没有此项，则将其设置为空格 
						ValueBuf[1] = '\0';
					}
					tempSoftwareInfo.strInstallLocation = ValueBuf;


					dwValueBufSize = MaxKEYLen;
					if ( ERROR_SUCCESS != RegQueryValueEx(hSubKey, "URLInfoAbout", NULL, &dwType, (LPBYTE)ValueBuf, &dwValueBufSize) )
					{
						ValueBuf[0] = ' ';                //　若没有此项，则将其设置为空格 
						ValueBuf[1] = '\0';
					}
					tempSoftwareInfo.strURLInfoAbout = ValueBuf;


					dwValueBufSize = MaxKEYLen;
					if ( ERROR_SUCCESS != RegQueryValueEx(hSubKey, "UninstallString", NULL, &dwType, (LPBYTE)ValueBuf, &dwValueBufSize) )
					{
						ValueBuf[0] = ' ';                //　若没有此项，则将其设置为空格 
						ValueBuf[1] = '\0';
					}
					tempSoftwareInfo.strUninstallString = ValueBuf;


					dwValueBufSize = MaxKEYLen;
					if ( ERROR_SUCCESS != RegQueryValueEx(hSubKey, "ProductId", NULL, &dwType, (LPBYTE)ValueBuf, &dwValueBufSize) )
					{
						ValueBuf[0] = ' ';                //　若没有此项，则将其设置为空格 
						ValueBuf[1] = '\0';
					}
					tempSoftwareInfo.strProductID = ValueBuf;


					vSoftwareInfo.push_back(tempSoftwareInfo);

					if (hSubKey)
					{
						RegCloseKey(hSubKey);
						hSubKey = NULL;
					}
				}
			}

			if (hKey)
			{
				RegCloseKey(hKey);
				hKey = NULL;
			}

			if (hSubKey)
			{
				RegCloseKey(hSubKey);
				hSubKey = NULL;
			}

			return TRUE;
		}


		//SMBIOS
		BOOL CSystemAssetInfo::GetSMBIOSData()
		{
			if (bIsWindows2000)
				return GetSMBIOSDataByDMI();;

			return GetSMBIOSDataByWMI();;
		}

		BOOL CSystemAssetInfo::GetSMBIOSDataByDMI()
		{
			//读入ntdll.dll,得到函数地址
			HMODULE hLibModule  = NULL;
			hLibModule = LoadLibrary("ntdll.dll");
			if(hLibModule == NULL)
				return FALSE;
			ZwOpenSec = (ZWOPENSEC)GetProcAddress(hLibModule,"ZwOpenSection");
			ZwMapView = (ZWMAPVIEW)GetProcAddress(hLibModule,"ZwMapViewOfSection");
			ZwUMapView = (ZWUMAPVIEW)GetProcAddress(hLibModule,"ZwUnmapViewOfSection");
			ZWCloseSec = (ZWCLOSESEC)GetProcAddress(hLibModule,"ZwClose");

			//获得SMTableEntryPoint
			SM_STRUCT_TABLE_ENTRY *g_TableEntry = new SM_STRUCT_TABLE_ENTRY;
			memset(g_TableEntry,0,sizeof(SM_STRUCT_TABLE_ENTRY));
			GetSMTableEntryPoint(g_TableEntry);

			m_byMajorVersion = g_TableEntry->bSMMajorVer;
			m_byMinorVersion = g_TableEntry->bSMMinVer;

			//获得SMTable
			DWORD m_SMBiosAddr = g_TableEntry->dStructTableAddress;
			m_SMBiosLen = g_TableEntry->wStructTableLen;
			m_pbBIOSData = new BYTE[m_SMBiosLen];
			memset(m_pbBIOSData, 0, m_SMBiosLen);
			GetSMTable(m_pbBIOSData,m_SMBiosAddr,m_SMBiosLen);
			FreeLibrary(hLibModule);
			if(g_TableEntry != NULL)
			{
				delete [] g_TableEntry;
				g_TableEntry = NULL;
			}
			return TRUE;
		}

		BOOL CSystemAssetInfo::GetSMBIOSDataByWMI()
		{
			BOOL bRet = FALSE;
			HRESULT hres;
			// Obtain the initial locator to Windows Management on a particular host computer.
			IWbemLocator *pLoc = 0;
			hres = CoCreateInstance(CLSID_WbemLocator, 0, CLSCTX_INPROC_SERVER, IID_IWbemLocator, (LPVOID *) &pLoc);
			if (FAILED(hres))
				return FALSE; 

			// Connect to the root\cimv2 namespace with the current user and obtain pointer pSvc to make IWbemServices calls.
			IWbemServices *pSvc = 0;
			hres = pLoc->ConnectServer(_bstr_t(L"ROOT\\WMI"), NULL, NULL, 0, NULL, 0, 0, &pSvc );                              
			if (FAILED(hres))
			{
				if (pLoc)
				{
					pLoc->Release();
					pLoc = NULL;
				}
				return FALSE; 
			}
			// Set the IWbemServices proxy so that impersonation of the user (client) occurs.
			hres = CoSetProxyBlanket(pSvc, RPC_C_AUTHN_WINNT,RPC_C_AUTHZ_NONE,NULL,RPC_C_AUTHN_LEVEL_CALL,
				RPC_C_IMP_LEVEL_IMPERSONATE,NULL,EOAC_NONE);
			if (FAILED(hres))
			{
				if (pSvc)
				{
					pSvc->Release(); 
					pSvc = NULL;
				}
				if (pLoc)
				{
					pLoc->Release();
					pLoc = NULL;
				}

				return FALSE; 
			}

			IEnumWbemClassObject* pEnumerator = NULL;
			hres = pSvc->CreateInstanceEnum( L"MSSMBios_RawSMBiosTables", 0, NULL, &pEnumerator);
			if (FAILED(hres))
			{
				if (pSvc)
				{
					pSvc->Release(); 
					pSvc = NULL;
				}
				if (pLoc)
				{
					pLoc->Release();
					pLoc = NULL;
				} 
				return FALSE;  
			}
			else
			{ 
				do
				{
					IWbemClassObject* pInstance = NULL;
					ULONG dwCount = NULL;
					hres = pEnumerator->Next(WBEM_INFINITE,1,&pInstance,&dwCount);  
					if(SUCCEEDED(hres))
					{
						VARIANT varBIOSData;
						VariantInit(&varBIOSData);
						CIMTYPE type;

						hres = pInstance->Get(bstr_t("SmbiosMajorVersion"),0,&varBIOSData,&type,NULL);
						if(FAILED(hres))
							VariantClear(&varBIOSData);
						else
						{
							m_byMajorVersion = (BYTE)varBIOSData.iVal;
							VariantInit(&varBIOSData);
							hres = pInstance->Get(bstr_t("SmbiosMinorVersion"),0,&varBIOSData,&type,NULL);
							if(FAILED(hres))
								VariantClear(&varBIOSData);
							else
							{
								m_byMinorVersion = (BYTE)varBIOSData.iVal;
								VariantInit(&varBIOSData);
								hres = pInstance->Get(bstr_t("SMBiosData"),0,&varBIOSData,&type,NULL);
								if(SUCCEEDED(hres))
								{
									SAFEARRAY *parray = NULL;
									parray = V_ARRAY(&varBIOSData);
									BYTE* pbData = (BYTE*)parray->pvData;
									m_SMBiosLen = parray->rgsabound[0].cElements;
									m_pbBIOSData = new BYTE[m_SMBiosLen];
									memcpy(m_pbBIOSData,pbData,m_SMBiosLen);
									bRet = TRUE;
								}
								VariantClear(&varBIOSData);
							}
						}
						break;
					}   
				} while (hres == WBEM_S_NO_ERROR);
			}    
			// Cleanup
			if (pSvc)
			{
				pSvc->Release(); 
				pSvc = NULL;
			}
			if (pLoc)
			{
				pLoc->Release();
				pLoc = NULL;
			}

			return bRet;
		}

		int CSystemAssetInfo::GetSMTableEntryPoint(SM_STRUCT_TABLE_ENTRY* pEntry)
		{
			if (pEntry == NULL)
				return 1;

			BYTE pBios[65536];
			GetBufferFromMem(pBios, 0xf0000, 0xffff);

			size_t fp;
			for(fp=0; fp<=0xFFF0; fp+=16)
			{
				if(memcmp(pBios+fp, "_SM_", 4)==0 && fp<=0xFFE0)
				{            
					fp+=16;
					if(memcmp(pBios+fp, "_DMI_", 5)==0)
					{
						memcpy(pEntry, pBios+fp-16,sizeof(SM_STRUCT_TABLE_ENTRY));
						m_byMajorVersion = pEntry->bSMMajorVer;
						m_byMinorVersion = pEntry->bSMMinVer;
						break;
					}
				}
			}
			return 0;
		}

		int CSystemAssetInfo::GetSMTable(BYTE* pBuffer, DWORD dwBaseAddress, DWORD dwLength)
		{    
			return GetBufferFromMem(pBuffer,dwBaseAddress,dwLength);
		}

		int CSystemAssetInfo::GetBufferFromMem(BYTE* pBuffer, DWORD dwBaseAddress, DWORD dwLength)
		{
			int iResult = 0;

			HANDLE hSection;
			UNICODE_STRING struObjName;
			OBJECT_ATTRIBUTES objAttributes;
			DWORD ba = 0;
			SIZE_T ssize;

			// 初始化全局字符串
			LARGE_INTEGER so;
			so.LowPart= dwBaseAddress;
			so.HighPart=0x00000000;

			ssize=dwLength;

			wchar_t strPH[30]=L"\\device\\physicalmemory";

			struObjName.Buffer=strPH;
			struObjName.Length=0x2c;//注意大小是按字节算
			struObjName.MaximumLength =0x2e;//也是字节

			objAttributes.Attributes =64;//属性
			objAttributes.Length =24;//OBJECT_ATTRIBUTES类型的长度
			objAttributes.ObjectName=&struObjName;//指向对象的指针
			objAttributes.RootDirectory=0;
			objAttributes.SecurityDescriptor=0;
			objAttributes.SecurityQualityOfService =0;

			iResult = ZwOpenSec(&hSection,SECTION_MAP_READ,&objAttributes);
			if (STATUS_SUCCESS == iResult)
			{
				iResult = ZwMapView((HANDLE)hSection,(HANDLE)-1,&ba,0, dwLength ,&so,&ssize,1,0,PAGE_READONLY);
				if (STATUS_SUCCESS == iResult)
				{
					if (dwLength < ssize)
						memcpy(pBuffer, (void*)ba ,dwLength);
					else
						iResult = -1;

					ZwUMapView((HANDLE)-1, (void*)ba);
				}

				ZWCloseSec(hSection);
			}

			return iResult;
		}

		BOOL CSystemAssetInfo::GetTableByType(BYTE* const pbData, DWORD dwTotalTableSize, BYTE byTableType, 
			DWORD& dwTableIndex, DWORD& dwTableSize)
		{
			BYTE byCurrentSection = 0;
			BYTE byLengthOfFormattedSection = 0;
			BYTE*    pbCurrentTable = NULL;
			BOOL bfind = FALSE;

			if(pbData)
				pbCurrentTable = pbData;
			else
				return -1;

			for(DWORD j= 0; j < dwTotalTableSize; )
			{
				byCurrentSection = pbCurrentTable[0];        
				if( byCurrentSection == byTableType ) 
				{
					byLengthOfFormattedSection = pbCurrentTable[1];
					BYTE* pUnformattedSection = pbCurrentTable + byLengthOfFormattedSection;

					//now look for 2 zeros.
					for(int m = 0 ;  m < dwTotalTableSize - byLengthOfFormattedSection; m++)
					{
						if(pUnformattedSection[m] == 0 && pUnformattedSection[m+1] == 0)
						{
							dwTableSize = byLengthOfFormattedSection + m + 2;
							break;
						}
					}
					dwTableIndex = j;
					bfind = TRUE;
					break;
				}

				byLengthOfFormattedSection = pbCurrentTable[1];
				BYTE* pUnformattedSection = pbCurrentTable + byLengthOfFormattedSection;

				//now look for 2 zeros.
				for(int m = 0 ; m < dwTotalTableSize - byLengthOfFormattedSection; m++)
				{
					if(pUnformattedSection[m] == 0 && pUnformattedSection[m+1] == 0)
					{
						dwTableSize = byLengthOfFormattedSection + m + 2;
						j = j + dwTableSize;
						pbCurrentTable = pbCurrentTable + dwTableSize;
						break;
					}
				}
			}
			return bfind;
		}

		BOOL CSystemAssetInfo::GetTableByHandle(BYTE* const pbData, DWORD dwTotalTableSize, WORD wTableHandle, 
			DWORD& dwTableIndex, DWORD& dwTableSize)
		{
			WORD wCurrenthandle = 0;
			BYTE byLengthOfFormattedSection = 0;
			BYTE*    pbCurrentTable = NULL;
			BOOL bfind = FALSE;

			if(pbData)
				pbCurrentTable = pbData;
			else
				return -1;

			for(DWORD j= 0; j < dwTotalTableSize; )
			{
				wCurrenthandle = *(WORD*)(pbCurrentTable+2);        
				if( wCurrenthandle == wTableHandle ) 
				{
					byLengthOfFormattedSection = pbCurrentTable[1];
					BYTE* pUnformattedSection = pbCurrentTable + byLengthOfFormattedSection;

					//now look for 2 zeros.
					for(int m = 0 ; m < dwTotalTableSize - byLengthOfFormattedSection; m++)
					{
						if(pUnformattedSection[m] == 0 && pUnformattedSection[m+1] == 0)
						{
							dwTableSize = byLengthOfFormattedSection + m + 2;
							break;
						}
					}
					dwTableIndex = j;
					bfind = TRUE;
					break;
				}        
				byLengthOfFormattedSection = pbCurrentTable[1];
				BYTE* pUnformattedSection = pbCurrentTable + byLengthOfFormattedSection;        
				//now look for 2 zeros.
				for(int m = 0 ; m < dwTotalTableSize - byLengthOfFormattedSection; m++)
				{
					if(pUnformattedSection[m] == 0 && pUnformattedSection[m+1] == 0)
					{
						dwTableSize = byLengthOfFormattedSection + m + 2;
						j = j + dwTableSize;
						pbCurrentTable = pbCurrentTable + dwTableSize;
						break;
					}
				}
			}
			return bfind;
		}

		char* CSystemAssetInfo::GetString(BYTE* pbData,BYTE byIndex)
		{
			char* pStr = NULL;    
			BYTE j = 0;
			do
			{
				pStr = (char*)pbData;
				pbData += (strlen(pStr) + 1);
				j++;
			}
			while(j < byIndex);
			return pStr;
		}

		int CSystemAssetInfo::GetData(BYTE* pbData, SMBios_TYPE0& stSMBiosType0)
		{
			BYTE* pbSectionStart = pbData;
			if(pbData)
			{
				memset(&stSMBiosType0,0,sizeof(SMBios_TYPE0));
				//mandatory header
				stSMBiosType0.stHeader.bySection = *pbData++;
				stSMBiosType0.stHeader.byLength = *pbData++;
				stSMBiosType0.stHeader.wHandle = *(WORD*)pbData,pbData++,pbData++;

				//type specific data
				//START formatted section
				stSMBiosType0.byVendor = *pbData++;
				stSMBiosType0.byBiosVersion = *pbData++;
				stSMBiosType0.wBIOSStartingSegment = *(WORD*)pbData,pbData++,pbData++;        
				stSMBiosType0.byBIOSReleaseDate = *pbData++;
				stSMBiosType0.byBIOSROMSize = *pbData++;
				for(int j = 0 ; j < 8 ; j++)
					stSMBiosType0.qwBIOSCharacteristics[j] = *pbData++;
				stSMBiosType0.byExtensionByte1 = *pbData++;
				stSMBiosType0.byExtensionByte2 = *pbData++;
				stSMBiosType0.bySystemBIOSMajorRelease = *pbData++;
				stSMBiosType0.bySystemBIOSMinorRelease = *pbData++;
				stSMBiosType0.byEmbeddedFirmwareMajorRelease = *pbData++;
				stSMBiosType0.byEmbeddedFirmwareMinorRelease = *pbData++;
				//END formatted section

				//START unformatted section
				pbSectionStart += stSMBiosType0.stHeader.byLength;        
				stSMBiosType0.szVendor = GetString(pbSectionStart,stSMBiosType0.byVendor);
				stSMBiosType0.szBIOSVersion = GetString(pbSectionStart,stSMBiosType0.byBiosVersion);
				stSMBiosType0.szBIOSReleaseDate = GetString(pbSectionStart,stSMBiosType0.byBIOSReleaseDate);
				//END unformatted section
			}
			return (pbData != NULL);
		}

		int CSystemAssetInfo::GetData(BYTE* pbData, SMBios_TYPE1& stSMBiosType1)
		{
			BYTE* pbSectionStart = pbData;
			if(pbData)
			{
				memset(&stSMBiosType1,0,sizeof(SMBios_TYPE1));        
				if(m_byMajorVersion >=2 && m_byMinorVersion > 0)
				{
					//mandatory header
					stSMBiosType1.stHeader.bySection = *pbData++;
					stSMBiosType1.stHeader.byLength = *pbData++;
					stSMBiosType1.stHeader.wHandle = *(WORD*)pbData,pbData++,pbData++;

					//type specific data
					//START formatted section
					stSMBiosType1.byManufacturer = *pbData++;
					stSMBiosType1.byProductName = *pbData++;
					stSMBiosType1.byVersion = *pbData++;
					stSMBiosType1.bySerialNumber = *pbData++;
				}

				if(m_byMajorVersion >=2 && m_byMinorVersion > 1)
				{
					for(int j = 0 ; j < 16 ; j++)
						stSMBiosType1.byUUID[j] = *pbData++;
					stSMBiosType1.byWakeupType = *pbData++;
				}
				//END formatted section

				//START unformatted section
				pbSectionStart += stSMBiosType1.stHeader.byLength;        
				if(stSMBiosType1.byManufacturer)
					stSMBiosType1.szManufacturer = GetString(pbSectionStart,stSMBiosType1.byManufacturer);
				if(stSMBiosType1.byProductName)
					stSMBiosType1.szProductName = GetString(pbSectionStart,stSMBiosType1.byProductName);
				if(stSMBiosType1.byVersion)
					stSMBiosType1.szVersion = GetString(pbSectionStart,stSMBiosType1.byVersion);
				if(stSMBiosType1.bySerialNumber)
					stSMBiosType1.szSerialNumber = GetString(pbSectionStart,stSMBiosType1.bySerialNumber);
				//END unformatted section
			}
			return (pbData != NULL);
		}

		int CSystemAssetInfo::GetData(BYTE* pbData, SMBios_TYPE2& stSMBiosType2)
		{
			BYTE* pbSectionStart = pbData;
			if(pbData)
			{
				memset(&stSMBiosType2,0,sizeof(SMBios_TYPE2));        
				//mandatory header
				stSMBiosType2.stHeader.bySection = *pbData++;
				stSMBiosType2.stHeader.byLength = *pbData++;
				stSMBiosType2.stHeader.wHandle = *(WORD*)pbData,pbData++,pbData++;

				//type specific data
				//START formatted section
				stSMBiosType2.byManufacturer = *pbData++;
				stSMBiosType2.byProductName = *pbData++;
				stSMBiosType2.byVersion = *pbData++;
				stSMBiosType2.bySerialNumber = *pbData++;
				stSMBiosType2.byAssetTag = *pbData++;
				stSMBiosType2.byFeatureFlags = *pbData++;
				stSMBiosType2.byLocationInChassis = *pbData++;
				stSMBiosType2.wChassisHandle = *(WORD*)pbData,pbData++,pbData++;
				stSMBiosType2.byBoardType = *pbData++;
				stSMBiosType2.byNumOfContainedObjectHandles = *pbData++;        
				for(int j = 0 ; j < stSMBiosType2.byNumOfContainedObjectHandles ; j++)
					stSMBiosType2.ContainedObjectHandles[j] = (WORD*)pbData,pbData++,pbData++;
				//END formatted section

				//START unformatted section
				pbSectionStart += stSMBiosType2.stHeader.byLength;        
				if(stSMBiosType2.byManufacturer)
					stSMBiosType2.szManufacturer = GetString(pbSectionStart,stSMBiosType2.byManufacturer);
				if(stSMBiosType2.byProductName)
					stSMBiosType2.szProductName = GetString(pbSectionStart,stSMBiosType2.byProductName);
				if(stSMBiosType2.byVersion)
					stSMBiosType2.szVersion = GetString(pbSectionStart,stSMBiosType2.byVersion);
				if(stSMBiosType2.bySerialNumber)
					stSMBiosType2.szSerialNumber = GetString(pbSectionStart,stSMBiosType2.bySerialNumber);
				if(stSMBiosType2.byAssetTag)
					stSMBiosType2.szAssetTag = GetString(pbSectionStart,stSMBiosType2.byAssetTag);
				if(stSMBiosType2.byLocationInChassis)
					stSMBiosType2.szLocationInChassis = GetString(pbSectionStart,stSMBiosType2.byLocationInChassis);
				//END unformatted section
			}
			return (pbData != NULL);
		}

		int CSystemAssetInfo::GetData(BYTE* pbData, SMBios_TYPE4& stSMBiosType4)
		{
			BYTE* pbSectionStart = pbData;    
			if(pbData)
			{
				memset(&stSMBiosType4,0,sizeof(SMBios_TYPE4));

				if(m_byMajorVersion >=2 && m_byMinorVersion > 0)
				{
					//mandatory header
					stSMBiosType4.stHeader.bySection = *pbData++;
					stSMBiosType4.stHeader.byLength = *pbData++;
					stSMBiosType4.stHeader.wHandle = *(WORD*)pbData,pbData++,pbData++;

					//type specific data
					//START formatted section
					stSMBiosType4.bySocketDesignation = *pbData++;
					stSMBiosType4.byProcessorType = *pbData++;
					stSMBiosType4.byProcessorFamily = *pbData++;
					stSMBiosType4.byProcessorManufacturer = *pbData++;
					for(int j = 0 ; j < 8; j++)
						stSMBiosType4.qwProcessorID[j] = *pbData++;
					stSMBiosType4.byProcessorVersion = *pbData++;
					stSMBiosType4.byVoltage = *pbData++;            
					stSMBiosType4.wExternalClock = *(WORD*)pbData,pbData++,pbData++;
					stSMBiosType4.wMaxSpeed = *(WORD*)pbData,pbData++,pbData++;
					stSMBiosType4.wCurrentSpeed = *(WORD*)pbData,pbData++,pbData++;            
					stSMBiosType4.byStatus = *pbData++;
					stSMBiosType4.byProcessorUpgrade = *pbData++;
				}

				if(m_byMajorVersion >=2 && m_byMinorVersion > 1)
				{
					stSMBiosType4.wL1CacheHandle = *(WORD*)pbData,pbData++,pbData++;
					stSMBiosType4.wL2CacheHandle = *(WORD*)pbData,pbData++,pbData++;
					stSMBiosType4.wL3CacheHandle = *(WORD*)pbData,pbData++,pbData++;
				}

				if(m_byMajorVersion >=2 && m_byMinorVersion > 3)
				{
					stSMBiosType4.bySerialNumber = *pbData++;
					stSMBiosType4.byAssetTagNumber = *pbData++;
					stSMBiosType4.byPartNumber = *pbData++;
				}        
				//END formatted section

				//START unformatted section
				pbSectionStart += stSMBiosType4.stHeader.byLength;        
				if(stSMBiosType4.bySocketDesignation)
					stSMBiosType4.szSocketDesignation = GetString(pbSectionStart,stSMBiosType4.bySocketDesignation);
				if(stSMBiosType4.byProcessorManufacturer)
					stSMBiosType4.szProcessorManufacturer = GetString(pbSectionStart,stSMBiosType4.byProcessorManufacturer);
				if(stSMBiosType4.bySerialNumber)
					stSMBiosType4.szSerialNumber = GetString(pbSectionStart,stSMBiosType4.bySerialNumber);
				if(stSMBiosType4.byAssetTagNumber)
					stSMBiosType4.szAssetTagNumber = GetString(pbSectionStart,stSMBiosType4.byAssetTagNumber);
				if(stSMBiosType4.byPartNumber)
					stSMBiosType4.szPartNumber = GetString(pbSectionStart,stSMBiosType4.byPartNumber);
				if (stSMBiosType4.byProcessorVersion)
					stSMBiosType4.szProcessorVersion = GetString(pbSectionStart,stSMBiosType4.byProcessorVersion);        
				//END unformatted section
			}
			return (pbData != NULL);
		}

		int CSystemAssetInfo::GetData(BYTE* pbData, SMBios_TYPE7& stSMBiosType7)
		{
			BYTE* pbSectionStart = pbData;    
			if(pbData)
			{
				memset(&stSMBiosType7,0,sizeof(SMBios_TYPE7));
				if(m_byMajorVersion >=2 && m_byMinorVersion > 0)
				{
					//mandatory header
					stSMBiosType7.stHeader.bySection = *pbData++;
					stSMBiosType7.stHeader.byLength = *pbData++;
					stSMBiosType7.stHeader.wHandle = *(WORD*)pbData,pbData++,pbData++;

					//type specific data
					//START formatted section
					stSMBiosType7.bySocketDesignation = *pbData++;
					stSMBiosType7.wCacheConfiguration = *(WORD*)pbData,pbData++,pbData++;
					stSMBiosType7.wMaxmumCacheSize = *(WORD*)pbData,pbData++,pbData++;
					stSMBiosType7.wInstalledSize = *(WORD*)pbData,pbData++,pbData++;
					stSMBiosType7.wSupportedSRAMType = *(WORD*)pbData,pbData++,pbData++;
					stSMBiosType7.wCurrentSRAMType = *(WORD*)pbData,pbData++,pbData++;
				}
				if(m_byMajorVersion >=2 && m_byMinorVersion > 1)
				{
					stSMBiosType7.byCacheSpeed = *pbData++;
					stSMBiosType7.byErrorCorrectionType = *pbData++;
					stSMBiosType7.bySystemCacheType = *pbData++;
					stSMBiosType7.byAssociativity = *pbData++;
				}
				//END formatted section

				//START unformatted section
				pbSectionStart += stSMBiosType7.stHeader.byLength;
				if(stSMBiosType7.bySocketDesignation)
					stSMBiosType7.szSocketDesignation = GetString(pbSectionStart,stSMBiosType7.bySocketDesignation);
				//END unformatted section
			}    
			return (pbData != NULL);
		}

		int CSystemAssetInfo::GetData(BYTE* pbData, SMBios_TYPE16& stSMBiosType16)
		{
			BYTE* pbSectionStart = pbData;    
			if(pbData)
			{
				memset(&stSMBiosType16,0,sizeof(SMBios_TYPE16));
				if(m_byMajorVersion >=2 && m_byMinorVersion > 1)
				{
					//mandatory header
					stSMBiosType16.stHeader.bySection = *pbData++;
					stSMBiosType16.stHeader.byLength = *pbData++;
					stSMBiosType16.stHeader.wHandle = *(WORD*)pbData,pbData++,pbData++;

					//type specific data
					//START formatted section
					stSMBiosType16.byLocation = *pbData++;
					stSMBiosType16.byUser =  *pbData++;
					stSMBiosType16.byMemoryErrorCorrection =  *pbData++;
					stSMBiosType16.dwMaximumCapacity =  *(DWORD*)pbData,pbData++,pbData++,pbData++,pbData++;
					stSMBiosType16.wMemoryErrorInformationHandle = *(WORD*)pbData,pbData++,pbData++;
					stSMBiosType16.wNumberofMemoryDevices = *(WORD*)pbData,pbData++,pbData++;
				}//END formatted section        
			}    
			return (pbData != NULL);
		}

		int CSystemAssetInfo::GetData(BYTE* pbData, SMBios_TYPE17& stSMBiosType17)
		{
			BYTE* pbSectionStart = pbData;    
			if(pbData)
			{
				memset(&stSMBiosType17,0,sizeof(SMBios_TYPE17));
				if(m_byMajorVersion >=2 && m_byMinorVersion > 1)
				{
					//mandatory header
					stSMBiosType17.stHeader.bySection = *pbData++;
					stSMBiosType17.stHeader.byLength = *pbData++;
					stSMBiosType17.stHeader.wHandle = *(WORD*)pbData,pbData++,pbData++;

					//type specific data
					//START formatted section
					stSMBiosType17.wMemoryArrayHandle = *(WORD*)pbData,pbData++,pbData++;
					stSMBiosType17.wMemoryHandle = *(WORD*)pbData,pbData++,pbData++;
					stSMBiosType17.wTotalWidth = *(WORD*)pbData,pbData++,pbData++;
					stSMBiosType17.wDataWidth = *(WORD*)pbData,pbData++,pbData++;
					stSMBiosType17.wSize = *(WORD*)pbData,pbData++,pbData++;
					stSMBiosType17.byFactor = *pbData++;
					stSMBiosType17.byDeviceSet = *pbData++;
					stSMBiosType17.byDeviceLocator = *pbData++;
					stSMBiosType17.byBankLocator = *pbData++;
					stSMBiosType17.byMemoryType = *pbData++;
					stSMBiosType17.wTypdeDetail = *(WORD*)pbData,pbData++,pbData++;
					stSMBiosType17.wSpeed = *(WORD*)pbData,pbData++,pbData++;
					stSMBiosType17.byManufacturer = *pbData++;
					stSMBiosType17.bySerialNumber = *pbData++;
					stSMBiosType17.byAssetTag = *pbData++;
					stSMBiosType17.byPartNumber = *pbData++;
				}//END formatted section        
			}    
			return (pbData != NULL);
		}

		BOOL CSystemAssetInfo::GetALLHardwareInfo(ASSET_INFO_MAP& mAssetInfo)
		{
			mAssetInfo.clear();
			GetAllHardwareInfoByWMI(mAssetInfo);

			//修正设备信息
			ASSET_INFO_MAP AssetInfoEx;
			GetALLHardwareInfoBySetUp(AssetInfoEx);

			ASSET_INFO_MAP::iterator MapIter;
			for(MapIter = AssetInfoEx.begin(); MapIter != AssetInfoEx.end(); MapIter++)
			{
				int iType = 0;
				string strClass = MapIter->second[0];
				string strDevID = MapIter->second[1];

				// 光驱
				if (strClass == "CDROM" || strClass.find("DVD") != -1)
				{
					if (-1 == strDevID.find("IDE"))
						continue;

					ASSET_INFO_VEC vecTemp;
					ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,ASSET_CDROM);
					ASSET_VECTOR_PUSHBACK_STRING(vecTemp,MapIter->second[1]);
					vecTemp.push_back("");
					ASSET_VECTOR_PUSHBACK_STRING(vecTemp,MapIter->second[2]);
					vecTemp.push_back("");
					ASSET_VECTOR_PUSHBACK_STRING(vecTemp,MapIter->second[3]);
					mAssetInfo.insert(make_pair(MapIter->second[1],vecTemp));
					continue;
				}

				//鼠标
				if (strClass == "Mouse" || strClass.find("Mice") != -1)
				{
					ASSET_INFO_VEC vecTemp;
					ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,ASSET_MOUSE);
					ASSET_VECTOR_PUSHBACK_STRING(vecTemp,MapIter->second[1]);
					ASSET_VECTOR_PUSHBACK_STRING(vecTemp,MapIter->second[2]);
					vecTemp.push_back("");
					ASSET_VECTOR_PUSHBACK_STRING(vecTemp,MapIter->second[3]);
					mAssetInfo.insert(make_pair(MapIter->second[1],vecTemp));
					continue;
				}

				//键盘
				if (strClass == "Keyboard" || strClass == "Keyboards" )
				{
					ASSET_INFO_VEC vecTemp;
					ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,ASSET_KEYBOARD);
					ASSET_VECTOR_PUSHBACK_STRING(vecTemp,MapIter->second[1]);
					ASSET_VECTOR_PUSHBACK_STRING(vecTemp,MapIter->second[2]);
					vecTemp.push_back("");
					ASSET_VECTOR_PUSHBACK_STRING(vecTemp,MapIter->second[3]);
					mAssetInfo.insert(make_pair(MapIter->second[1],vecTemp));
					continue;
				}

				// 网络设备
				if (strClass == "Net" ||strClass.find("Network") != -1)
				{
					if (-1 == strDevID.find("PCI"))
						continue;

					ASSET_INFO_VEC vecTemp;
					ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,ASSET_NET);
					ASSET_VECTOR_PUSHBACK_STRING(vecTemp,MapIter->second[1]);
					ASSET_VECTOR_PUSHBACK_STRING(vecTemp,MapIter->second[2]);
					ASSET_VECTOR_PUSHBACK_STRING(vecTemp,MapIter->second[3]);
					vecTemp.push_back("");
					vecTemp.push_back("");
					vecTemp.push_back("");
					vecTemp.push_back("");
					mAssetInfo.insert(make_pair(MapIter->second[1],vecTemp));
					continue;
				}
				//显卡
				if (strClass == "Display" || strClass.find("Display") != -1)
				{
					ASSET_INFO_VEC vecTemp;
					ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,ASSET_VIDEO);
					ASSET_VECTOR_PUSHBACK_STRING(vecTemp,MapIter->second[1]);
					ASSET_VECTOR_PUSHBACK_STRING(vecTemp,MapIter->second[2]);
					vecTemp.push_back("");
					vecTemp.push_back("");
					vecTemp.push_back("");
					ASSET_VECTOR_PUSHBACK_STRING(vecTemp,MapIter->second[3]);
					vecTemp.push_back("");
					vecTemp.push_back("");
					vecTemp.push_back("");
					mAssetInfo.insert(make_pair(MapIter->second[1],vecTemp));
					continue;
				}
				// 声卡
				if (strClass == "MEDIA" ||strClass.find("Sound") != -1)
				{	
					if ( (-1 != strDevID.find("ROOT")) || (-1 == strDevID.find("HDAUDIO")) )
						continue;

					iType = ASSET_SOUND;
					goto INSERT_DATA;

				}
				// 蓝牙设备
				if (strClass == "BTW" || strClass.find("Bluetooth") != -1 )
				{
					iType = ASSET_BLUE_TOOTH;
					goto INSERT_DATA;
				}

				// 摄像头
				if (strClass == "Image" || strClass.find("Image") != -1 )
				{
					iType = ASSET_CAMERA;
					goto INSERT_DATA;
				}

				//调制解调器
				if (strClass == "Modem")
				{
					if (-1 == strDevID.find("HDAUDIO"))
						continue;
					iType = ASSET_MODEM;
					goto INSERT_DATA;
				}
				// 1394
				if (strClass == "1394" || strClass.find("1394") != -1 )
				{
					iType = ASSET_1394;
					goto INSERT_DATA;
				}

				// USB
				if (strClass == "USB" || strClass.find("USB") != -1 )
				{
					iType = ASSET_USB;
					goto INSERT_DATA;
				}

				// Port
				if (strClass == "Ports"  || strClass.find("Ports") != -1 )
				{
					iType = ASSET_PORT;
					goto INSERT_DATA;
				}

				//软盘控制器,
				if (strClass == "fdc" || strClass.find("fdc") != -1 )
				{
					iType = ASSET_FDC;
					goto INSERT_DATA;
				}
				//软盘驱动器,
				if (strClass == "floppydisk" || strClass.find("floppydisk") != -1 )
				{
					iType = ASSET_FLOPPYDISK;
					goto INSERT_DATA;
				}
				//红外线设备,
				if (strClass == "infrared" || strClass.find("infrared") != -1 )
				{
					iType = ASSET_INFRARED;
					goto INSERT_DATA;
				}
				//PCMCIA 卡,
				if (strClass == "PCMCIA" || strClass.find("PCMCIA") != -1 )
				{
					iType = ASSET_PCMCIA;
					goto INSERT_DATA;
				}
				//多功能卡,
				if (strClass == "Multifunction" || strClass.find("Multifunction") != -1 )
				{
					iType = ASSET_MULTIFUNCTION;
					goto INSERT_DATA;
				}
				//多串口卡,
				if (strClass == "MultiPortSerial" || strClass.find("MultiPortSerial") != -1 )
				{
					iType = ASSET_MULTIPORTSERIAL;
					goto INSERT_DATA;
				}
				//IEEE 1394 和 SCSI 打印机,
				if (strClass == "PNPPrinters" || strClass.find("PNPPrinters") != -1 )
				{
					iType = ASSET_PNPPRINTERS;
					goto INSERT_DATA;
				}
				//SCSI 和 RAID 控制器,
				if (strClass ==  "SCSIAdapter" || strClass.find("SCSIAdapter") != -1 )
				{
					iType = ASSET_SCSIADAPTER;
					goto INSERT_DATA;
				}
				//磁带驱动器,
				if (strClass == "TapeDrive" || strClass.find("TapeDrive") != -1 )
				{
					iType = ASSET_TAPEDRIVER;
					goto INSERT_DATA;
				}
				//IEEE 1284.4 设备,
				if (strClass == "Dot4" || strClass.find("Dot4") != -1 )
				{
					iType = ASSET_DOT4;
					goto INSERT_DATA;
				}
				//IEEE 1284.4 兼容打印机,
				if (strClass == "Dot4Print" || strClass.find("Dot4Print") != -1 )
				{
					iType = ASSET_DOT4PRINT;
					goto INSERT_DATA;
				}
				//Windows CE USB 设备,
				if (strClass == "WCEUSBS" || strClass.find("WCEUSBS") != -1 )
				{
					iType = ASSET_WCEUSBS;
					goto INSERT_DATA;
				}
				//IDE ATA/ATAPI 控制器
				if (strClass == "hdc" || strClass.find("hdc") != -1 )
				{
					iType = ASSET_HDC;
					goto INSERT_DATA;
				}
				//Memory technology driver
				if (strClass == "MTD" || strClass.find("MTD") != -1 )
				{
					iType = ASSET_MTD;
					goto INSERT_DATA;
				}
				//网络客户
				if (strClass == "NetClient" || strClass.find("NetClient") != -1 )
				{
					iType = ASSET_NETCLIENT;
					goto INSERT_DATA;
				}
				//网络服务
				if (strClass == "NetService" || strClass.find("NetService") != -1 )
				{
					iType = ASSET_NETSERVICE;
					goto INSERT_DATA;
				}
				//网络协议
				if (strClass == "NetTrans" || strClass.find("NetTrans") != -1 )
				{
					iType = ASSET_NETTRANS;
					goto INSERT_DATA;
				}
				//SMART CARD READERS
				if (strClass == "SmartCardReader" || strClass.find("SmartCardReader") != -1 )
				{
					iType = ASSET_SMARTCARDREADER;
					goto INSERT_DATA;
				}
				//存储卷影复制
				if (strClass == "VolumeSnapshot" || strClass.find("VolumeSnapshot") != -1 )
				{
					iType = ASSET_VOLUMESNAPSHOT;
					goto INSERT_DATA;
				}
				//1394 DEBUGGER DEVICE"
				if (strClass == "1394Debug" || strClass.find("1394Debug") != -1 )
				{
					iType = ASSET_1394DEBUG;
					goto INSERT_DATA;
				}
				//存储卷
				if (strClass == "Volume" || strClass.find("Volume") != -1 )
				{
					iType = ASSET_VOLUME;
					goto INSERT_DATA;
				}
				//人体学输入设备" 
				if (strClass == "HIDClass" || strClass.find("HIDClass") != -1 )
				{
					iType = ASSET_HIDCLASS;
					goto INSERT_DATA;
				}
				//61883 设备类"   
				if (strClass == "61883" || strClass.find("61883") != -1 )
				{
					iType = ASSET_61883;
					goto INSERT_DATA;
				}
				//VMKBD"
				if (strClass == "vmkbd" || strClass.find("vmkbd") != -1 )
				{
					iType = ASSET_VMKBD;
					goto INSERT_DATA;
				}
				//"SECURE DIGITAL HOST CONTROLLERS"
				if (strClass == "SDHost" || strClass.find("SDHost") != -1 )
				{
					iType = ASSET_SDHOST;
					goto INSERT_DATA;
				}
				//AVC 设备类"    
				if (strClass == "Avc" || strClass.find("Avc") != -1 )
				{
					iType = ASSET_AVC;
					goto INSERT_DATA;
				}
				//IEEE 1394 IP 网络计数器"   
				if (strClass == "Enum1394" || strClass.find("Enum1394") != -1 )
				{
					iType = ASSET_ENUM1394;
					goto INSERT_DATA;
				}
				//介质变换器"     
				if (strClass == "MediumChanger" || strClass.find("MediumChanger") != -1 )
				{
					iType = ASSET_MEDIUMCHANGER;
					goto INSERT_DATA;
				}
				//NT APM/LEGACY 支持"   
				if (strClass == "NtApm" || strClass.find("NtApm") != -1 )
				{
					iType = ASSET_NTAPM;
					goto INSERT_DATA;
				}
				//SBP2 IEEE 1394 设备"  
				if (strClass == "SBP2" || strClass.find("SBP2") != -1 )
				{
					iType = ASSET_SBP2;
					goto INSERT_DATA;
				}
				//WINDOWS 便携设备"
				if (strClass == "WPD" || strClass.find("WPD") != -1 )
				{
					iType = ASSET_WPD;
					goto INSERT_DATA;
				}

INSERT_DATA:
				if (iType == 0)
					iType = ASSET_UNKNOWN;

				ASSET_INFO_VEC vecTemp;
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp, iType);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp, MapIter->second[1]);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp, MapIter->second[2]);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp, MapIter->second[3]);
				mAssetInfo.insert(make_pair(MapIter->second[1], vecTemp));
			}

			return TRUE;
		}
		BOOL CSystemAssetInfo::GetAllHardwareInfoByWMI(ASSET_INFO_MAP& mAssetInfo)
		{
			MEMORY_INFO_ST m_MemoryInfo;
			KEYBOARD_INFO_VECTOR m_KeyBoardInfo;
			MOUSE_INFO_VECTOR m_MouseInfo;
			BATTERY_INFO_ST m_BatteryInfo;
			CPU_INFO_ST m_CpuInfo;
			BIOS_INFO_ST m_BiosInfo;
			BASEBOARD_INFO_ST m_BaseboardInfo;
			SYSTEM_INFO_ST m_SystemInfo;
			DISK_INFO_VECTOR m_DiskInfo;
			LOGICALDISK_INFO_VECTOR m_LogicalDiskInfo;
			CDROM_INFO_VECTOR m_CDROMInfo;
			NETADAPTER_INFO_VECTOR m_NetAdapterInfo;
			VIDEO_INFO_VECTOR m_VideoInfo;
			SOUND_INFO_VECTOR m_SoundInfo;
			MONITOR_INFO_VECTOR m_MonitorInfo;
			PRINTER_INFO_VECTOR m_PrintInfo;
			SOFTWARE_INFO_VECTOR m_SoftwareInfo;
			MODEM_INFO_VECTOR m_ModemInfo;
			ASSET_1394_INFO_VECTOR m_1394Info;
			USB_INFO_VECTOR m_USBInfo;
			PORT_INFO_VECTOR m_PortInfo;
			ASSET_INFO_VEC vecTemp;

			GetCPUInfo(m_CpuInfo);
			GetBIOSInfo(m_BiosInfo);
			GetBaseBoardInfo(m_BaseboardInfo);
			GetSystemInfo(m_SystemInfo);
			GetMemoryInfo(m_MemoryInfo);
			GetDiskInfo(m_DiskInfo);
			GetLogicalDiskInfo(m_LogicalDiskInfo);
			GetCDROMInfo(m_CDROMInfo);
			GetNetAdapterInfo(m_NetAdapterInfo);
			GetVideoInfo(m_VideoInfo);
			GetSoundInfo(m_SoundInfo);
			GetKeyBoardInfo(m_KeyBoardInfo);
			GetMouseInfo(m_MouseInfo); 
			GetMonitorInfo(m_MonitorInfo);
			GetPrinterInfo(m_PrintInfo);
			GetBatteryInfo(m_BatteryInfo);
			GetModemInfo(m_ModemInfo);

			// CPU,
			vecTemp.clear();
			ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp, ASSET_CPU);
			ASSET_VECTOR_PUSHBACK_STRING(vecTemp, m_CpuInfo.strVersion);
			ASSET_VECTOR_PUSHBACK_STRING(vecTemp, m_CpuInfo.strType);
			ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp, m_CpuInfo.wMaxSpeed);
			ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp, m_CpuInfo.wCurrentSpeed);
			ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp, m_CpuInfo.wExternalClock);
			ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp, m_CpuInfo.wL1CacheSize);
			ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp, m_CpuInfo.wL2CacheSize);
			ASSET_VECTOR_PUSHBACK_STRING(vecTemp, m_CpuInfo.strManufacturer);
			ASSET_VECTOR_PUSHBACK_STRING(vecTemp, m_CpuInfo.strSocket);
			ASSET_VECTOR_PUSHBACK_DOUBLE_TO_STRING(vecTemp, m_CpuInfo.dVoltage);
			mAssetInfo.insert(make_pair(m_CpuInfo.strVersion,vecTemp));

			// BIOS,
			vecTemp.clear();
			ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,ASSET_BIOS);
			ASSET_VECTOR_PUSHBACK_STRING(vecTemp, m_BiosInfo.strVersion);
			ASSET_VECTOR_PUSHBACK_STRING(vecTemp, m_BiosInfo.strVendor);
			ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp, m_BiosInfo.iBIOSROMSize);
			ASSET_VECTOR_PUSHBACK_STRING(vecTemp, m_BiosInfo.strReleaseData);
			ASSET_VECTOR_PUSHBACK_STRING(vecTemp, m_BiosInfo.strSMBIOS);
			mAssetInfo.insert(make_pair(m_BiosInfo.strVersion,vecTemp));

			// BASEBOARD
			vecTemp.clear();
			ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,ASSET_BASEBOARD);
			ASSET_VECTOR_PUSHBACK_STRING(vecTemp, m_BaseboardInfo.strSerialNumber);
			ASSET_VECTOR_PUSHBACK_STRING(vecTemp, m_BaseboardInfo.strProducName);
			ASSET_VECTOR_PUSHBACK_STRING(vecTemp, m_BaseboardInfo.strType);
			ASSET_VECTOR_PUSHBACK_STRING(vecTemp, m_BaseboardInfo.strManufacturer);
			ASSET_VECTOR_PUSHBACK_STRING(vecTemp, m_BaseboardInfo.strVersion);
			mAssetInfo.insert(make_pair(m_BaseboardInfo.strSerialNumber,vecTemp));

			// SYSTEM,
			if ( m_SystemInfo.strProductName.length())
			{
				vecTemp.clear();
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,ASSET_SYSTEM);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp, m_SystemInfo.strUUID);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp, m_SystemInfo.strProductName);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp, m_SystemInfo.strVersion);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp, m_SystemInfo.strManufacturer);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp, m_SystemInfo.strSerialNumber);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp, m_SystemInfo.strWakeUpType);
				mAssetInfo.insert(make_pair(m_SystemInfo.strUUID,vecTemp));
			}

			// MEMORY
			if (m_MemoryInfo.iTotalVisibleMemorySize != 0)
			{
				vecTemp.clear();
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,ASSET_MEMORY);
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,m_MemoryInfo.iTotalVisibleMemorySize);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp, m_MemoryInfo.strMemorySlotInfo);
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,m_MemoryInfo.iFreePhysicalMemory);
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,m_MemoryInfo.iTotalVirtualMemorySize);
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,m_MemoryInfo.iFreeVirtualMemory);
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,m_MemoryInfo.iFreeSpaceInPagingFiles);
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,m_MemoryInfo.iSlotNumber);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,m_MemoryInfo.strMemoryFac);
				mAssetInfo.insert(make_pair(vecTemp[1],vecTemp));
			}

			// DISK,

			DWORD i = 0;
			for (i = 0; i < m_DiskInfo.size(); i++)
			{
				vecTemp.clear();
				DISK_INFO_ST& tempDisk = m_DiskInfo[i];
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,ASSET_DISK);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempDisk.strPNPDeviceID);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempDisk.strCaption);
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,tempDisk.iSize);
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,tempDisk.iBytesPerSector);
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,tempDisk.iIndex);
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,tempDisk.iSectorsPerTrack);
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,tempDisk.iTotalHeads);
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,tempDisk.iTrackPerCylinder);
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,tempDisk.iTotalCylinders);
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,tempDisk.iTotalSectors);
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,tempDisk.iTotalTracks);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempDisk.strManufacturer);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempDisk.strDeviceID);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempDisk.strSerialNumber);
				mAssetInfo.insert(make_pair(tempDisk.strPNPDeviceID,vecTemp));
			}

			// LOGICDISK,
			LOGICALDISK_INFO_ST tempLogicDisk;
			for (i = 0; i < m_LogicalDiskInfo.size(); i++)
			{
				vecTemp.clear();
				tempLogicDisk = m_LogicalDiskInfo[i];
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,ASSET_LOGICDISK);
				if (tempLogicDisk.strVolumeSerialNumber == "")
					tempLogicDisk.strVolumeSerialNumber = tempLogicDisk.strCaption;
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempLogicDisk.strVolumeSerialNumber);

				if (tempLogicDisk.strVolumeName == "")
					tempLogicDisk.strVolumeName = tempLogicDisk.strCaption;
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempLogicDisk.strVolumeName);
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,tempLogicDisk.iSize);
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,tempLogicDisk.iFreeSpace);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempLogicDisk.strCaption);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempLogicDisk.strDescription);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempLogicDisk.strFileSystem);
				mAssetInfo.insert(make_pair(tempLogicDisk.strVolumeSerialNumber,vecTemp));
			}
			// CDROM,
			CDROM_INFO_ST tempCDRom;
			for (i = 0; i < m_CDROMInfo.size(); i++)
			{
				vecTemp.clear();
				tempCDRom = m_CDROMInfo[i];
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,ASSET_CDROM);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempCDRom.strPNPDeviceID);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempCDRom.strDrive);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempCDRom.strCaption);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempCDRom.strMediaType);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempCDRom.strManufacturer);
				mAssetInfo.insert(make_pair(tempCDRom.strPNPDeviceID,vecTemp));
			}

			// NET,
			NETADAPTER_INFO_ST tempNet;
			for (i = 0; i < m_NetAdapterInfo.size(); i++)
			{
				vecTemp.clear();
				tempNet = m_NetAdapterInfo[i];
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,ASSET_NET);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempNet.strPNPDeviceID);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempNet.strName);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempNet.strManufacturer);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempNet.strAdapterType);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempNet.strMACAddress);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempNet.strNetConnectionID);
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,tempNet.iSpeed);
				mAssetInfo.insert(make_pair(tempNet.strPNPDeviceID,vecTemp));
			}

			// VIDEO,
			VIDEO_INFO_ST tempVideo;
			for (i = 0; i < m_VideoInfo.size(); i++)
			{
				vecTemp.clear();
				tempVideo = m_VideoInfo[i];
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,ASSET_VIDEO);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempVideo.strPNPDeviceID);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempVideo.strCaption);
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,tempVideo.iAdapterRAM);
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,tempVideo.iCurrentBitsPerPixel);
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,tempVideo.iCurrentRefreshRate);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempVideo.strManufacturer);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempVideo.strDriverVersion);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempVideo.strAdapterDACType);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempVideo.strVideoModeDescription);
				mAssetInfo.insert(make_pair(tempVideo.strPNPDeviceID,vecTemp));
			}
			// SOUND,
			SOUND_INFO_ST tempSound;
			for (i = 0; i < m_SoundInfo.size(); i++)
			{
				vecTemp.clear();
				tempSound = m_SoundInfo[i];
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,ASSET_SOUND);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempSound.strDeviceID);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempSound.strCaption);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempSound.strManufacturer);
				mAssetInfo.insert(make_pair(tempSound.strDeviceID,vecTemp));
			}
			// KEYBOARD,
			KEYBOARD_INFO_ST tempKeyBoard;
			for (i = 0; i < m_KeyBoardInfo.size(); i++)
			{
				vecTemp.clear();
				tempKeyBoard = m_KeyBoardInfo[i];
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,ASSET_KEYBOARD);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempKeyBoard.strDeviceID);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempKeyBoard.strDescription);
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,tempKeyBoard.iNumberOfFunctionKeys);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempKeyBoard.strManufacturer);
				mAssetInfo.insert(make_pair(tempKeyBoard.strDeviceID,vecTemp));
			}
			// MOUSE,
			MOUSE_INFO_ST tempMouse;
			for (i = 0; i < m_MouseInfo.size(); i++)
			{
				vecTemp.clear();
				tempMouse = m_MouseInfo[i];
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,ASSET_MOUSE);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempMouse.strDeviceID);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempMouse.strCaption);
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,tempMouse.cNumberOfButtons);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempMouse.strManufacturer);
				mAssetInfo.insert(make_pair(tempMouse.strDeviceID,vecTemp));
			}
			// MONITOR,
			MONITOR_INFO_ST tempMonitor;
			for (i = 0; i < m_MonitorInfo.size(); i++)
			{
				vecTemp.clear();
				tempMonitor = m_MonitorInfo[i];
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,ASSET_MONITOR);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempMonitor.strDeviceID);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempMonitor.strCaption);
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,tempMonitor.iPixelsPerXLogicalInch);
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,tempMonitor.iPixelsPerYLogicalInch);
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,tempMonitor.iScreenHeight);
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,tempMonitor.iScreenWidth);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempMonitor.strMonitorManufacturer);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempMonitor.strMonitorType);
				mAssetInfo.insert(make_pair(tempMonitor.strDeviceID,vecTemp));
			}
			// PRINTER,
			PRINTER_INFO_ST tempPrinter;
			for (i = 0; i < m_PrintInfo.size(); i++)
			{
				vecTemp.clear();
				tempPrinter = m_PrintInfo[i];
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,ASSET_PRINTER);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempPrinter.strDeviceID);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempPrinter.strCaption);
				mAssetInfo.insert(make_pair(tempPrinter.strDeviceID,vecTemp));
			}
			// BATTERY,
			if ( m_BatteryInfo.strDeviceID.length())
			{
				vecTemp.clear();
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,ASSET_BATTERY);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,m_BatteryInfo.strDeviceID);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,m_BatteryInfo.strName);  
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,m_BatteryInfo.iEstimatedChargeRemaining);
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,m_BatteryInfo.iEstimatedRunTime);        
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,m_BatteryInfo.strCaption);
				ASSET_VECTOR_PUSHBACK_DOUBLE_TO_STRING(vecTemp,m_BatteryInfo.dDesignVoltage);
				mAssetInfo.insert(make_pair(m_BatteryInfo.strDeviceID,vecTemp));
			}

			// MODEM  
			for (i = 0; i < m_ModemInfo.size(); i++)
			{
				vecTemp.clear();
				MODEM_INFO_ST tempModem;
				tempModem = m_ModemInfo[i];
				ASSET_VECTOR_PUSHBACK_INT_TO_STRING(vecTemp,ASSET_MODEM);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempModem.strDeviceID);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempModem.strCaption);
				ASSET_VECTOR_PUSHBACK_STRING(vecTemp,tempModem.strProviderName);
				mAssetInfo.insert(make_pair(tempModem.strDeviceID,vecTemp));
			}

			return TRUE;
		}

		BOOL CSystemAssetInfo::GetALLHardwareInfoBySetUp(ASSET_INFO_MAP& mAssetInfo)
		{
			// Create a HDEVINFO with all present devices.
			HDEVINFO m_hDevInfo;
			m_hDevInfo = SetupDiGetClassDevs( NULL, 0, 0, DIGCF_PRESENT | DIGCF_ALLCLASSES );	
			if (INVALID_HANDLE_VALUE == m_hDevInfo)
				return FALSE;

			string strTemp;
			vector<string> vecDriverInfo;	// string vector 4(for) device driver info

			ASSET_INFO_VEC tempVec;
			SP_DEVINFO_DATA m_DeviceInfoData;
			m_DeviceInfoData.cbSize = sizeof(SP_DEVINFO_DATA);

			for (DWORD i = 0; SetupDiEnumDeviceInfo(m_hDevInfo,i, &m_DeviceInfoData); i++)
			{
				tempVec.clear();
				strTemp = "";
				// 得到类名称。
				if( !GetDevSingleProperty(m_hDevInfo,m_DeviceInfoData,SPDRP_CLASS,strTemp) )
					continue;

				// skip "System", "LegacyDriver", "Processor"
				if ((strTemp == "System") || (strTemp == "系统设备") || (strTemp == "LegacyDriver") ||
					(strTemp == "非即插即用驱动程序") || (strTemp == "Processor") || (strTemp == "处理器"))
					continue;
				else
				{
					string strEnumName;
					if(GetDevSingleProperty(m_hDevInfo,m_DeviceInfoData, SPDRP_ENUMERATOR_NAME, strEnumName))
					{
						if(strEnumName == "ROOT")
							continue;
					}
					else
						continue;

					//检查是否设备管理器中需要隐藏的设备
					DWORD dwStatus = 0, dwProblem = 0;
					if(CR_SUCCESS != CM_Get_DevNode_Status(&dwStatus, &dwProblem, m_DeviceInfoData.DevInst,0))
						continue;
					else
					{
						if(dwStatus & DN_NO_SHOW_IN_DM)
							continue;
					}
				}
				// 类名

				tempVec.push_back(strTemp);	

				// 设备ID
				string strID;
				if ( !GetDevInstanceID(m_hDevInfo,m_DeviceInfoData, strID))
					continue;

				tempVec.push_back(strID);	

				// 获取描述信息
				GetDevSingleProperty(m_hDevInfo,m_DeviceInfoData, SPDRP_DEVICEDESC,strTemp);

				tempVec.push_back(strTemp);	

				// 设备管理器->常规->制造商
				GetDevSingleProperty(m_hDevInfo,m_DeviceInfoData, SPDRP_MFG,strTemp);

				tempVec.push_back(strTemp);

				// 保存该设备
				mAssetInfo.insert(make_pair(strID,tempVec));
			}

			SetupDiDestroyDeviceInfoList(m_hDevInfo);
			m_hDevInfo = NULL;

			return TRUE;
		}

		BOOL CSystemAssetInfo::GetDevInstanceID(HDEVINFO hDevInfo, SP_DEVINFO_DATA DeviceInfoData, string & strResult)
		{
			BOOL bRet = TRUE;
			DWORD buffersize = 512;
			char* buffer = new char[buffersize];

			while (!SetupDiGetDeviceInstanceId( hDevInfo, &DeviceInfoData, buffer, buffersize, &buffersize) )
			{		 
				if (ERROR_INSUFFICIENT_BUFFER == GetLastError())
				{
					// 需要更大的空间
					if (buffer) 
					{
						delete [] buffer;
						buffer = NULL;
					}

					buffer =  new char[buffersize];
					if (buffer == NULL)
						bRet = FALSE;
				}
				else
				{
					bRet = FALSE;
					break;	
				}          
			}

			if (buffer)
			{
				if (bRet)
					strResult = buffer;
				else
					strResult = "Unknown";
				delete[] buffer;
				buffer = NULL;
			}

			return bRet;	
		}

		BOOL CSystemAssetInfo::GetDevSingleProperty(HDEVINFO hDevInfo, SP_DEVINFO_DATA DeviceInfoData, 
			DWORD dwProperty, string & strResult)
		{
			BOOL bRet = TRUE;
			DWORD buffersize = 512;
			BYTE* buffer = new BYTE[buffersize];

			while( !SetupDiGetDeviceRegistryProperty( hDevInfo, &DeviceInfoData, dwProperty, NULL, buffer,
				buffersize, &buffersize) )
			{
				if (ERROR_INSUFFICIENT_BUFFER == GetLastError())
				{ 
					// 需要更大的空间
					if (buffer) 
					{
						delete [] buffer;
						buffer = NULL;
					}

					buffer = new BYTE[buffersize];
					if (buffer == NULL)
						bRet = FALSE;
				}
				else
				{
					bRet = FALSE;
					break;			
				}          
			}   

			if (buffer)
			{
				if (bRet)
				{
					strResult = (char*)buffer;
				}
				delete[] buffer;
				buffer = NULL;
			}

			return bRet;
		}










	}
}
