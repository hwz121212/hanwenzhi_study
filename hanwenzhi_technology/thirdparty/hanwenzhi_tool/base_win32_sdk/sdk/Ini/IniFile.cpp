#include "stdafx.h"
#include "IniFile.h"

#include <memory>
using namespace std;

namespace sdk
{
	namespace ini
	{
		IniFile::IniFile(const string strPath)
		{
			m_strIniPath = strPath;
		}


		IniFile::~IniFile(void)
		{
		}

		string IniFile::ReadValue(string strSection, string strKey)
		{
			if (0 == strSection.compare(_T("")) || 0 == strKey.compare(_T("")))
			{
				return _T("");
			}

			char * buf = NULL;
			int iRtn = 0;
			for ( int iBase = 10; iBase <= 1024; iBase += 10)
			{
				if (buf)
				{
					delete []buf;
					buf = NULL;
				}
				buf = new TCHAR[iBase * 1024];
				memset(buf, 0,sizeof(buf));
				iRtn = GetPrivateProfileString(strSection.c_str(), strKey.c_str(), _T(""), buf, iBase * 1024, m_strIniPath.c_str());
				if (iRtn == iBase * 1024 - 1)
					continue;
				else
					break;
			}

			string strValue = buf;
			delete buf;
			buf = NULL;
			return iRtn > 0 ? strValue : "";
		}

		bool IniFile::WriteValue(const string strSection, const string strKey, const string strValue)
		{
			return 0 != WritePrivateProfileString(strSection.c_str(), strKey.c_str(), strValue.c_str(), m_strIniPath.c_str()) ? true : false;
		}

		bool IniFile::DeleteSection(const string strSection)
		{
			return 0 != WritePrivateProfileSection(strSection.c_str(), NULL, m_strIniPath.c_str()) ? true : false;
		}

		bool IniFile::ClearSection(const string strSection)
		{
			return 0 != WritePrivateProfileSection(strSection.c_str(), _T(""), m_strIniPath.c_str()) ? true : false;
		}

		bool IniFile::DeleteKey(const string strSection, const string strKey)
		{
			return 0 != WritePrivateProfileString(strSection.c_str(), strKey.c_str(), NULL, m_strIniPath.c_str()) ? true : false;
		}

		bool IniFile::DeleteAllSection()
		{
			vector<string> vctData;
			GetAllSectionName(vctData);
			for (auto itor = vctData.begin(); itor != vctData.end(); itor++)
			{
				if (!DeleteSection(*itor))
				{
					return false;
				}
			}
			return true;
		}

		bool IniFile::GetAllSectionName(vector<string> &vctData)
		{
			char * buf = NULL;
			int iRtn = 0;
			for ( int iBase = 10; iBase <= 1024; iBase += 10)
			{
				if (buf)
				{
					delete []buf;
					buf = NULL;
				}
				buf = new TCHAR[iBase * 1024];
				memset(buf, 0,sizeof(buf));
				iRtn = GetPrivateProfileSectionNames(buf, iBase * 1024, m_strIniPath.c_str());
				if (iRtn == iBase * 1024 - 2)
					continue;
				else
					break;
			}

			if(0 == iRtn)
			{
				return true;
			}
			for (TCHAR *p = buf; *p != '\0'; p += _tcslen(p) + 1)
			{
				vctData.push_back(p);
			}
			delete []buf;
			buf = NULL;
			return true;
		}
	}
}
