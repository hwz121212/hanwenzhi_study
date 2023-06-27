#pragma once

namespace sdk
{
	class AFX_EXT_CLASS CIEUtils
	{
	public:
		static void DeleteIECacheFiles();
		static void ClearIECache(int type = 0);


		static BOOL SetIELowSecurity();
		static BOOL SetIEHighSecurity();

		static void ClearIECache();


		static BOOL ParseUrl(const CStringA &strUrl, CString &strServer, CString &strObject, PDWORD  pdwProtocol, PUSHORT pusPort);

		static void OpenUrl(const CString& strUrl);

		static void CloseIE();

	};
}

