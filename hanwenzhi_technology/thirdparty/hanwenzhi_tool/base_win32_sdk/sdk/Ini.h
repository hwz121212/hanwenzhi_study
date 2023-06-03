#pragma once


namespace sdk
{
	namespace iniutil
	{

		class CIni
		{
		public:			
			CIni(const CString sIniPath); 
			CIni(void);	
			~CIni(void);
			void SetIniPath(const CString sIniPath);
			CString GetIniPath();

			// get int, if not find, return the default value // 如果没找到相应值，返回默认值，下同
			int GetInt(const CString sAppName, const CString sKeyName, int nDefault=0);
			double GetDouble(const CString sAppName, const CString sKeyName, double dDefault=0);// get double
			float GetFloat(const CString sAppName, const CString sKeyName, float fDefault=0);	// get float
			CString GetCString(const CString sAppName, const CString sKeyName, CString sDefault=""); // get cstring

			// set int, if failed, return 0 // 设置整形变量，如果失败，返回0，否则返回非零值，下同
			BOOL SetInt(const CString sAppName, const CString sKeyName, int nKeyValue);
			BOOL SetDouble(const CString sAppName, const CString sKeyName, double dKeyValue);	// set double
			BOOL SetFloat(const CString sAppName, const CString sKeyName, float fKeyValue);	// set float
			BOOL SetCstring(const CString sAppName, const CString sKeyName, CString sKeyValue); // set cstring
			BOOL SetPchar(const CString sAppName, const CString sKeyName, char *pchKeyValue);	// set char*


			// 获取字符串为16进制的int
			int GetHexInt(const CString sAppName, const CString sKeyName, int nDefault=0);

		private:
			CString m_sIniPath;
		};


	}

}
