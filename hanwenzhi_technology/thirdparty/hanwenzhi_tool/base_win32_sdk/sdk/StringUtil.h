#ifndef _H_STRING_CONVERT_F5D557FA_6E20_4AF5_85C0_0925633756FC
#define _H_STRING_CONVERT_F5D557FA_6E20_4AF5_85C0_0925633756FC

namespace sdk
{
	namespace stringutil
	{
		CString Utf82GBK(const CString& sUtf8);
		CString GBK2Utf8(const CString &sGBK);

		string Utf82GBK_(const string& sUtf8);
		string GBK2Utf8_(const string& sGBK);

		wstring UTF82Unicode(const string &sUtf8);	//需要测试
		string Unicode2Utf8(const wstring &sUnicode);		//需要测试
		bool IsUTF8( const char * pzInfo, int nSize );		

		//16进制字符串转换为10进制整数
		int Hex2Decimal(const string& str);
		char toHex(const char &x);
		CString DoubleToChineseMoney(double Num);
		bool isAllDigit(const CString& str);	



		int SplitStringWith(CString strTarget,CStringArray &strArray,CString strWith);
		int SplitStringWithEx(CString strTarget, CStringArray &strArray, CString strTag);
		CString GetStringBetween(CString strTarget,CString strA,CString strB);	
		void Split(const string str_value,const string str_spliter,vector<string>& v_str_list);
		
		CString Vector2String (vector<CString>& vStr);		//把VECTOR<CString> 转换成以';'字符分割的字符串	
		int SpliteStringByName(const CString &strTarget, vector<CString>& vStr, const CString &strName);		
		CString GetSystemVariable(const CString &strSysVar);

		void ToSBCS (LPWSTR lpszText);		//ToSBCS: converts a unicode string to Single Byte Character String (SBCS).
		void ToUNICODE (char *lpszText);		//ToUNICODE: converts a SBCS string to a UNICODE string.

		bool CheckGetStringIn(const CString & strOrign, const CString &strBegin, const CString & strEnd);
		CString GetStringIn(const CString & strOrign, const CString &strBegin, const CString & strEnd);
		CString GetStringInWithTag(const CString & strOrign, const CString &strBegin, const CString & strEnd);
		CString GetStringAfter(const CString & strOrign, const CString & strTag);
		CString GetStringAfterWithTag(const CString & strOrign, const CString & strTag);
		CString GetStringBefore(const CString & strOrign, const CString & strTag);
		CString GetStringBeforeWithTag(const CString & strOrign, const CString & strTag);
		CString DeleteStringIn(CString & strOrign, const CString &strBegin, const CString & strEnd);
		CString DeleteStringInWithTag(CString & strOrign, const CString &strBegin, const CString & strEnd);
		CString SetStringIn(CString & strOrign, const CString &strBegin, const CString & strEnd, const CString & New);
		CString SetStringInWithTag(CString & strOrign, const CString &strBegin, const CString & strEnd, const CString & NewWithTag);
		int		GetChildStringTimes(const CString& strParent, const CString& strChild);
		CString GetStringAtCertainTime(const CString& strParent, const CString &strBegin, const CString & strEnd, int nTime);
		CString GetStringAtCertainTimeWithTag(const CString& strParent, const CString &strBegin, const CString & strEnd, int nTime);
		int		GetAllStringAtAllTimes(const CString& strParent, const CString &strBegin, const CString & strEnd, CStringArray & arrReturn);
		int		GetAllStringAtAllTimesWithTag(const CString& strParent, const CString &strBegin, const CString & strEnd, CStringArray & arrReturn);

		string ws2s(const wstring& ws);
		wstring s2ws(const string& s);

		wstring SingleStringToWide (const string &singleString);
		wstring Utf8StringToWide (const string &utf8String);
		string WideToSingleString (const wstring &wideString);
		string WideToUtf8String (const wstring &wideString);
		string StringToUpperCase (const string &str);
	};

	namespace stringutil
	{
		int GBKToUTF8(unsigned char * lpGBKStr,unsigned char * lpUTF8Str,int nUTF8StrLen);		
		int UTF8ToGBK(unsigned char * lpUTF8Str,unsigned char * lpGBKStr,int nGBKStrLen);

		int SplitString(const CString& str, const CString& split, CStringArray &strArray);

	}
}


#endif