#include "stdafx.h"
#include "dic.h"


#define DIC_FILE	"dic.txt"

namespace sdk
{
	namespace dic
	{

		CDicKeyValue::CDicKeyValue()
		{
			CString strDicFile = sdk::processutil::GetModulePath(NULL);
			strDicFile += DIC_FILE;

			if (sdk::fileutil::IsFileExist((LPTSTR)(LPCTSTR)strDicFile))
			{
				CString strContent = sdk::fileutil::ReadFileIntoString((LPTSTR)(LPCTSTR)strDicFile).c_str();
				CStringArray arr;
				sdk::stringutil::SplitString(strContent, "\r\n", arr);

				CString strResult;
				for (int index = 0; index<arr.GetCount(); index++)
				{
					CString strTemp = arr.GetAt(index);

					CStringArray arr1;
					sdk::stringutil::SplitString(strTemp, " ", arr1);
					CString strKey = arr1.GetAt(0);
					strKey.Trim();
					CString strValue = arr1.GetAt(1);
					strValue.Trim();

					DIC_KEY_VALUE dic;
					dic.strKey = strKey;
					dic.strValue = strValue;
					m_vecDic.push_back(dic);
				}
			}
		}

		CDicKeyValue::~CDicKeyValue()
		{

		}

		CString CDicKeyValue::Convert(const CString& str)
		{
			CString strResult = str;
			for (int index = 0; index<m_vecDic.size(); index++)
			{
				CString strKey = m_vecDic[index].strKey;
				CString strValue = m_vecDic[index].strValue;
				strKey.MakeLower();
				strKey = "\\u" + strKey;
				strResult.Replace(strKey, strValue);
			}
			return strResult;
		}

	}
}
