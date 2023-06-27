#ifndef _H_HTTPUTIL_51514CC_FDCF_4FAA_AB93_BB57DC3631B3
#define _H_HTTPUTIL_51514CC_FDCF_4FAA_AB93_BB57DC3631B3


namespace sdk
{

	class AFX_EXT_CLASS CHttpUtil
	{
	public:
		static bool HttpDownloadFile_curl(const char* szAddress, const char* szLocalFileFullPath);
		static CString HttpReadFile(const CString& sUrl);
		static string WebReadFile(const CString& sUrl);
		static bool DownloadToFileFromUrl(const CString& strUrl, const CString& strFile); 
	};



}

#endif