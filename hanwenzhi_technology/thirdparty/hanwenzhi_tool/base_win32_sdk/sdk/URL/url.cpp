#include "stdafx.h"
#include "url.h"
#include <stdio.h> 
#include <Windows.h>
#include <wininet.h> 
#pragma comment (lib,"User32.lib")
#pragma comment( lib,"Urlmon.lib")
#pragma comment( lib, "wininet.lib") 
#define MAXBLOCKSIZE 1024


namespace sdk
{
	
	CString CUrl::CrackUrl(CString sUrl)
	{
		URL_COMPONENTS uc;
		TCHAR Scheme[1000];
		TCHAR HostName[1000];
		TCHAR UserName[1000];
		TCHAR Password[1000];
		TCHAR UrlPath[1000];
		TCHAR ExtraInfo[1000];

		uc.dwStructSize = sizeof(uc);
		uc.lpszScheme = Scheme;
		uc.lpszHostName = HostName;
		uc.lpszUserName = UserName;
		uc.lpszPassword = Password;
		uc.lpszUrlPath = UrlPath;
		uc.lpszExtraInfo = ExtraInfo;

		uc.dwSchemeLength = 1000;
		uc.dwHostNameLength = 1000;
		uc.dwUserNameLength = 1000;
		uc.dwPasswordLength = 1000;
		uc.dwUrlPathLength = 1000;
		uc.dwExtraInfoLength = 1000;

		InternetCrackUrl(sUrl, 0, 0, &uc);
		return UrlPath;
	}
	
	CString CUrl::DownloadUrl(CString strUrl)
	{		
		HINTERNET hInet = InternetOpen(_T("Check Update"), INTERNET_OPEN_TYPE_PRECONFIG, NULL, NULL, NULL);
		HINTERNET hUrl = InternetOpenUrl(hInet, strUrl, NULL, (DWORD)-1L
			, INTERNET_FLAG_RELOAD | INTERNET_FLAG_PRAGMA_NOCACHE | INTERNET_FLAG_NO_CACHE_WRITE |WININET_API_FLAG_ASYNC, NULL);

		char szBuffer[1024*10] = { 0 };
		TCHAR szString[1024*10] = { 0 };
		if(hUrl)
		{
			DWORD dwRead;

			if (InternetReadFile(hUrl, szBuffer, sizeof(szBuffer), &dwRead))
			{
				if (dwRead > 0)
				{
					szBuffer[dwRead] = 0;
					/*MultiByteToWideChar(CP_ACP,0,szBuffer, strlen(szBuffer)+1, szString, sizeof(szString)/2);*/
				}
			}
		}

		InternetCloseHandle(hInet);
		return szBuffer;
	}







 
	/**-----download(const char *Url,const char *save_as)--------------------
	函数功能：将指定的Url地址的文件下载到本地
	函数参数：
			Url：文件所指向的网络地址
			save_as：文件保存到本地的路径地址
	-------------------------------------------------------------------------**/
	void CUrl::download(const char *Url,const char *save_as)/*将Url指向的地址的文件下载到save_as指向的本地文件*/  
	{  
		byte Temp[MAXBLOCKSIZE];  
		ULONG Number = 1;  
 
		FILE *stream;  
		HINTERNET hSession = InternetOpen("RookIE/1.0", INTERNET_OPEN_TYPE_PRECONFIG, NULL, NULL, 0);  
		if (hSession != NULL)  
		{  
			HINTERNET handle2 = InternetOpenUrl(hSession, Url, NULL, 0, INTERNET_FLAG_DONT_CACHE, 0);  
			if (handle2 != NULL)  
			{  
 
 
				if( (stream = fopen( save_as, "wb" )) != NULL )  
				{  
					while (Number > 0)  
					{  
						InternetReadFile(handle2, Temp, MAXBLOCKSIZE - 1, &Number);  
 
						fwrite(Temp, sizeof (char), Number , stream);  
					}  
					fclose( stream );  
				}  
 
				InternetCloseHandle(handle2);  
				handle2 = NULL;  
			}  
			InternetCloseHandle(hSession);  
			hSession = NULL;  
		}  
	} 















}
