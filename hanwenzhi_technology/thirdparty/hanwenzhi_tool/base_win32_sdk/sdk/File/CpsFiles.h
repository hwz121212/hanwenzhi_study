#pragma once

#include <vector>
#include <string>

using namespace std;

#pragma pack(push, 1)

typedef struct tagFileAttribute
{
	char			szFileName[256];	//BRfwk.exe
	char			szLocalFullPath[256];//local path
	char			szFileMd5[64];		//XXXXXXXXXXXXXXXXXXXX
	unsigned long	ulFileSize;			//size

	tagFileAttribute()
	{
		memset(this, 0, sizeof(tagFileAttribute));
	}

}FILEATTRIBUTE, *PFILEATTRIBUTE;

#pragma pack(pop)

/****************************��*��*��*��*ͼ*******************************************/
/*																		             */
/*|	  PE  |		file1's Atrribue   |  PE |	file2's Atrribue      |	PE	|	SIZE  |  */
/*-----------------------------------------------------------------------------------*/
/*|HOST-PE|F1-PH|F1-NM|FI-MD5|F1-SZ|F1-PE|F2-PH|F2-NM|FI-MD5|F2-SZ|F2-PE|TOTALSIZE|  */
/*-----------------------------------------------------------------------------------*/
/*																		             */
/*************************************************************************************/




// vector<FILEATTRIBUTE> vecFiles;
// CString strTemp;
// for (i=0; i<m_lstFiles.GetItemCount(); i++)
// {
// 	FILEATTRIBUTE fa;
// 	strTemp = m_lstFiles.GetItemText(i, 0);
// 	strcpy(fa.szFileName, strTemp.GetString());
// 
// 	strTemp = m_lstFiles.GetItemText(i, 1);
// 	strcpy(fa.szLocalFullPath, strTemp.GetString());
// 
// 	CCpsFiles::GetFileSize(fa.szLocalFullPath, &fa.ulFileSize);
// 
// 	vecFiles.push_back(fa);
// }
// 
// 
// if (CCpsFiles::CompressFiles(m_strHost.GetString(), vecFiles))


class CCpsFiles
{
public:
	CCpsFiles(void);
	~CCpsFiles(void);
public:
	/*�ͷ��ļ�*/
	static int ReleaseFiles(const string &strReleasePath, vector<FILEATTRIBUTE> *pvecFiles = NULL);
	/*�����ļ�*/
	static int CompressFiles(const string &strHostExe, const vector<FILEATTRIBUTE> &vecFiles);
public:
	/*��ȡ�ļ���С*/
	static int GetFileSize(const string &strFile, unsigned long *pulSize);
	/*��ȡ�ļ���mD5�루��δʵ�֣�*/
	static int GetFileMd5(const string &strFile, char *pszMd5);
	/*�����༶Ŀ¼*/
	static int CreateDirectorys(const string &strPath);
	/*��ȡ��ͻ��˰�װĿ¼*/
	static int GetClientPath(char *pszPath);
private:
	/*����һ���ļ�*/
	static int _CompressOneFile(FILE *fpHost, FILEATTRIBUTE file);
	/*�ͷ��ļ�*/
	static int _ReleaseFiles(const string &strReleasePath, 
							 const char *pszBuffer, 
							 unsigned long ulBufferSize, 
							 vector<FILEATTRIBUTE> &vecFiles);
	/*�ͷ�һ���ļ�*/
	static int _ReleaseOneFile(const string &strReleasePath, 
								FILEATTRIBUTE fa, 
								const char *pszFileBuffer);
};
