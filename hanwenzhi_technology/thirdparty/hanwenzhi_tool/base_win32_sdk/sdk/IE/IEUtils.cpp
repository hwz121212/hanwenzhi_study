
#include "stdafx.h"
#include <Windows.h>
#include "IEUtils.h"
#include <WinInet.h>
#include <ShlObj.h>

using namespace sdk;


BYTE g_btSecurityLevel[3];

void CIEUtils::DeleteIECacheFiles()
{
	TCHAR szPath[MAX_PATH] = { 0 };
	if (!SHGetSpecialFolderPath(NULL, szPath, CSIDL_INTERNET_CACHE, FALSE)) return ;
	return sdk::CFileUtil::ClearDirectory(szPath);
}

void CIEUtils::ClearIECache(int type)//0-clear all,1-clear cache,2-clear cookie 
{ 
	LPINTERNET_CACHE_ENTRY_INFO lpCacheEntry=NULL; 
	BOOL bDone=FALSE; 
	DWORD dwTrySize,dwEntrySize=4096;
	HANDLE hCacheDir=NULL; 
	DWORD dwError=ERROR_INSUFFICIENT_BUFFER; 
	BOOL bSuccess; 

	do 
	{ 
		switch(dwError) 
		{ 
		case ERROR_INSUFFICIENT_BUFFER: 
			delete [] lpCacheEntry; 
			lpCacheEntry=(LPINTERNET_CACHE_ENTRY_INFO) new char[dwEntrySize]; 
			lpCacheEntry->dwStructSize=dwEntrySize; 
			dwTrySize=dwEntrySize; 
			if(hCacheDir==NULL) 
				bSuccess=(hCacheDir=FindFirstUrlCacheEntry(NULL,lpCacheEntry,&dwTrySize))!=NULL; 
			else 
				bSuccess=FindNextUrlCacheEntry(hCacheDir,lpCacheEntry,&dwTrySize); 

			if(bSuccess) 
				dwError=ERROR_SUCCESS; 
			else 
			{ 
				dwError=GetLastError(); 
				dwEntrySize=dwTrySize;
			} 
			break; 
		case ERROR_NO_MORE_ITEMS: 
			bDone=TRUE; 
			break; 
		case ERROR_SUCCESS: 
			if(type==0)
			{
				DeleteUrlCacheEntry(lpCacheEntry-> lpszSourceUrlName); 
			}
			else
			{
				if(lpCacheEntry->CacheEntryType&COOKIE_CACHE_ENTRY)
				{
					if(type==2)
						DeleteUrlCacheEntry(lpCacheEntry-> lpszSourceUrlName); 
				}
				else
				{
					if(type==1)
						DeleteUrlCacheEntry(lpCacheEntry-> lpszSourceUrlName);
				}
			}
			dwTrySize   =   dwEntrySize; 
			if (FindNextUrlCacheEntry(hCacheDir,lpCacheEntry,&dwTrySize)) 
				dwError=ERROR_SUCCESS; 
			else 
			{ 
				dwError=GetLastError(); 
				dwEntrySize=dwTrySize;
			} 
			break; 
		default: 
			bDone   =   TRUE; 
			break; 
		}; 
		if(bDone) 
		{ 
			delete [] lpCacheEntry; 
			if(hCacheDir) 
				FindCloseUrlCache(hCacheDir); 
			return; 
		} 
	}while(TRUE); 
} 


BOOL CIEUtils::SetIELowSecurity()   
{   
	IInternetSecurityManager* m_pSecurityMgr;   
	IInternetZoneManager* m_pZoneMgr;   
	HRESULT hr;
	CoInitialize(NULL);
	hr=CoCreateInstance(
		CLSID_InternetSecurityManager,
		NULL,
		CLSCTX_INPROC_SERVER,   
		IID_IInternetSecurityManager,
		(void**)&m_pSecurityMgr);

	if(hr!=S_OK||m_pSecurityMgr==NULL) return FALSE;
	
	hr=CoCreateInstance(CLSID_InternetZoneManager,
		NULL,
		CLSCTX_INPROC_SERVER,   
		IID_IInternetZoneManager,
		(void**)&m_pZoneMgr);   
	if(hr!=S_OK||m_pZoneMgr==NULL) return FALSE;   

	//Get   all   security   zone   
	DWORD dwEnumZone=0,dwZoneIndex=0,dwCurrentZone=0,dwZoneCount=0;   
	hr=m_pZoneMgr->CreateZoneEnumerator(&dwEnumZone,&dwZoneCount,0);     
	if(hr!=S_OK) return FALSE;
	/*Zone   Index:   
	0----Local   Machine   zone   
	1----Local   intranet   zone   
	2----Trusted   sites   zone   
	3----Internet   zone   
	4----Restricted   sites   zone */  
	   
	//Get   zone   of   specified   enumerated   zone   index 
	dwZoneIndex=3;
	hr=m_pZoneMgr->GetZoneAt(dwEnumZone,dwZoneIndex,&dwCurrentZone);     
	if(hr!=S_OK)   
		return FALSE;
	//Get   zone   security   policy   of   specified   zone   index 
	
	//URLACTION_ACTIVEX_OVERRIDE_OBJECT_SAFETY
	DWORD   dwPolicy; 
	hr=m_pZoneMgr->GetZoneActionPolicy(dwCurrentZone,
			URLACTION_ACTIVEX_OVERRIDE_OBJECT_SAFETY,
			(BYTE  *)&g_btSecurityLevel[0],
			sizeof(DWORD),
			URLZONEREG_DEFAULT);
	if(hr!=S_OK)   
		return FALSE;
	dwPolicy=URLPOLICY_ALLOW;
	hr=m_pZoneMgr->SetZoneActionPolicy(dwCurrentZone,   
			URLACTION_ACTIVEX_OVERRIDE_OBJECT_SAFETY,   
			(BYTE   *)&dwPolicy,   
			sizeof(DWORD),   
			URLZONEREG_DEFAULT);     
	if(hr!=S_OK)
		return FALSE;   
  
	//URLACTION_DOWNLOAD_SIGNED_ACTIVEX
	hr=m_pZoneMgr->GetZoneActionPolicy(dwCurrentZone,   
		URLACTION_DOWNLOAD_SIGNED_ACTIVEX,   
		(BYTE   *)&g_btSecurityLevel[1],   
		sizeof(DWORD),   
		URLZONEREG_DEFAULT);   
	if(hr!=S_OK)   
		return FALSE;
	dwPolicy=URLPOLICY_ALLOW;
	hr=m_pZoneMgr->SetZoneActionPolicy(dwCurrentZone,   
			URLACTION_DOWNLOAD_SIGNED_ACTIVEX,   
			(BYTE   *)&dwPolicy,   
			sizeof(DWORD),   
			URLZONEREG_DEFAULT);    
	if(hr!=S_OK)    
			return FALSE;
	//URLACTION_DOWNLOAD_UNSIGNED_ACTIVEX
	hr=m_pZoneMgr->GetZoneActionPolicy(dwCurrentZone,   
		URLACTION_DOWNLOAD_UNSIGNED_ACTIVEX,   
		(BYTE   *)&g_btSecurityLevel[2],   
		sizeof(DWORD),   
		URLZONEREG_DEFAULT); 
	if(hr!=S_OK)
		return FALSE;   
	dwPolicy=URLPOLICY_ALLOW;
	hr=m_pZoneMgr->SetZoneActionPolicy(dwCurrentZone,   
			URLACTION_DOWNLOAD_UNSIGNED_ACTIVEX,   
			(BYTE   *)&dwPolicy,   
			sizeof(DWORD),   
			URLZONEREG_DEFAULT);   
	if(hr!=S_OK)     
			return FALSE;
	
	m_pSecurityMgr->Release();
	m_pZoneMgr->Release();
	return TRUE;
}

BOOL CIEUtils::SetIEHighSecurity()   
{   
	IInternetSecurityManager* m_pSecurityMgr;   
	IInternetZoneManager* m_pZoneMgr;   
	HRESULT hr; 
	CoInitialize(NULL);
	hr=CoCreateInstance(CLSID_InternetSecurityManager,NULL,CLSCTX_INPROC_SERVER,   
		IID_IInternetSecurityManager,(void**)&m_pSecurityMgr);   
	if(hr!=S_OK||m_pSecurityMgr==NULL)
		return FALSE;    

	hr=CoCreateInstance(CLSID_InternetZoneManager,NULL,CLSCTX_INPROC_SERVER,   
		IID_IInternetZoneManager,(void**)&m_pZoneMgr);    
	if(hr!=S_OK||m_pZoneMgr==NULL)    
		return FALSE;

	//Get   all   security   zone   
	DWORD   dwEnumZone=0,dwZoneCount=0,dwZoneIndex=0,dwCurrentZone=0;   
	hr=m_pZoneMgr->CreateZoneEnumerator(&dwEnumZone,&dwZoneCount,0);   
	if   (hr!=S_OK)   
		return FALSE;
	/*Zone   Index:   
	0----Local   Machine   zone   
	1----Local   intranet   zone   
	2----Trusted   sites   zone   
	3----Internet   zone   
	4----Restricted   sites   zone   */	   
	//Get   zone   of   specified   enumerated   zone   index
	dwZoneIndex=3;
	hr=m_pZoneMgr->GetZoneAt(dwEnumZone,dwZoneIndex,&dwCurrentZone);    
	if(hr!=S_OK)   
		return FALSE;   
	//Get   zone   security   policy   of   specified   zone   index
	//URLACTION_ACTIVEX_OVERRIDE_OBJECT_SAFETY
	DWORD dwPolicy;
	//dwPolicy=URLPOLICY_QUERY;
	dwPolicy=g_btSecurityLevel[0];
	hr=m_pZoneMgr->SetZoneActionPolicy(dwCurrentZone,   
			URLACTION_ACTIVEX_OVERRIDE_OBJECT_SAFETY,   
			(BYTE   *)&dwPolicy,   
			sizeof(DWORD),   
			URLZONEREG_DEFAULT);   
	if(hr!=S_OK)   
			return FALSE;
	//URLACTION_DOWNLOAD_SIGNED_ACTIVEX
	//dwPolicy=URLPOLICY_QUERY;
	dwPolicy=g_btSecurityLevel[1];
	hr=m_pZoneMgr->SetZoneActionPolicy(dwCurrentZone,   
			URLACTION_DOWNLOAD_SIGNED_ACTIVEX,   
			(BYTE   *)&dwPolicy,   
			sizeof(DWORD),   
			URLZONEREG_DEFAULT);   
	if(hr!=S_OK)     
			return FALSE;
	//URLACTION_DOWNLOAD_UNSIGNED_ACTIVEX
	//dwPolicy=URLPOLICY_DISALLOW;
	dwPolicy=g_btSecurityLevel[2];
	hr=m_pZoneMgr->SetZoneActionPolicy(dwCurrentZone,   
			URLACTION_DOWNLOAD_UNSIGNED_ACTIVEX,   
			(BYTE   *)&dwPolicy,   
			sizeof(DWORD),   
			URLZONEREG_DEFAULT);     
	if(hr!=S_OK)    
			return FALSE;
	m_pSecurityMgr->Release();
	m_pZoneMgr->Release();
	return TRUE;
}

// Çå³ýIE»º´æ
void CIEUtils::ClearIECache()
{
	DWORD dwNeeded = 0;
	FindFirstUrlCacheEntry(_T("visited"), NULL, &dwNeeded);

	if (GetLastError() == ERROR_INSUFFICIENT_BUFFER)
	{
		unsigned char *buffer = new unsigned char[dwNeeded];
		try
		{
			LPINTERNET_CACHE_ENTRY_INFO lpicei=reinterpret_cast<LPINTERNET_CACHE_ENTRY_INFO>(buffer);
			HANDLE HFind=FindFirstUrlCacheEntry(_T("visited"),lpicei,&dwNeeded);
			DeleteUrlCacheEntry(lpicei->lpszSourceUrlName);
			bool no_more_files=false; 
			while(!no_more_files)
			{
				if(FindNextUrlCacheEntry(HFind,lpicei,&dwNeeded))
				{
					DeleteUrlCacheEntry(lpicei->lpszSourceUrlName);
				}
				else
				{
					switch(GetLastError())
					{
					case ERROR_INSUFFICIENT_BUFFER:
						{
							delete [] buffer;
							buffer=NULL;
							buffer=new unsigned char[dwNeeded];
							lpicei=reinterpret_cast <LPINTERNET_CACHE_ENTRY_INFO>(buffer);
							break;
						}
					default:
						no_more_files=true;
						break;
					}
				}
			}
			FindCloseUrlCache(HFind);
		}
		catch(...)
		{
			delete [] buffer;
			buffer=NULL;
		}
		delete [] buffer;
		buffer=NULL;
	}
}



BOOL CIEUtils::ParseUrl(const CStringA &strUrl, 
	CString &strServer, 
	CString &strObject, 
	PDWORD  pdwProtocol, 
	PUSHORT pusPort)
{
	enum _Protocol_Type
	{
		Protocol_FTP		= 1,
		Protocol_HTTP		= 3,
		Protocol_Unknown	= 0x1000,
		Protocol_HTTPS		= 0x1000 + 11,	
		Protocol_MMS,
		Protocol_RTSP,
		Protocol_RTMP,
		Protocol_RTMPT,
		Protocol_RTMPE,
	};

	int nPos = strUrl.Find("://");

	if (nPos < 1 || strUrl.Find("/") != (nPos + 1)) return FALSE;

	USHORT usDefaultPort = 0;
	if (pdwProtocol != NULL || pusPort != NULL)
	{
		CStringA strProtocol;
		strProtocol = strUrl.Left(nPos);
		if (strProtocol.CompareNoCase("http") == 0)
		{
			(pdwProtocol != NULL) ? (*pdwProtocol = Protocol_HTTP) : 0;
			usDefaultPort = 80;
		}
		else if (strProtocol.CompareNoCase("https") == 0)
		{
			(pdwProtocol != NULL) ? (*pdwProtocol = Protocol_HTTPS) : 0;
			usDefaultPort = 443;
		}
		else if (strProtocol.CompareNoCase("ftp") == 0)
		{
			(pdwProtocol != NULL) ? (*pdwProtocol = Protocol_FTP) : 0;
			usDefaultPort = 21;
		}
		else if (strProtocol.CompareNoCase("rtsp") == 0)
		{
			(pdwProtocol != NULL) ? (*pdwProtocol = Protocol_RTSP) : 0;
			usDefaultPort = 554;
		}
		else if (strProtocol.CompareNoCase("rtmp") == 0)
		{
			(pdwProtocol != NULL) ? (*pdwProtocol = Protocol_RTMP) : 0;
			usDefaultPort = 1935;
		}
		else if (strProtocol.CompareNoCase("rtmpt") == 0)
		{
			(pdwProtocol != NULL) ? (*pdwProtocol = Protocol_RTMPT) : 0;
			usDefaultPort = 80;
		}
		else if (strProtocol.CompareNoCase("rtmpe") == 0)
		{
			(pdwProtocol != NULL) ? (*pdwProtocol = Protocol_RTMPE) : 0;
			usDefaultPort = 1935;
		}
		else
		{
			*pdwProtocol = Protocol_Unknown;
		}
	}

	CStringA strServerAndPort;
	int nPos2 = strUrl.Find("/", nPos + 3);//://

	if (nPos2 == -1)
	{
		strServerAndPort = strUrl.Right(strUrl.GetLength() - nPos - 3);
		strObject = "/";
	}
	else
	{
		strServerAndPort = strUrl.Mid(nPos + 3, nPos2 - nPos - 3);
		strObject = strUrl.Right(strUrl.GetLength() - nPos2);
	}

	if ((nPos = strServerAndPort.Find(":")) != -1)
	{
		strServer = strServerAndPort.Left(nPos);
		if (pusPort != NULL)
		{
			*pusPort = atoi(strServerAndPort.Right(strServerAndPort.GetLength() - nPos - 1).GetString());
		}
	}
	else
	{
		strServer = strServerAndPort;
		if (pusPort != NULL)
		{
			*pusPort = usDefaultPort;
		}
	}

	strServer.Remove(' ');
	strObject.Remove(' ');

	return TRUE;
}

void CIEUtils::OpenUrl(const CString& strUrl)
{
	ShellExecute(NULL, "open", strUrl, NULL, NULL, SW_MAXIMIZE);     
}


void CIEUtils::CloseIE()
{
	ShellExecute(0, "open", "taskkill.exe", " /im iexplore.exe /f", 0, SW_HIDE);;
}