#include "StdAfx.h" // use CString, GetPrivateProfileInt etc.
#include "Ini.h"


namespace sdk
{
	namespace iniutil
	{

		CIni::CIni(const CString sIniPath)
		{
			m_sIniPath = sIniPath;
		}

		CIni::CIni(void)
		{
			m_sIniPath = "";
		}

		CIni::~CIni(void)
		{
		}

		// set ini file path
		void CIni::SetIniPath(const CString sIniPath)
		{
			m_sIniPath = sIniPath;
		}

		// get ini file path
		CString CIni::GetIniPath()
		{
			return m_sIniPath;
		}

		int CIni::GetInt(const CString sAppName, const CString sKeyName, int nDefault)
		{
			return GetPrivateProfileInt(sAppName, sKeyName, nDefault, m_sIniPath);
		}

		int CIni::GetHexInt(const CString sAppName, const CString sKeyName, int nDefault)
		{
			char s[MAX_PATH];
			GetPrivateProfileString(sAppName, sKeyName, "", s, MAX_PATH, m_sIniPath);
			if (0 == strcmp("", s))
			{
				return nDefault;
			}
			int i = nDefault;
			sscanf(s, "%x",&i);
			return i;
		}

		double CIni::GetDouble(const CString sAppName, const CString sKeyName, double dDefault)
		{
			char s[MAX_PATH];
			GetPrivateProfileString(sAppName, sKeyName, "", s, MAX_PATH, m_sIniPath);
			if (0 == strcmp("", s))
			{
				return dDefault;
			}
			return atof(s);
		}

		float CIni::GetFloat(const CString sAppName, const CString sKeyName, float fDefault)
		{
			return (float)GetDouble(sAppName, sKeyName);
		}

		CString CIni::GetCString(const CString sAppName, const CString sKeyName, CString sDefault)
		{
			char s[MAX_PATH];
			GetPrivateProfileString(sAppName, sKeyName, "", s, MAX_PATH, m_sIniPath);
			if (0 == strcmp("", s))
			{
				return sDefault;
			}
			CString str;
			str.Format("%s", s);
			return str;
		}

		// set int, if failed, return 0
		BOOL CIni::SetInt(const CString sAppName, const CString sKeyName, int nKeyValue)
		{

			char buf[MAX_PATH];
			sprintf(buf, "%d", nKeyValue);
			return WritePrivateProfileString(sAppName, sKeyName, buf, m_sIniPath);
		}

		// set double
		BOOL CIni::SetDouble(const CString sAppName, const CString sKeyName, double dKeyValue)
		{
			char buf[MAX_PATH];
			sprintf(buf, "%f", dKeyValue);
			return WritePrivateProfileString(sAppName, sKeyName, buf, m_sIniPath);
		}

		// set float
		BOOL CIni::SetFloat(const CString sAppName, const CString sKeyName, float fKeyValue)
		{
			return SetDouble(sAppName, sKeyName, fKeyValue);
		}

		// set cstring
		BOOL CIni::SetCstring(const CString sAppName, const CString sKeyName, CString sKeyValue)
		{
			return WritePrivateProfileString(sAppName, sKeyName, sKeyValue, m_sIniPath);
		}

		// set char*
		BOOL CIni::SetPchar(const CString sAppName, const CString sKeyName, char *pchKeyValue)
		{
			return WritePrivateProfileString(sAppName, sKeyName, pchKeyValue, m_sIniPath);
		}

	}
}

