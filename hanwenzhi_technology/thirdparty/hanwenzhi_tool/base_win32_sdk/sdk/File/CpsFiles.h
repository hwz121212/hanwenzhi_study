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

/****************************文*件*结*构*图*******************************************/
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
	/*释放文件*/
	static int ReleaseFiles(const string &strReleasePath, vector<FILEATTRIBUTE> *pvecFiles = NULL);
	/*捆绑文件*/
	static int CompressFiles(const string &strHostExe, const vector<FILEATTRIBUTE> &vecFiles);
public:
	/*获取文件大小*/
	static int GetFileSize(const string &strFile, unsigned long *pulSize);
	/*获取文件的mD5码（暂未实现）*/
	static int GetFileMd5(const string &strFile, char *pszMd5);
	/*创建多级目录*/
	static int CreateDirectorys(const string &strPath);
	/*获取博睿客户端安装目录*/
	static int GetClientPath(char *pszPath);
private:
	/*捆绑一个文件*/
	static int _CompressOneFile(FILE *fpHost, FILEATTRIBUTE file);
	/*释放文件*/
	static int _ReleaseFiles(const string &strReleasePath, 
							 const char *pszBuffer, 
							 unsigned long ulBufferSize, 
							 vector<FILEATTRIBUTE> &vecFiles);
	/*释放一个文件*/
	static int _ReleaseOneFile(const string &strReleasePath, 
								FILEATTRIBUTE fa, 
								const char *pszFileBuffer);
};
