#include "StdAfx.h"
#include "cpsfiles.h"
#include <Windows.h>
//#include <ShFolder.h>

CCpsFiles::CCpsFiles(void)
{
}

CCpsFiles::~CCpsFiles(void)
{
}

int CCpsFiles::GetFileSize(const string &strFile, unsigned long *pulSize)
{
	if (!pulSize) return -1;

	FILE *fp = fopen(strFile.c_str(), "rb");
	if (!fp) return -1;

	fseek(fp, 0L, SEEK_END);
	*pulSize = ftell(fp);
	fclose(fp);
	
	return 0;
}

int CCpsFiles::GetFileMd5(const string &strFile, char *pszMd5)
{
	return 0;
}

int CCpsFiles::CompressFiles(const string &strHostExe, const vector<FILEATTRIBUTE> &vecFiles)
{
	size_t i=0;
	int nRet=0;
	unsigned long ulTotalSize = 0;
	if (vecFiles.empty()) return 0;

	FILE *fpHost = fopen(strHostExe.c_str(), "ab+");
	if (!fpHost) return -1;
	fseek(fpHost, 0L, SEEK_END);

	for (i=0; i<vecFiles.size(); i++)
	{
		if (_CompressOneFile(fpHost, vecFiles[i]))
		{
			nRet = -1;
			break;
		}
		ulTotalSize += (vecFiles[i].ulFileSize + sizeof(FILEATTRIBUTE));
	}

	fwrite(&ulTotalSize, 1, sizeof(unsigned long), fpHost);
	fclose(fpHost);
	fpHost = NULL;

	return nRet;
}

int CCpsFiles::_CompressOneFile(FILE *fpHost, FILEATTRIBUTE file)
{
	if (!fpHost) return -1;
	
	FILE *fpClient = fopen(file.szLocalFullPath, "rb");
	if (!fpClient) return -1;
	char *pszBuffer = new char[file.ulFileSize];
	ZeroMemory(pszBuffer, file.ulFileSize);
	fread(pszBuffer, 1, file.ulFileSize, fpClient);
	fclose(fpClient);
	fpClient = NULL;

	ZeroMemory(file.szLocalFullPath, sizeof(file.szLocalFullPath));
	fwrite(&file, 1, sizeof(file), fpHost);		  //write atrribute
	fwrite(pszBuffer, 1, file.ulFileSize, fpHost);//write pe

	delete [] pszBuffer;
	pszBuffer = NULL;

	return 0;
}

int CCpsFiles::ReleaseFiles(const string &strReleasePath, vector<FILEATTRIBUTE> *pvecFiles /* = NULL */)
{
	FILE *fpHost = fopen(_pgmptr, "rb");
	if (!fpHost) return -1;

	fseek(fpHost, -sizeof(unsigned long), SEEK_END);
	
	unsigned long ulTotalSize = 0;
	fread(&ulTotalSize, 1, sizeof(unsigned long), fpHost);

	fseek(fpHost, -(sizeof(unsigned long)+ulTotalSize), SEEK_END);

	char *pszBuffer = new char[ulTotalSize];
	ZeroMemory(pszBuffer, ulTotalSize);
	fread(pszBuffer, 1, ulTotalSize, fpHost);

	fclose(fpHost);

	vector<FILEATTRIBUTE> vecTemp;
		
	int nRet = _ReleaseFiles(strReleasePath, pszBuffer, ulTotalSize, vecTemp);

	if (!nRet && pvecFiles != NULL)
	{
		int i=0;
		for (i=0; i<vecTemp.size(); i++)
		{
			pvecFiles->push_back(vecTemp[i]);
		}
	}
	delete [] pszBuffer;
	pszBuffer = NULL;

	return 0;
}

int CCpsFiles::CreateDirectorys(const string &strPath)
{
	int iStart = 3;//从c:\开始查找
	int iEnd = 0;

	while(-1 != (iEnd = strPath.find('\\', iStart)))
	{
		iStart = iEnd + 1;
		CreateDirectory(strPath.substr(0, iEnd).c_str(), NULL);
	}
	CreateDirectory(strPath.c_str(), NULL);

	return 0;
}

int CCpsFiles::_ReleaseOneFile(const string &strReleasePath, FILEATTRIBUTE fa, const char *pszFileBuffer)
{
	char szFile[256] = {0};

	CreateDirectorys(strReleasePath.c_str());
	sprintf(szFile, "%s\\%s", strReleasePath.c_str(), fa.szFileName);
	
	FILE *fp = fopen(szFile, "wb");
	if (!fp) return -1;
	fwrite(pszFileBuffer, 1, fa.ulFileSize, fp);
	fclose(fp);

	return 0;
}

int CCpsFiles::_ReleaseFiles(const string &strReleasePath, 
							 const char *pszBuffer, 
							 unsigned long ulBufferSize, 
							 vector<FILEATTRIBUTE> &vecFiles)
{
	int offset = 0;
	int nRet = 0;
	while(offset < ulBufferSize)
	{
		FILEATTRIBUTE fa;
		memcpy(&fa, pszBuffer+offset, sizeof(FILEATTRIBUTE));
		offset += sizeof(FILEATTRIBUTE);
		vecFiles.push_back(fa);
		
		if (nRet = _ReleaseOneFile(strReleasePath, fa, pszBuffer+offset)) break;
		offset += fa.ulFileSize;
	}

	return nRet;
}

int CCpsFiles::GetClientPath(char *pszPath)
{
	return -1;
// 	OSVERSIONINFOEX osvi;
// 	BOOL bOsVersionInfoEx;
// 
// 	ZeroMemory(&osvi, sizeof(OSVERSIONINFOEX));
// 	osvi.dwOSVersionInfoSize = sizeof(OSVERSIONINFOEX);
// 
// 	if (!(bOsVersionInfoEx = GetVersionEx((OSVERSIONINFO *)&osvi)))
// 	{
// 		osvi.dwOSVersionInfoSize = sizeof (OSVERSIONINFO);
// 		if (!GetVersionEx((OSVERSIONINFO *)&osvi)) return -1;
// 	}
// 
// 	int nClsId = osvi.dwMajorVersion > 5 ? CSIDL_COMMON_APPDATA : CSIDL_PROGRAM_FILES;
// 
// 	return FAILED(SHGetFolderPath(NULL, nClsId, NULL, 0, pszPath)) ? -1 : 0;
}
