#ifndef _H_INIFILE_F71DB4B1_6FC3_4EB3_9E06_24B9C19BE952
#define _H_INIFILE_F71DB4B1_6FC3_4EB3_9E06_24B9C19BE952


/*
 *Ini文件操作类，包含Ini文件的简单操作，如：添加键值，删除键值，删除块
 *用到API：
 *GetPrivateProfileInt	GetPrivateProfileString WritePrivateProfileString
 *GetPrivateProfileSection WritePrivateProfileSection
 *GetPrivateProfileSectionNames  
 *Ini Api的特性：无论是操作一个块还是一个键值，参数为""，把其置空,如果为NULL，则删除；
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
