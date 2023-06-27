#include "stdafx.h"
#include "StringUtil.h"


#define array_capacity(arr) (sizeof (arr) / sizeof ((arr)[0]))


namespace sdk
{

	namespace stringutil
	{

		CString Utf82GBK(const CString& sUtf8)
		{
			int len = MultiByteToWideChar(CP_UTF8, 0, (LPCTSTR)sUtf8, -1, NULL, 0);
			wchar_t * wszGBK = new wchar_t[len];
			memset(wszGBK, 0, len);
			MultiByteToWideChar(CP_UTF8, 0, (LPCTSTR)sUtf8, -1, wszGBK, len);

			len = WideCharToMultiByte(CP_ACP, 0, wszGBK, -1, NULL, 0, NULL, NULL);
			char *szGBK = new char[len + 1];
			memset(szGBK, 0, len + 1);
			WideCharToMultiByte(CP_ACP, 0, wszGBK, -1, szGBK, len, NULL, NULL);

			CString sReturn = szGBK;
			delete[] szGBK;
			delete[] wszGBK;
			return sReturn;
		}


		CString GBK2Utf8(const CString &sGBK)
		{
			int len = MultiByteToWideChar(CP_ACP, 0, (LPCTSTR)sGBK, -1, NULL, 0);
			wchar_t * wszUtf8 = new wchar_t[len];
			memset(wszUtf8, 0, len);
			MultiByteToWideChar(CP_ACP, 0, (LPCTSTR)sGBK, -1, wszUtf8, len);

			len = WideCharToMultiByte(CP_UTF8, 0, wszUtf8, -1, NULL, 0, NULL, NULL);
			char *szUtf8 = new char[len + 1];
			memset(szUtf8, 0, len + 1);
			WideCharToMultiByte(CP_UTF8, 0, wszUtf8, -1, szUtf8, len, NULL, NULL);

			CString sReturn = szUtf8;
			delete[] szUtf8;
			delete[] wszUtf8;
			return sReturn;
		}


		string Utf82GBK_(const string& sUtf8)
		{
			int len = MultiByteToWideChar(CP_UTF8, 0, sUtf8.c_str(), -1, NULL, 0);
			wchar_t * wszGBK = new wchar_t[len + 1];
			memset(wszGBK, 0, len * 2 + 2);
			MultiByteToWideChar(CP_UTF8, 0, (LPCTSTR)sUtf8.c_str(), -1, wszGBK, len);

			len = WideCharToMultiByte(CP_ACP, 0, wszGBK, -1, NULL, 0, NULL, NULL);
			char *szGBK = new char[len + 1];
			memset(szGBK, 0, len + 1);
			WideCharToMultiByte(CP_ACP, 0, wszGBK, -1, szGBK, len, NULL, NULL);

			std::string strTemp(szGBK);
			delete[]szGBK;
			delete[]wszGBK;
			return strTemp;
		}


		string GBK2Utf8_(const string &sGBK)
		{
			int len = MultiByteToWideChar(CP_ACP, 0, (LPCTSTR)sGBK.c_str(), -1, NULL, 0);
			wchar_t * wszUtf8 = new wchar_t[len];
			memset(wszUtf8, 0, len);
			MultiByteToWideChar(CP_ACP, 0, (LPCTSTR)sGBK.c_str(), -1, wszUtf8, len);

			len = WideCharToMultiByte(CP_UTF8, 0, wszUtf8, -1, NULL, 0, NULL, NULL);
			char *szUtf8 = new char[len + 1];
			memset(szUtf8, 0, len + 1);
			WideCharToMultiByte(CP_UTF8, 0, wszUtf8, -1, szUtf8, len, NULL, NULL);

			string sReturn = szUtf8;
			delete[] szUtf8;
			delete[] wszUtf8;
			return sReturn;
		}


		wstring UTF82Unicode(const string &sUtf8)
		{
			int len = MultiByteToWideChar(CP_UTF8, 0, sUtf8.c_str(), -1, NULL, 0);
			wchar_t * unicode = new wchar_t[2 * len];
			memset(unicode, 0, 2 * len);
			MultiByteToWideChar(CP_UTF8, 0, sUtf8.c_str(), -1, unicode, 2 * len);
			wstring sReturn = unicode;
			delete[] unicode;
			return sReturn;
		}

		string Unicode2Utf8(const wstring &sUnicode)
		{
			int len = WideCharToMultiByte(CP_UTF8, 0, sUnicode.c_str(), -1, NULL, 0, NULL, NULL);
			char * utf8 = new char[2 * len];
			memset(utf8, 0, 2 * len);
			WideCharToMultiByte(CP_UTF8, 0, sUnicode.c_str(), -1, utf8, len, NULL, NULL);
			string sReturn = utf8;
			delete[] utf8;
			return sReturn;
		}

		int DecodeCharUTF8(const char*& pszUTF8, const char* pszUTF8End/*=NULL*/)
		{
			// Return Unicode code point and increment pszUTF8 past 1-4 bytes
			// pszUTF8End can be NULL if pszUTF8 is null terminated
			int nUChar = (unsigned char)*pszUTF8;
			++pszUTF8;
			if (nUChar & 0x80)
			{
				int nExtraChars;
				if (!(nUChar & 0x20))
				{
					nExtraChars = 1;
					nUChar &= 0x1f;
				}
				else if (!(nUChar & 0x10))
				{
					nExtraChars = 2;
					nUChar &= 0x0f;
				}
				else if (!(nUChar & 0x08))
				{
					nExtraChars = 3;
					nUChar &= 0x07;
				}
				else
					return -1;
				while (nExtraChars--)
				{
					if (pszUTF8 == pszUTF8End || !(*pszUTF8 & 0x80))
						return -1;
					nUChar = nUChar << 6;
					nUChar |= *pszUTF8 & 0x3f;
					++pszUTF8;
				}
			}
			return nUChar;
		}

		bool IsUTF8(const char * pText, int nTextLen)
		{
			// return true if ASCII or all non-ASCII byte sequences are valid UTF-8 pattern:
			// ASCII   0xxxxxxx
			// 2-byte  110xxxxx 10xxxxxx
			// 3-byte  1110xxxx 10xxxxxx 10xxxxxx
			// 4-byte  11110xxx 10xxxxxx 10xxxxxx 10xxxxxx
			int nUChar = -1;
			const char* pTextEnd = pText + nTextLen;
			while (*pText && pText != pTextEnd)
			{
				if ((unsigned char)(*pText) & 0x80)
				{
					nUChar = DecodeCharUTF8(pText, pTextEnd);
					if (nUChar == -1)
					{
						return false;
					}
				}
				else
					++pText;
			}

			return true;
		}




		int Hex2Decimal(const string& str)
		{
			int dem = 0;
			for (int i = 0; i < str.length(); i++)
			{
				dem = dem * 16;
				if ((str[i] <= '9') && (str[i] >= '0'))  //0～9之间的字符
					dem += str[i] - '0';
				else if ((str[i] <= 'F') && (str[i] >= 'A'))//A～F之间的字符
					dem += str[i] - 'A' + 10;
				else if ((str[i] <= 'f') && (str[i] >= 'a'))//a～f之间的字符
					dem += str[i] - 'a' + 10;
				else
					return -1;
			}
			return dem;
		}


		char toHex(const char &x)
		{
			return x > 9 ? x + 55 : x + 48;
		}


		CString DoubleToChineseMoney(double Num)
		{
			CString szChMoney, szNum;
			int iLen, iNum, iAddZero = 0;
			TCHAR* hzUnit[18] = { _T("分"),_T("角"),_T("元"),_T("拾"),_T("佰"),_T("仟"),_T("万"),_T("拾"),_T("佰"),_T("仟"),_T("亿"),_T("拾"),_T("佰"),_T("仟"),_T("万"),_T("拾"),_T("佰"),_T("仟") };
			TCHAR* hzNum[10] = { _T("零"),_T("壹"),_T("贰"),_T("叁"),_T("肆"),_T("伍"),_T("陆"),_T("柒"),_T("捌"),_T("玖") };
			szNum.Format(_T("%18.0f"), Num * 100); //只是到分
			szNum.TrimLeft();
			iLen = szNum.GetLength();
			if (iLen > 15 || iLen == 0 || Num < 0)return ""; //数据错误返回

			for (int i = 0; i < iLen; i++)
			{
				iNum = _ttoi((LPCTSTR)szNum.Mid(i, 1));
				if (iNum == 0)//如果为0
					iAddZero++;
				else
				{
					if (iAddZero > 0)
						szChMoney += _T("零");
					szChMoney += hzNum[iNum];//转换为相应的数字
					iAddZero = 0;
				}
				if (iNum != 0 || iLen - i == 3 || iLen - i == 11 || ((iLen - i + 1) % 8 == 0 && iAddZero < 4))
					szChMoney += hzUnit[iLen - i - 1];//添加相应的汉字
			}
			if (szNum.Right(2) == _T("00")) //没有角和分
				szChMoney += _T("整");
			return szChMoney;
		}

		CString GetStringBetween(CString strTarget, CString strA, CString strB)
		{
			CString strReturn;

			int iIndexA = strTarget.Find(strA, 0);
			int iIndexB = strTarget.Find(strB, 0);

			if (iIndexA < 0 || iIndexB < 0)
				return strReturn;

			if (iIndexA > iIndexB)
			{
				return strReturn;
			}

			CString strTemp = strTarget.Right(strTarget.GetLength() - iIndexA - strA.GetLength());
			strTarget = strTemp;
			iIndexB = strTarget.Find(strB, 0);
			strReturn = strTarget.Left(strTarget.GetLength() - iIndexB);

			return strReturn;
		}

		int SplitStringWith(CString strTarget, CStringArray &strArray, CString strTag)
		{
			int iCount = 0;

			if (strTarget.IsEmpty())
			{
				return 0;
			}

			try
			{
				CString strTemp = strTarget;
				int nPos = strTemp.Find(strTag);
				if (nPos > 0)
				{
					while (nPos >= 0)
					{
						CString strSubString = strTemp.Left(nPos);
						if (!strSubString.IsEmpty())
						{
							strArray.Add(strSubString);
							iCount++;
						}
						strTemp = strTarget.Right(strTemp.GetLength() - nPos - strTag.GetLength());

						nPos = strTemp.Find(strTag);
					}

					if (!strTemp.IsEmpty())
					{
						strArray.Add(strTemp);
						iCount++;
					}

				}
				else {
					if (!strTemp.IsEmpty())
					{
						strArray.Add(strTemp);
						iCount++;
					}
				}
			}
			catch (...)
			{
				return 0;
			}
			return iCount;
		}

		// 此函数在分解字符串后会清理掉子字符串的前后空字符，清理后非空的才保存
		// e.g; "11; ; 22 1;3;" 分解后为: "11" "22 1" "3" 3个子字符串	
		int SplitStringWithEx(CString strTarget, CStringArray &strArray, CString strTag)
		{
			int iCount = 0;

			if (strTarget.IsEmpty())
			{
				return 0;
			}

			try
			{
				CString strTemp = strTarget;
				int nPos = strTemp.Find(strTag);
				if (nPos > 0)
				{
					while (nPos > 0)
					{
						CString strSubString = strTemp.Left(nPos);
						strSubString.TrimLeft();
						strSubString.TrimRight();
						if (!strSubString.IsEmpty())
						{
							strArray.Add(strSubString);
							iCount++;
						}

						strTemp = strTarget.Right(strTemp.GetLength() - nPos - strTag.GetLength());

						nPos = strTemp.Find(strTag);
					}

					strTemp.TrimRight();
					strTemp.TrimLeft();
					if (!strTemp.IsEmpty())
					{
						strArray.Add(strTemp);
						iCount++;
					}

				}
				else
				{
					strTemp.TrimRight();
					strTemp.TrimLeft();
					if (!strTemp.IsEmpty())
					{
						strArray.Add(strTemp);
						iCount++;
					}
				}
			}
			catch (...)
			{
				return 0;
			}
			return iCount;
		}

		CString Vector2String(vector<CString>& vStr)
		{
			CString strTmp;
			int nCount;
			int i;

			nCount = vStr.size() - 1;

			if (nCount >= 0)
			{
				for (i = 0; i < nCount; ++i)
				{
					strTmp += vStr[i] + _T(";");
				}

				strTmp += vStr[nCount];
			}

			return strTmp;
		}

		int SpliteStringByName(const CString &strTarget, vector<CString>& vStr, const CString &strName)
		{
			vStr.clear();

			int iCount = 0;
			CString strTmp = strTarget;

			strTmp.TrimLeft();
			strTmp.TrimRight();

			int nPos = strTmp.Find(strName);

			if (nPos >= 0)
			{
				while (nPos >= 0)
				{
					CString strSubStr = strTmp.Left(nPos);

					if (!strSubStr.IsEmpty())
					{
						vStr.push_back(strSubStr);
						iCount++;
					}

					strTmp = strTarget.Right(strTmp.GetLength() - nPos - strName.GetLength());
					nPos = strTmp.Find(strName);
				}

				if (!strTmp.IsEmpty())
				{
					vStr.push_back(strTmp);
					iCount++;
				}
			}
			else if (strTmp.GetLength() > 0)
			{
				vStr.push_back(strTmp);
				iCount++;
			}

			return iCount;
		}



		CString GetSystemVariable(const CString &strSysVar)
		{
			CString strReturn = _T("");
			int nLength;
			vector<CString> vStr;

			nLength = strSysVar.GetLength();

			if (nLength > 0)
			{
				strReturn = strSysVar;
				strReturn.Replace("/", "\\");
				SpliteStringByName(strReturn, vStr, "\\");

				if (vStr.size() > 0)
				{
					CString strTmp;

					strTmp = vStr[0];

					if (strTmp.Find('%') != -1)
					{
						int nCount;

						strTmp.TrimLeft('%');
						strTmp.TrimRight('%');
						nCount = GetEnvironmentVariable(strTmp, NULL, 0);

						if (nCount > 0)
						{
							char *buffer = new char[nCount + 1];
							nCount = GetEnvironmentVariable(strTmp, buffer, nCount + 1);

							strTmp = buffer;
							delete[] buffer;

							nCount = strReturn.Find('\\');
							if (nCount != -1)
							{
								strReturn = strReturn.Right(nLength - nCount);
								strReturn = strTmp + strReturn;
							}
							else
								strReturn = strTmp;
						}
					}
				}
			}

			return strReturn;
		}

		//Split
		void Split(const string str_value, const string str_spliter, vector<string>& v_str_list)
		{
			v_str_list.clear();
			if (str_value.empty() || str_spliter.empty())
				return;
			string str_value_ = str_value;
			size_t nPos = str_value_.find(str_spliter);
			string strTemp;
			while (string::npos != nPos)
			{
				strTemp = str_value_.substr(0, nPos);
				if (!strTemp.empty() && strTemp.compare("=") != 0)
					v_str_list.push_back(strTemp);
				str_value_ = str_value_.substr(nPos + str_spliter.size());
				nPos = str_value_.find(str_spliter);
			}
			if (!str_value_.empty())
				v_str_list.push_back(str_value_);
		}




		/*****************************************************************************
		  ToSBCS: converts a unicode string to Single Byte Character String (SBCS).
		  ***************************************************************************/

		void ToSBCS(LPWSTR lpszText)
		{
			int j = wcslen(lpszText);
			if (j == 0)
			{
				strcpy((char *)lpszText, "");
				return;
			}
			else
			{
				char *lpszNewText = (char *)malloc(j + 1);
				j = WideCharToMultiByte(CP_ACP, 0L, lpszText, -1, lpszNewText, j + 1, NULL, NULL);
				if (j > 0)
					strcpy((char *)lpszText, lpszNewText);
				else
					strcpy((char *)lpszText, "");
				free(lpszNewText);
			}
		}



		/*****************************************************************************
		  ToUNICODE: converts a SBCS string to a UNICODE string.
		  ***************************************************************************/
#define WIDE(x) (LPWSTR)L##x

		void ToUNICODE(char *lpszText)
		{
			int j = strlen(lpszText);
			if (j == 0)
			{
				wcscpy((LPWSTR)lpszText, (LPWSTR)WIDE(""));
				return;
			}
			else
			{
				LPWSTR lpszNewText = (LPWSTR)malloc((j + 1) * 2);
				j = MultiByteToWideChar(CP_ACP, 0L, lpszText, -1, lpszNewText, j + 1);
				if (j > 0)
					wcscpy((LPWSTR)lpszText, lpszNewText);
				else
					wcscpy((LPWSTR)lpszText, (LPWSTR)WIDE(""));
				free(lpszNewText);
			}
		}


		bool CheckGetStringIn(const CString & strOrign, const CString &strBegin, const CString & strEnd)
		{
			bool bReturn = false;
			int nBeginPos = strOrign.Find(strBegin);
			if (nBeginPos > -1)
			{
				int nEndPos = strOrign.Find(strEnd, nBeginPos);
				if (nEndPos > -1)
				{
					bReturn = true;
				}
			}
			return bReturn;
		}


		CString GetStringIn(const CString & strOrign, const CString &strBegin, const CString & strEnd)
		{
			CString strTemp = "";
			int nBeginPos = strOrign.Find(strBegin);
			if (nBeginPos > -1)
			{
				int nEndPos = strOrign.Find(strEnd, nBeginPos);
				if (nEndPos > -1)
				{
					int nBeginLen = strBegin.GetLength();
					int nEndLen = strEnd.GetLength();

					strTemp = strOrign.Mid(nBeginPos + nBeginLen, nEndPos - nBeginPos - nBeginLen);

				}
			}
			return strTemp;
		}

		CString GetStringInWithTag(const CString & strOrign, const CString &strBegin, const CString & strEnd)
		{
			CString str = GetStringIn(strOrign, strBegin, strEnd);
			str = strBegin + str + strEnd;
			return str;
		}


		CString GetStringAfter(const CString & strOrign, const CString & strTag)
		{
			int nPos = strOrign.Find(strTag);
			CString strReturn = strOrign;
			if (nPos >= 0)
			{
				strReturn = strOrign.Right(strOrign.GetLength() - nPos - strTag.GetLength());
			}
			return strReturn;
		}

		CString GetStringAfterWithTag(const CString & strOrign, const CString & strTag)
		{
			CString strReturn = GetStringAfter(strOrign, strTag);
			strReturn = strTag + strReturn;
			return strReturn;
		}

		CString GetStringBefore(const CString & strOrign, const CString & strTag)
		{
			int nPos = strOrign.Find(strTag);
			CString strReturn = strOrign;
			if (nPos >= 0)
			{
				strReturn = strOrign.Left(nPos);
			}
			return strReturn;
		}

		CString GetStringBeforeWithTag(const CString & strOrign, const CString & strTag)
		{
			CString strReturn = GetStringBefore(strOrign, strTag);
			strReturn = strReturn + strTag;
			return strReturn;
		}

		CString DeleteStringIn(CString & strOrign, const CString &strBegin, const CString & strEnd)
		{
			CString strReturn = GetStringInWithTag(strOrign, strBegin, strEnd);
			CString strNew = strBegin + strEnd;
			strOrign.Replace(strReturn, strNew);
			return strReturn;
		}

		CString DeleteStringInWithTag(CString & strOrign, const CString &strBegin, const CString & strEnd)
		{
			CString strReturn = GetStringInWithTag(strOrign, strBegin, strEnd);
			strOrign.Replace(strReturn, "");
			return strReturn;
		}

		CString SetStringIn(CString & strOrign, const CString &strBegin, const CString & strEnd, const CString & New)
		{
			CString strIn = GetStringIn(strOrign, strBegin, strEnd);
			CString strOld = strBegin + strIn + strEnd;
			CString strNew = strBegin + New + strEnd;
			CString strTemp = "<hanwenzhi_String>";
			strOrign.Replace(strOld, strTemp);
			strOrign.Replace(strTemp, strNew);
			return strIn;
		}

		CString SetStringInWithTag(CString & strOrign, const CString &strBegin, const CString & strEnd, const CString & NewWithTag)
		{
			CString strInWithTag = GetStringInWithTag(strOrign, strBegin, strEnd);
			CString strNew = NewWithTag;
			CString strTemp = "<hanwenzhi_String>";
			strOrign.Replace(strInWithTag, strTemp);
			strOrign.Replace(strTemp, strNew);
			return strInWithTag;
		}


		int  GetChildStringTimes(const CString& strParent, const CString& strChild)
		{
			CString str = strParent;
			int nPos = str.Find(strChild);
			int nChildLen = strChild.GetLength();
			int nTimes = 0;
			while (nPos > -1)
			{
				nTimes++;
				str = str.Right(str.GetLength() - nPos - nChildLen);
				nPos = str.Find(strChild);
			}

			return nTimes;
		}

		CString GetStringAtCertainTime(const CString& strParent, const CString &strBegin, const CString & strEnd, int nTime)
		{
			CString str = strParent;
			int nPos = str.Find(strBegin);
			int nTimes = 0;
			while (nPos > -1)
			{
				if (!CheckGetStringIn(str, strBegin, strEnd))break;
				
				nTimes++;
				if (nTime == nTimes)
				{
					return GetStringIn(str, strBegin, strEnd);
				}
				str = GetStringAfter(str, strEnd);
				nPos = str.Find(strBegin);
							
			}
			return "";
		}

		CString GetStringAtCertainTimeWithTag(const CString& strParent, const CString &strBegin, const CString & strEnd, int nTime)
		{
			CString str = strParent;
			int nPos = str.Find(strBegin);
			int nTimes = 0;
			while (nPos > -1)
			{
				if (!CheckGetStringIn(str, strBegin, strEnd))break;
				
				nTimes++;
				if (nTime == nTimes)
				{
					return GetStringInWithTag(str, strBegin, strEnd);
				}
				str = GetStringAfter(str, strEnd);
				nPos = str.Find(strBegin);
								
			}
			return "";
		}


		int GetAllStringAtAllTimes(const CString& strParent, const CString &strBegin, const CString & strEnd, CStringArray & arrReturn)
		{
			CString str = strParent;
			int nPos = str.Find(strBegin);
			int nTimes = 0;
			while (nPos > -1)
			{
				if (!CheckGetStringIn(str, strBegin, strEnd))break;
				
				nTimes++;
				arrReturn.Add(GetStringIn(str, strBegin, strEnd));
				str = GetStringAfter(str, strEnd);
				nPos = str.Find(strBegin);
								
			}

			return nTimes;
		}

		int GetAllStringAtAllTimesWithTag(const CString& strParent, const CString &strBegin, const CString & strEnd, CStringArray & arrReturn)
		{
			CString str = strParent;
			int nPos = str.Find(strBegin);
			int nTimes = 0;
			while (nPos > -1)
			{		
				if (!CheckGetStringIn(str, strBegin, strEnd))break;
				nTimes++;
				arrReturn.Add(GetStringInWithTag(str, strBegin, strEnd));
				str = GetStringAfter(str, strEnd);
				nPos = str.Find(strBegin);								
			}
			return nTimes;
		}


		bool isAllDigit(const CString& str)
		{
			int i;
			for (i = 0; i != str.GetLength(); i++)
			{
				if (!isdigit(str[i]))
				{
					return false;
				}
			}
			return true;
		}

		string ws2s(const wstring& ws)
		{
			int nLen = WideCharToMultiByte(CP_ACP, 0, ws.c_str(), -1, NULL, 0, NULL, NULL);
			if (nLen <= 0) return string("");

			char* pszDst = new char[nLen];
			if (NULL == pszDst) return string("");

			WideCharToMultiByte(CP_ACP, 0, ws.c_str(), -1, pszDst, nLen, NULL, NULL);
			pszDst[nLen - 1] = 0;

			string strTemp(pszDst);
			delete[] pszDst;

			return strTemp;
		}

		wstring s2ws(const string& s)
		{
			setlocale(LC_ALL, "chs");
			const char* _Source = s.c_str();
			size_t _Dsize = s.size() + 1;
			wchar_t *_Dest = new wchar_t[_Dsize];
			wmemset(_Dest, 0, _Dsize);
			mbstowcs(_Dest, _Source, _Dsize);
			wstring result = _Dest;
			delete[]_Dest;
			setlocale(LC_ALL, "C");
			return result;
		}




		std::wstring SingleStringToWide(const std::string &singleString)
		{
			if (singleString.empty())
				return std::wstring();

			WCHAR wbuf[65536];
			int wideLen = MultiByteToWideChar(CP_ACP, 0, singleString.c_str(), -1, wbuf, array_capacity(wbuf) - 1);

			wbuf[wideLen] = 0;
			return wbuf;
		}


		std::wstring Utf8StringToWide(const std::string &utf8String)
		{
			if (utf8String.empty())
				return std::wstring();

			WCHAR wbuf[65536];
			int wideLen = MultiByteToWideChar(CP_UTF8, 0, utf8String.c_str(), -1, wbuf, array_capacity(wbuf) - 1);
			wbuf[wideLen] = 0;
			return wbuf;
		}


		std::string WideToUtf8String(const std::wstring &wideString)
		{
			if (wideString.empty())
				return std::string();

			char buf[65536];
			int len = WideCharToMultiByte(CP_UTF8, 0, wideString.c_str(), -1, buf, array_capacity(buf) - 1, NULL, NULL);
			buf[len] = 0;
			return buf;
		}


		std::string WideToSingleString(const std::wstring &wideString)
		{
			if (wideString.empty())
				return std::string();

			char buf[65536];
			int len = WideCharToMultiByte(CP_ACP, 0, wideString.c_str(), -1, buf, array_capacity(buf) - 1, NULL, NULL);
			buf[len] = 0;
			return buf;
		}


		std::string StringToUpperCase(const std::string &str)
		{
			string upperCase(str);
			_strupr((char *)upperCase.c_str());
			return upperCase;
		}

	}

	


namespace stringutil
{




	//GBK编码转换到UTF8编码
	int GBKToUTF8(unsigned char * lpGBKStr,unsigned char * lpUTF8Str,int nUTF8StrLen)
	{
		wchar_t * lpUnicodeStr = NULL;
		int nRetLen = 0;

		if(!lpGBKStr)  //如果GBK字符串为NULL则出错退出
			return 0;

		nRetLen = ::MultiByteToWideChar(CP_ACP,0,(char *)lpGBKStr,-1,NULL,NULL);  //获取转换到Unicode编码后所需要的字符空间长度
		lpUnicodeStr = new WCHAR[nRetLen + 1];  //为Unicode字符串空间
		nRetLen = ::MultiByteToWideChar(CP_ACP,0,(char *)lpGBKStr,-1,lpUnicodeStr,nRetLen);  //转换到Unicode编码
		if(!nRetLen)  //转换失败则出错退出
			return 0;

		nRetLen = ::WideCharToMultiByte(CP_UTF8,0,lpUnicodeStr,-1,NULL,0,NULL,NULL);  //获取转换到UTF8编码后所需要的字符空间长度

		if(!lpUTF8Str)  //输出缓冲区为空则返回转换后需要的空间大小
		{
			if(lpUnicodeStr)
				delete []lpUnicodeStr;
			return nRetLen;
		}

		if(nUTF8StrLen < nRetLen)  //如果输出缓冲区长度不够则退出
		{
			if(lpUnicodeStr)
				delete []lpUnicodeStr;
			return 0;
		}

		nRetLen = ::WideCharToMultiByte(CP_UTF8,0,lpUnicodeStr,-1,(char *)lpUTF8Str,nUTF8StrLen,NULL,NULL);  //转换到UTF8编码

		if(lpUnicodeStr)
			delete []lpUnicodeStr;

		return nRetLen;
	}

	// UTF8编码转换到GBK编码
	int UTF8ToGBK(unsigned char * lpUTF8Str,unsigned char * lpGBKStr,int nGBKStrLen)
	{
		wchar_t * lpUnicodeStr = NULL;
		int nRetLen = 0;

		if(!lpUTF8Str)  //如果UTF8字符串为NULL则出错退出
			return 0;

		nRetLen = ::MultiByteToWideChar(CP_UTF8,0,(char *)lpUTF8Str,-1,NULL,NULL);  //获取转换到Unicode编码后所需要的字符空间长度
		lpUnicodeStr = new WCHAR[nRetLen + 1];  //为Unicode字符串空间
		nRetLen = ::MultiByteToWideChar(CP_UTF8,0,(char *)lpUTF8Str,-1,lpUnicodeStr,nRetLen);  //转换到Unicode编码
		if(!nRetLen)  //转换失败则出错退出
			return 0;

		nRetLen = ::WideCharToMultiByte(CP_ACP,0,lpUnicodeStr,-1,NULL,NULL,NULL,NULL);  //获取转换到GBK编码后所需要的字符空间长度

		if(!lpGBKStr)  //输出缓冲区为空则返回转换后需要的空间大小
		{
			if(lpUnicodeStr)
				delete []lpUnicodeStr;
			return nRetLen;
		}

		if(nGBKStrLen < nRetLen)  //如果输出缓冲区长度不够则退出
		{
			if(lpUnicodeStr)
				delete []lpUnicodeStr;
			return 0;
		}

		nRetLen = ::WideCharToMultiByte(CP_ACP,0,lpUnicodeStr,-1,(char *)lpGBKStr,nRetLen,NULL,NULL);  //转换到GBK编码

		if(lpUnicodeStr)
			delete []lpUnicodeStr;

		return nRetLen;
	}



	int SplitString(const CString& str, const CString& split, CStringArray &strArray)  
	{  
		strArray.RemoveAll();  
		CString strTemp = str;  
		int iIndex = 0;  
		while (1)  
		{  
			iIndex = strTemp.Find(split);  
			if(iIndex >= 0)  
			{  
				strArray.Add(strTemp.Left(iIndex));  
				strTemp = strTemp.Right(strTemp.GetLength() - iIndex - split.GetLength());  
			}  
			else  
			{  
				break;  
			}  
		}  
		strArray.Add(strTemp);  

		return strArray.GetSize();  
	}  


	







}
}
