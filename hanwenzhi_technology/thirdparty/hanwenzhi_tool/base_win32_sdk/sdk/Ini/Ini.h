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

			// get int, if not find, return the default value // ���û�ҵ���Ӧֵ������Ĭ��ֵ����ͬ
			int GetInt(const CString sAppName, const CString sKeyName, int nDefault=0);
			double GetDouble(const CString sAppName, const CString sKeyName, double dDefault=0);// get double
			float GetFloat(const CString sAppName, const CString sKeyName, float fDefault=0);	// get float
			CString GetCString(const CString sAppName, const CString sKeyName, CString sDefault=""); // get cstring

			// set int, if failed, return 0 // �������α��������ʧ�ܣ�����0�����򷵻ط���ֵ����ͬ
			BOOL SetInt(const CString sAppName, const CString sKeyName, int nKeyValue);
			BOOL SetDouble(const CString sAppName, const CString sKeyName, double dKeyValue);	// set double
			BOOL SetFloat(const CString sAppName, const CString sKeyName, float fKeyValue);	// set float
			BOOL SetCstring(const CString sAppName, const CString sKeyName, CString sKeyValue); // set cstring
			BOOL SetPchar(const CString sAppName, const CString sKeyName, char *pchKeyValue);	// set char*


			// ��ȡ�ַ���Ϊ16���Ƶ�int
			int GetHexInt(const CString sAppName, const CString sKeyName, int nDefault=0);

		private:
			CString m_sIniPath;
		};


	}

}
