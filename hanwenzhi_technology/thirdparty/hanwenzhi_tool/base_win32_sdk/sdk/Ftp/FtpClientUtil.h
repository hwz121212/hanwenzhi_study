#ifndef _H_FTPCLIENTUTIL_7F5BDC53_FA2D_4F78_AD29_2941141889D3
#define _H_FTPCLIENTUTIL_7F5BDC53_FA2D_4F78_AD29_2941141889D3


namespace sdk
{

	class AFX_EXT_CLASS IFtpResult
	{
	public:
		virtual void FtpUploadDirRes(bool bRes) = 0;
		virtual void FtpUploadFileRes(const CString& strFileName, bool bRes) = 0;

	};


	class AFX_EXT_CLASS CFtpClientUtil  
	{
	public:
		//S:\\updatelog.dat
		//ftp://192.168.1.11/updatelog.dat
		//upload:upload
		static bool FTPUploadFile(const char* pchLocalFile, const char* pchUrl, const char* pchUsernamePwd, char* pchErr);
		
		
		
		
		//192.168.1.11
		//upload
		//upload
		//21
		//E:\svnFromServer\NewsEditor\Bin\Debug
		//Debug
		static bool FTPUploadDir(	const CString& strFtpURL, 
									const CString& strUserName, 
									const CString& strPwd, 
									unsigned short port, 
									const CString& strLocalDirctory, 
									const CString& strRomteDirectory,
									IFtpResult* pRes);


		static BOOL FTPDownloadFile(const CString& strUrl, const CString& strUser, const CString& strPwd, const CString& strTargetPath);

	};


}

#endif
