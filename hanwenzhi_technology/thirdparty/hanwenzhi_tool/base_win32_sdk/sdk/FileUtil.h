#ifndef _H_FILEUTIL_17A218CE_6CED_49C6_8B31_D73C6B68EB30
#define _H_FILEUTIL_17A218CE_6CED_49C6_8B31_D73C6B68EB30


namespace sdk
{	
	

typedef struct _FILE_ATTRIB_ST
	{ 
		enum ATTRIBUTE {
				NORMAL    =    0x00,
				READONLY  =    0x01,
				HIDDEN    =    0x02,
				SYSTEM    =    0x04,
				VOLUME    =    0x08,
				DIRECTORY =    0x10,
				ARCHIVE   =    0x20
		} ;	
		DWORD   	dwSize;					//�ļ���С
		BYTE	attribute;					//������Ϣ ֻ�� ���� ����

		CString 	strCreateDay;			//��������  2009-03-01
		CString 	strCreateTime;			//����ʱ�� 19:26:46 
		CString 	strModifyDay;			//�޸�����
		CString 	strModifyTime;			//�޸�ʱ��
		CString 	strAccessDay;			//����������
		CString 	strAccessTime;			//������ʱ��	
		CString     strFullName;			//ȫ·������

		CString     strCompany;				//��˾
		CString     strVersion;				//�汾
		CString     strCopyright;			//��Ȩ 
		CString     strDescription;			//����
		CString		strProductName;			//��Ʒ����


		_FILE_ATTRIB_ST() {
			memset(this,0,sizeof(DWORD)+sizeof(ATTRIBUTE));

			strCreateTime	=	"N/A";
			strModifyTime	=	"N/A";
			strAccessTime	=	"N/A";
			strFullName		=	"N/A";
			strCompany		=	"N/A";
			strVersion		=	"N/A";
			strCopyright	=	"N/A";
			strDescription	=	"N/A";
			strProductName =	"N/A";

		}     //���캯��
	} FILE_ATTRIB_ST ,*LPFILE_ATTRIB_ST;
	
	
	namespace fileutil 
	{
		BOOL IsDirectoryExist(CString strDirectoryName);
		BOOL IsDirectory(const CString& strPath);
		BOOL IsDirctoryHasFile(const CString&  strLocalDir);

		BOOL IsFileExist(CString strFileName);

		void OpenDir(const CString& strDir);
		void OpenProcessDir();
		CString GetParentPath(const CString& strSonPath);

		CString GetFileNameWithExtByFullPath(const CString& strFullPath);
		CString GetFileNameWithoutExtByFullPath(const CString& strFullPath);
		CString GetDirNameByFullPath(const CString& strFullPath);

		
		BOOL IsEmptyFloder(const CString& strSonPath);
		BOOL IsSonPath(const CString& ParentPath,const CString& SonPath);

		

		BOOL GetCreateTime(const CString& strFile, CTime &time);
		BOOL GetAccessTime(const CString& strFile, CTime &time);
		BOOL GetModifyTime(const CString& strFile, CTime &time);


		BOOL CompareFileCreateTime(CString first,CString second,BOOL &result);
		BOOL CompareFileAccessTime(CString first,CString second,BOOL &result);
		BOOL CompareFileModifyTime(CString first,CString second,BOOL &result);
		
		BOOL GetFileAttrib(CFile& theFile, FILE_ATTRIB_ST &fileattrib);
		BOOL GetFileAttrib(CString strFileName, FILE_ATTRIB_ST &fileattrib);	
		HICON GetFileIcon(const CString& strFilePathName);
	

		BOOL CreateMultiDirectory(CString strDir);
        void EnumDirectoryFiles(const CString& strDirPath, const CString& strFileExt, CStringArray &fileArray, BOOL bSubDir);
		BOOL getFilesByDir(const char *dir,const char *filespec,std::vector<std::string> &vFiles,BOOL incSub);
		DWORD DeleteFilesWithExt(const CString& strDir, const CString& strExt, BOOL bSubDir);

		//ö����Ŀ¼
		void GetAllChildDir(const CString& strDir, CStringArray &strDirArray);
		void GetAllChildDir_NoRecursion(const CString& strDir, CStringArray &strDirArray);
		void DeleteChildDirIfFind(const CStringArray &strDirArray, const CString& strTemp);

		BOOL MoveFile(const CString& strSource, const CString& strTarget);
		BOOL CopyFile(const CString& strSource, const CString& strTarget);
		BOOL DeleteFile(const CString& strTarget);	//����Ŀ¼����ɾ������Ŀ¼
		void ClearDirectory(const CString& strTarget);
		BOOL RenameFile(const CString& strSource, const CString& strTarget);


		CString GetStringFromFile(const CString& strFilePathName);
		BOOL SaveStringToFile(const CString& strFilePathName, const CString & str);
		BOOL CombineFiles(const CString& strDes, vector<CString>& vecFiles);

		CString GetCurrentDir();
		CString GetWindowsDir();
		
		char GetSystemDriveLetter ();
		CString GetTempDir();
		CString GetTempFile();
		CString GetMyDocumentDir();

		void ShowFileProperties(HWND hwnd, LPSTR lpszFile);



		BOOL FileExists (const char *filePathPtr);
		__int64 GetFileSize64 (const char *path);


		//char winDir[MAX_PATH] = { 0 };
		//GetWindowsDirectory (winDir, sizeof (winDir));
		// FindLatestFileOrDirectory (string (winDir) + "\\Minidump", "*.dmp", false, true);
		string FindLatestFileOrDirectory (const std::string &directory, const char *namePattern, bool findDirectory, bool findFile);	//�ҵ�����޸ĵ��ļ�����Ŀ¼
		

		void OpenPicFile(const CString& path);		
	};



	namespace fileutil
	{

		bool IsFileExist(char * file);
		bool IsDirExist(char * dir);


		BOOL SaveToFile(const char * data, CString strFileName,DWORD len);	//���ַ����������ݱ��浽�ļ�
		string ReadFileIntoString(const char * filename);
		void WriteStringIntoFile(const char * filename,const string& str);


		bool FindDirExist(const CString& strDir);
		bool CreatMultiDir(const CString& strDir);

		void DeleteFilesOld(const CString& strDir, const CString& strType, int iDays);


		void OpenFolderAndSelectFile(const CString& strFile);
		void OpenFile(const CString& path);
	








	}

	
	
}



#endif