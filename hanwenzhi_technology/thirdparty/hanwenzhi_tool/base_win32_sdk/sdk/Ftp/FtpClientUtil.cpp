#include "stdafx.h"
#include "FtpClientUtil.h"
#include <io.h>



using namespace sdk;



static size_t read_callback(void *ptr, size_t size, size_t nmemb, void *stream)
{
  curl_off_t nread;
  /* in real-world cases, this would probably get this data differently
     as this fread() stuff is exactly what the library already would do
     by default internally */
  size_t retcode = fread(ptr, size, nmemb, (FILE*)stream);

  nread = (curl_off_t)retcode;

  fprintf(stderr, "*** We read %" CURL_FORMAT_CURL_OFF_T
          " bytes from file\n", nread);
  return retcode;
}

bool CFtpClientUtil::FTPUploadFile(const char* pchLocalFile,  const char* pchUrl, const char* pchUsernamePwd, char* pchErr)
{
	bool bReturn = false;

	CURL *curl;
	CURLcode res;
	FILE *hd_src;
	struct stat file_info;
	curl_off_t fsize;

	struct curl_slist *headerlist=NULL;
	
	//char buf_1 [MAX_PATH] = "RNFR ";
	//strcat(buf_1, pchFile);
		
	//static const char buf_2 [] = "RNTO " RENAME_FILE_TO;

	/* get the file size of the local file */
	if(stat(pchLocalFile, &file_info)) 
	{
		sprintf(pchErr, "Couldnot open '%s': %s\n", pchLocalFile, strerror(errno));		
		return bReturn;
	}
	fsize = (curl_off_t)file_info.st_size;

	//printf("Local file size: %" CURL_FORMAT_CURL_OFF_T " bytes.\n", fsize);

	/* get a FILE * of the same file */
	hd_src = fopen(pchLocalFile, "rb");

	/* In windows, this will init the winsock stuff */
	curl_global_init(CURL_GLOBAL_ALL);

	/* get a curl handle */
	curl = curl_easy_init();
	if(curl)
	{
		/* build a list of commands to pass to libcurl */
		//headerlist = curl_slist_append(headerlist, buf_1);
		//headerlist = curl_slist_append(headerlist, buf_2);

		/* we want to use our own read function */
		curl_easy_setopt(curl, CURLOPT_READFUNCTION, read_callback);

		/* enable uploading */
		curl_easy_setopt(curl, CURLOPT_UPLOAD, 1L);

		curl_easy_setopt(curl,CURLOPT_USERPWD, pchUsernamePwd);

		/* specify target */
		curl_easy_setopt(curl,CURLOPT_URL, pchUrl);

		/* pass in that last of FTP commands to run after the transfer */
		curl_easy_setopt(curl, CURLOPT_POSTQUOTE, headerlist);

		/* now specify which file to upload */
		curl_easy_setopt(curl, CURLOPT_READDATA, hd_src);

		/* Set the size of the file to upload (optional).  If you give a *_LARGE
			option you MUST make sure that the type of the passed-in argument is a
			curl_off_t. If you use CURLOPT_INFILESIZE (without _LARGE) you must
			make sure that to pass in a type 'long' argument. */
		curl_easy_setopt(curl, CURLOPT_INFILESIZE_LARGE,
							(curl_off_t)fsize);

		/* Now run off and do what you've been told! */
		res = curl_easy_perform(curl);
		/* Check for errors */
		if(res != CURLE_OK)
		{
			sprintf(pchErr, "curl_easy_perform() failed: %s\n",
				curl_easy_strerror(res));
		}
		else
		{
			bReturn = true;
		}			

		/* clean up the FTP commands list */
		curl_slist_free_all (headerlist);

		/* always cleanup */
		curl_easy_cleanup(curl);
	}
	fclose(hd_src); /* close the local file */

	curl_global_cleanup();

	return bReturn;
}









// 在FTP服务器上建立要上传的文件夹相应的目录结构
BOOL FTPCreateDirectory(const CString& strLocalDir, const CString& strFTPDir, CFtpConnection* pConn)
{
	BOOL   bSuccess = TRUE;

	CString strLocalFileURL; // 文件在本地的URL
	CString strFTPFileURL;	// 文件上传后 FTP URL

	if ( NULL == pConn )
	{
		return FALSE;
	}

	CFileFind   finder;
	CString strWildcard = strLocalDir + _T("\\*.*");
	BOOL bWorking = finder.FindFile(strWildcard); 
	while (bWorking)
	{
		bWorking = finder.FindNextFile();
		if (finder.IsDots())
		{
			continue;   
		}

		if (finder.IsDirectory())   
		{			
			CString str = finder.GetFilePath();
			int nPos = str.ReverseFind('\\') + 1;
			strLocalFileURL = str.Mid(nPos);
			strFTPFileURL =  strFTPDir + "/" + strLocalFileURL;

			bSuccess = pConn->CreateDirectory(sdk::CStringUtil::GBK2Utf8(strFTPFileURL));
			if (bSuccess)
			{
				strFTPFileURL += "/";
				FTPCreateDirectory(str, strFTPFileURL, pConn); 
			}
			else
			{
				return FALSE;
			}			  
		}   
	}

	return TRUE;
}


#define IE_SESSION		"FTP_CLIENT"


//192.168.1.11
//upload
//upload
//21
//E:\svnFromServer\NewsEditor\Bin\Debug
//Debug

bool CFtpClientUtil::FTPUploadDir(	const CString& strFtpURL, 
									const CString& strUserName, 
									const CString& strPwd, 
									unsigned short  port, 
									const CString& strLocalDirctory, 
									const CString& strRomteDirectory,
									IFtpResult* pRes)
{
	CInternetSession session(IE_SESSION);
	CFtpConnection* pConn1=NULL;

	try
	{
		pConn1=session.GetFtpConnection(strFtpURL, strUserName, strPwd, port);
	}
	catch (CException* )
	{		
		return FALSE;
	}

	BOOL bUploadOK = FALSE;
	bUploadOK = FTPCreateDirectory(strLocalDirctory, strRomteDirectory, pConn1);
	pConn1->Close();
	delete pConn1;
	session.Close();
	if (!bUploadOK)
	{
		if (pRes != NULL)
		{
			pRes->FtpUploadDirRes(false);
		}	
		return FALSE;
	}

	CStringArray arr;
	sdk::CFileUtil::EnumDirectoryFiles(strLocalDirctory, "*.*", arr, TRUE);

	for (int index=0; index<arr.GetSize(); index++)
	{
		CString strUploadLocalFileTemp	= arr[index];
		
		CString strUploadUrlTemp		= strUploadLocalFileTemp;
		strUploadUrlTemp.Replace(strLocalDirctory, "");
		strUploadUrlTemp.Replace("\\", "/");		
		strUploadUrlTemp = "ftp://"+ strFtpURL + "/" + strRomteDirectory + "/" + strUploadUrlTemp;

		CString strUserPwdTemp = strUserName +  ":" + strPwd;
		char szErr[512];
		bool bOk = sdk::CFtpClientUtil::FTPUploadFile((LPCTSTR)strUploadLocalFileTemp, (LPCTSTR)strUploadUrlTemp, (LPCTSTR)strUserPwdTemp, szErr);	
		if (pRes != NULL)
		{
			pRes->FtpUploadDirRes(bOk);
		}
	}
	
	return TRUE;
}



typedef struct _DOWNLOAD_FILE_INFO_ST
{
	CString strFullPathName;
	FILE    *stream;

	_DOWNLOAD_FILE_INFO_ST()
	{
		stream = NULL;
	}
}DOWNLOAD_FILE_INFO_ST;


int WriteCallback(void *buffer, size_t size, size_t nmemb, void *stream)
{
	DOWNLOAD_FILE_INFO_ST *out = (DOWNLOAD_FILE_INFO_ST *)stream;
	DWORD dwWriteCount = 0;

	if (out && !out->stream)
	{
		out->stream = fopen(out->strFullPathName, "wb+");
		if (!out->stream)
		{
			return -1;
		}
	}

	dwWriteCount = fwrite(buffer, size, nmemb, out->stream);
	return dwWriteCount;
}

int ProgressCallback(void *clientp, double dltotal, double dlnow, double ultotal, double ulnow)
{
	return 0;
}


BOOL CFtpClientUtil::FTPDownloadFile(const CString& strUrl, const CString& strUser, const CString& strPwd, const CString& strTargetPath)
{
	BOOL bReturn = FALSE;
	CURLcode curlCode;
	CString strUTF8URL = strUrl;
	CString strUserPwd;
	CURL *pCurl = curl_easy_init();

	if (!strUser.IsEmpty() && !strPwd.IsEmpty())
	{
		strUserPwd.Format("%s:%s",strUser,strPwd);
		curlCode = curl_easy_setopt(pCurl, CURLOPT_USERPWD, strUserPwd);
	}

	DOWNLOAD_FILE_INFO_ST stDLFile;
	stDLFile.strFullPathName = strTargetPath;

	curlCode = curl_easy_setopt(pCurl, CURLOPT_URL, strUTF8URL);
	curlCode = curl_easy_setopt(pCurl, CURLOPT_WRITEFUNCTION, WriteCallback);
	curlCode = curl_easy_setopt(pCurl, CURLOPT_WRITEDATA, &stDLFile);
	curlCode = curl_easy_setopt(pCurl, CURLOPT_FTP_USE_EPSV, TRUE);
	curlCode = curl_easy_setopt(pCurl, CURLOPT_VERBOSE, TRUE);
	curlCode = curl_easy_setopt(pCurl, CURLOPT_NOPROGRESS, FALSE);
	curlCode = curl_easy_setopt(pCurl, CURLOPT_PROGRESSFUNCTION, ProgressCallback);
	curlCode = curl_easy_setopt(pCurl, CURLOPT_PROGRESSDATA, NULL);
	curlCode = curl_easy_setopt(pCurl, CURLOPT_FAILONERROR, TRUE);
	curlCode = curl_easy_perform(pCurl);

	if (CURLE_OK == curlCode)
	{
		bReturn = TRUE;
	}

	curl_easy_cleanup(pCurl);

	if (stDLFile.stream)
	{
		fclose(stDLFile.stream);
	}

	return bReturn;
}

