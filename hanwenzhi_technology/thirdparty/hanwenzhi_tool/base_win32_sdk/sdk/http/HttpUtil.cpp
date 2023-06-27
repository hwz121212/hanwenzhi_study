#include "stdafx.h"
#include "HttpUtil.h"

namespace sdk
{

	static size_t write_data(void *ptr, size_t size, size_t nmemb, void *stream)
	{
		size_t written = fwrite(ptr, size, nmemb, (FILE *)stream);
		return written;
	}

	bool CHttpUtil::HttpDownloadFile_curl(const char* szAddress, const char* szLocalFileFullPath)
	{
		bool bReturn = false;

		CURL *curl_handle;	
		FILE *pagefile;
		curl_global_init(CURL_GLOBAL_ALL);

		/* init the curl session */
		curl_handle = curl_easy_init();

		/* set URL to get here */
		curl_easy_setopt(curl_handle, CURLOPT_URL, szAddress);

		/* Switch on full protocol/debug output while testing */
		curl_easy_setopt(curl_handle, CURLOPT_VERBOSE, 1L);

		/* disable progress meter, set to 0L to enable and disable debug output */
		curl_easy_setopt(curl_handle, CURLOPT_NOPROGRESS, 1L);

		/* send all data to this function  */
		curl_easy_setopt(curl_handle, CURLOPT_WRITEFUNCTION, write_data);

		/* open the file */
		pagefile = fopen(szLocalFileFullPath, "wb");
		if (pagefile) 
		{

			/* write the page body to this file handle */
			curl_easy_setopt(curl_handle, CURLOPT_WRITEDATA, pagefile);

			/* get it! */
			bReturn = (CURLE_OK == curl_easy_perform(curl_handle));

			/* close the header file */
			fclose(pagefile);
		}

		/* cleanup curl stuff */
		curl_easy_cleanup(curl_handle);

		return bReturn;
	}
	
	CString CHttpUtil::HttpReadFile(const CString& sUrl)
	{
		CString data;
		// 打开http链接
		HINTERNET hConnect = InternetOpen(NULL, INTERNET_OPEN_TYPE_DIRECT, NULL, NULL, 0); 

		if (hConnect)
		{
			DWORD dwTimeOut = 0;
			InternetSetOption(hConnect, INTERNET_OPTION_CONNECT_TIMEOUT, &dwTimeOut, sizeof(dwTimeOut));

			HINTERNET hSession = InternetOpenUrl(hConnect, sUrl, NULL, 0, INTERNET_FLAG_TRANSFER_BINARY | INTERNET_FLAG_PRAGMA_NOCACHE, 0);
			if (hSession)
			{
				// 建立数据缓冲区
				DWORD dwRead = 0;
				DWORD dwBuffer = 1024 * 1024;
				char *szBuffer = new char[dwBuffer];
				memset(szBuffer, 0, dwBuffer);

				if(InternetReadFile(hSession, szBuffer, dwBuffer, &dwRead) && (dwRead > 0))
				{
					int nLen = dwRead;
					char* pBuffer = new char[nLen + 1];
					memset(pBuffer, 0, nLen + 1);
					memcpy(pBuffer, szBuffer, nLen);
					if(pBuffer != NULL)
					{
						data = pBuffer;
					}
				}

				// 销毁数据缓冲区
				delete []szBuffer;
				szBuffer = NULL;

				InternetCloseHandle(hSession);
			}
			InternetCloseHandle(hConnect);
		}

		return data;
	}


	string CHttpUtil::WebReadFile(const CString& sUrl)
	{
		string data;
		// 打开http链接
		HINTERNET hConnect = InternetOpen(NULL, INTERNET_OPEN_TYPE_DIRECT, NULL, NULL, 0); 

		if (hConnect)
		{
			DWORD dwTimeOut = 0;
			InternetSetOption(hConnect, INTERNET_OPTION_CONNECT_TIMEOUT, &dwTimeOut, sizeof(dwTimeOut));

			HINTERNET hSession = InternetOpenUrl(hConnect, sUrl, NULL, 0, INTERNET_FLAG_TRANSFER_BINARY | INTERNET_FLAG_PRAGMA_NOCACHE, 0);
			if (hSession)
			{
				// 建立数据缓冲区
				DWORD dwRead = 0;
				DWORD dwBuffer = 1024 * 1024;
				char *szBuffer = new char[dwBuffer];
				memset(szBuffer, 0, dwBuffer);

				if(InternetReadFile(hSession, szBuffer, dwBuffer, &dwRead) && (dwRead > 0))
				{
					int nLen = dwRead;
					char* pBuffer = new char[nLen + 1];
					memset(pBuffer, 0, nLen + 1);
					memcpy(pBuffer, szBuffer, nLen);
					if(pBuffer != NULL)
					{
						data = pBuffer;
					}
				}

				// 销毁数据缓冲区
				delete []szBuffer;
				szBuffer = NULL;

				InternetCloseHandle(hSession);
			}
			InternetCloseHandle(hConnect);
		}

		return data;
	}



	bool CHttpUtil::DownloadToFileFromUrl(const CString& strUrl, const CString& strFile)
	{
		HRESULT hr = URLDownloadToFile(0, strUrl, strFile, 0,NULL);
		if (hr== S_OK)
		{
			return true;
		}
		return false;
	}


}
