#ifndef _H_INIFILE_F71DB4B1_6FC3_4EB3_9E06_24B9C19BE952
#define _H_INIFILE_F71DB4B1_6FC3_4EB3_9E06_24B9C19BE952


/*
 *Ini�ļ������࣬����Ini�ļ��ļ򵥲������磺��Ӽ�ֵ��ɾ����ֵ��ɾ����
 *�õ�API��
 *GetPrivateProfileInt	GetPrivateProfileString WritePrivateProfileString
 *GetPrivateProfileSection WritePrivateProfileSection
 *GetPrivateProfileSectionNames  
 *Ini Api�����ԣ������ǲ���һ���黹��һ����ֵ������Ϊ""�������ÿ�,���ΪNULL����ɾ����
 */

#include <string>
#include <vector>

using std::string;
using std::vector;


namespace sdk
{
	namespace ini
	{

		class AFX_EXT_CLASS IniFile 
		{
		public:
			IniFile(){};
			IniFile(const string strPath);
			~IniFile(void);

		public:
			string ReadValue(string strSection, string strKey);
			bool WriteValue(const string strSection, const string strKey, const string strValue);

			bool DeleteSection(const string strSection);
			bool ClearSection(const string strSection);
			bool DeleteAllSection();

			bool DeleteKey(const string strSection, const string strKey);

			bool IniFile::GetAllSectionName(vector<string> &vctData);
		private:
			string m_strIniPath;
		};


	}
}


#endif
