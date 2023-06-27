#include "stdafx.h"
#include "FileUtil.h"

#include <io.h>
#include <direct.h> 
#include <sstream>
#include <string>
#include <fstream>
using namespace std;

#pragma comment(lib,"Version.lib")
namespace sdk
{
	
	namespace fileutil
	{
		BOOL GetFileAttrib(CFile &theFile, FILE_ATTRIB_ST &fileattrib)
		{
			return GetFileAttrib(theFile.GetFilePath(), fileattrib);
		}

		BOOL GetFileAttrib(CString strFileName, FILE_ATTRIB_ST & fileattrib)
		{
			if (!IsFileExist(strFileName))
			{
				return FALSE;
			}

			CFileStatus rStatus;
			if (FALSE == CFile::GetStatus(strFileName, rStatus))
			{
				TRACE(_T("CFile::GetStatus 调用错误 未能取得文件属性"));
				return FALSE;
			}

			fileattrib.dwSize = static_cast<DWORD>(rStatus.m_size);

			fileattrib.strAccessDay = rStatus.m_atime.Format("%Y-%m-%d");
			fileattrib.strAccessTime = rStatus.m_atime.Format("%H:%M:%S");

			fileattrib.strCreateDay = rStatus.m_ctime.Format("%Y-%m-%d");
			fileattrib.strCreateTime = rStatus.m_ctime.Format("%H:%M:%S");

			fileattrib.strModifyDay = rStatus.m_mtime.Format("%Y-%m-%d");
			fileattrib.strModifyTime = rStatus.m_mtime.Format("%H:%M:%S");

			fileattrib.strFullName = rStatus.m_szFullName;
			fileattrib.attribute = rStatus.m_attribute;

			/////////////////////////////////////////////////////////////////////////
			DWORD dwSize = 0;
			UINT uiSize = GetFileVersionInfoSize(rStatus.m_szFullName, &dwSize);
			if (0 == uiSize)
			{
				TRACE(_T("GetFileVersionInfoSize返回0 不能取得文件版本信息"));
				//这个文件没有相关版本信息 可以直接返回 能够得到的信息
				return TRUE;
			}
			struct LANGANDCODEPAGE {
				WORD wLanguage;
				WORD wCodePage;
			} *lpTranslate = 0;

			TCHAR *pBuffer = new TCHAR[uiSize];
			if (NULL == pBuffer)
			{
				TRACE(_T("未能取得足够的堆空间错误"));
				return FALSE;
			}
			memset(pBuffer, 0, uiSize);

			if (0 == GetFileVersionInfo(rStatus.m_szFullName, 0, uiSize, pBuffer))
			{
				TRACE(_T("GetFileVersionInfo 取文件版本信息错误误"));
				return FALSE;
			}
			LANGANDCODEPAGE *pLanguage = NULL;
			UINT  cbTranslate = 0;

			if (VerQueryValue(pBuffer, _T("\\VarFileInfo\\Translation"), (PVOID*)&pLanguage, &cbTranslate) == 0)
				return FALSE;

			PVOID pTmp = NULL;
			TCHAR SubBlock[MAX_PATH];
			memset(SubBlock, 0, sizeof(SubBlock));

			UINT i = 0;
			wsprintf(SubBlock,
				TEXT("\\StringFileInfo\\%04x%04x\\FileVersion"),
				pLanguage[i].wLanguage,
				pLanguage[i].wCodePage);
			VerQueryValue(pBuffer,
				SubBlock,
				(PVOID*)&pTmp,
				&cbTranslate);
			fileattrib.strVersion = (TCHAR*)pTmp;

			wsprintf(SubBlock,
				TEXT("\\StringFileInfo\\%04x%04x\\CompanyName"),
				pLanguage[i].wLanguage,
				pLanguage[i].wCodePage);
			VerQueryValue(pBuffer,
				SubBlock,
				(PVOID*)&pTmp,
				&cbTranslate);
			fileattrib.strCompany = (TCHAR*)pTmp;

			wsprintf(SubBlock,
				TEXT("\\StringFileInfo\\%04x%04x\\FileDescription"),
				pLanguage[i].wLanguage,
				pLanguage[i].wCodePage);
			VerQueryValue(pBuffer,
				SubBlock,
				(PVOID*)&pTmp,
				&cbTranslate);
			fileattrib.strDescription = (TCHAR*)pTmp;

			wsprintf(SubBlock,
				TEXT("\\StringFileInfo\\%04x%04x\\LegalCopyright"),
				pLanguage[i].wLanguage,
				pLanguage[i].wCodePage);
			VerQueryValue(pBuffer,
				SubBlock,
				(PVOID*)&pTmp,
				&cbTranslate);
			fileattrib.strCopyright = (TCHAR*)pTmp;

			wsprintf(SubBlock,
				TEXT("\\StringFileInfo\\%04x%04x\\ProductName"),
				pLanguage[i].wLanguage,
				pLanguage[i].wCodePage);
			VerQueryValue(pBuffer,
				SubBlock,
				(PVOID*)&pTmp,
				&cbTranslate);
			fileattrib.strProductName = (TCHAR*)pTmp;

			if (pBuffer != 0)
			{
				delete[]pBuffer;
			}
			pBuffer = NULL;

			return TRUE;
		}

		BOOL GetCreateTime(const CString& strFile, CTime &time)
		{
			ASSERT(TRUE == IsFileExist(strFile));

			CFileStatus fileStatus;
			if (FALSE == CFile::GetStatus((LPCTSTR)strFile, fileStatus))
			{
				TRACE(_T("CFile::GetStatus 调用错误 未能取得文件属性"));
				return FALSE;
			}

			time = CTime(fileStatus.m_ctime);
			return TRUE;
		}

		BOOL GetAccessTime(const CString& strFile, CTime &time)
		{
			ASSERT(TRUE == IsFileExist(strFile));

			CFileStatus fileStatus;
			if (FALSE == CFile::GetStatus((LPCTSTR)strFile, fileStatus))
			{
				TRACE(_T("CFile::GetStatus 调用错误 未能取得文件属性"));
				return FALSE;
			}

			time = CTime(fileStatus.m_atime);
			return TRUE;
		}

		BOOL GetModifyTime(const CString& strFile, CTime &time)
		{
			ASSERT(TRUE == IsFileExist(strFile));

			CFileStatus fileStatus;
			if (FALSE == CFile::GetStatus((LPCTSTR)strFile, fileStatus))
			{
				TRACE(_T("CFile::GetStatus 调用错误 未能取得文件属性"));
				return FALSE;
			}

			time = CTime(fileStatus.m_mtime);
			return TRUE;
		}

		BOOL CompareFileCreateTime(CString first, CString second, BOOL &result)
		{

			ASSERT(TRUE == IsFileExist(first));
			ASSERT(TRUE == IsFileExist(second));

			CFileStatus firstStatus, secondStatus;

			if (FALSE == CFile::GetStatus((LPCTSTR)first, firstStatus))
			{
				TRACE(_T("CFile::GetStatus 调用错误 未能取得文件属性"));
				return FALSE;
			}
			if (FALSE == CFile::GetStatus((LPCTSTR)second, secondStatus))
			{
				TRACE(_T("CFile::GetStatus 调用错误 未能取得文件属性"));
				return FALSE;
			}

			result = firstStatus.m_ctime < secondStatus.m_ctime;
			return TRUE;
		}

		BOOL CompareFileAccessTime(CString first, CString second, BOOL &result)
		{

			ASSERT(TRUE == IsFileExist(first));
			ASSERT(TRUE == IsFileExist(second));

			CFileStatus firstStatus, secondStatus;

			if (FALSE == CFile::GetStatus((LPCTSTR)first, firstStatus))
			{
				TRACE(_T("CFile::GetStatus 调用错误 未能取得文件属性"));
				return FALSE;
			}
			if (FALSE == CFile::GetStatus((LPCTSTR)second, secondStatus))
			{
				TRACE(_T("CFile::GetStatus 调用错误 未能取得文件属性"));
				return FALSE;
			}
			result = firstStatus.m_atime < secondStatus.m_atime;
			return TRUE;
		}

		BOOL CompareFileModifyTime(CString first, CString second, BOOL &result)
		{
			ASSERT(TRUE == IsFileExist(first));
			ASSERT(TRUE == IsFileExist(second));


			CFileStatus firstStatus, secondStatus;

			if (FALSE == CFile::GetStatus((LPCTSTR)first, firstStatus))
			{
				TRACE(_T("CFile::GetStatus 调用错误 未能取得文件属性"));
				return FALSE;
			}
			if (FALSE == CFile::GetStatus((LPCTSTR)second, secondStatus))
			{
				TRACE(_T("CFile::GetStatus 调用错误 未能取得文件属性"));
				return FALSE;
			}
			result = firstStatus.m_mtime < secondStatus.m_mtime;
			return TRUE;
		}

		BOOL IsFileExist(CString strFileName)
		{
			BOOL bReturn = FALSE;
			WIN32_FIND_DATA FindFileData;
			HANDLE hFind;
			hFind = ::FindFirstFile(strFileName, &FindFileData);
			if (hFind != INVALID_HANDLE_VALUE)
			{
				if (FindFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
				{
					//目录
				}
				else
				{
					//文件
					bReturn = TRUE;
				}
				FindClose(hFind);
			}
			return bReturn;
		}

		BOOL IsDirectoryExist(CString strDirectoryName)
		{
			BOOL bReturn = FALSE;
			if (PathFileExists((LPCTSTR)strDirectoryName) == 1)
			{
				bReturn = TRUE;
			}
			return bReturn;
		}

		BOOL IsDirectory(const CString& strPath)
		{
			BOOL bReturn = FALSE;
			DWORD dwAttr = ::GetFileAttributes(strPath);
			if (dwAttr&FILE_ATTRIBUTE_DIRECTORY)
			{
				bReturn = TRUE;
			}
			return bReturn;
		}

		void OpenDir(const CString& strDir)
		{
			if (!IsDirectory(strDir))
				return;
			ShellExecute(NULL, _T("open"), strDir, NULL, NULL, SW_MAXIMIZE);
		}

		CString GetParentPath(const CString& strSonPath)
		{
			TCHAR buf[MAX_PATH] = { 0 };
			_tcscpy(buf, (LPCTSTR)strSonPath);
			TCHAR * szSplit = "\\";
			TCHAR * p = buf, *q = buf;
			while (p = strstr(p, szSplit))
			{
				p += 1;
				q = p;
			}
			q -= 1;
			ZeroMemory(q, (buf + MAX_PATH - q));
			CString strParentPath(buf);
			return strParentPath;
		}

		BOOL IsEmptyFloder(const CString& strSonPath)
		{
			BOOL bIsEmpty = TRUE;
			CFileFind finder;
			CString path(strSonPath);
			path += _T("\\*.*");
			BOOL bFind = finder.FindFile(path);
			while (bFind)
			{
				bFind = finder.FindNextFile();
				if (finder.IsDots() == FALSE)
				{
					bIsEmpty = FALSE;
					break;
				}
			}
			return bIsEmpty;
		}


		BOOL IsSonPath(const CString& ParentPath, const CString& SonPath)
		{
			if (SonPath == ParentPath)
				return FALSE;
			CString strTemp(ParentPath);
			strTemp += "\\";
			if (SonPath.Find(strTemp) != 0)
				return FALSE;
			if (SonPath.Find('\\', strTemp.GetLength()) == -1)
				return TRUE;

			return FALSE;
		}

		BOOL CreateMultiDirectory(CString strDir)
		{
			HANDLE			fFile;				// File Handle
			WIN32_FIND_DATA fileinfo;			// File Information Structure
			CStringArray	m_arr;				// CString Array to hold Directory Structures
			BOOL tt;							// BOOL used to test if Create Directory was successful
			int x1 = 0;							// Counter
			CString tem = "";					// Temporary CString Object

			// Before we go to a lot of work.  
			// Does the file exist

			fFile = FindFirstFile(strDir, &fileinfo);

			// if the file exists and it is a directory
			if (fileinfo.dwFileAttributes == FILE_ATTRIBUTE_DIRECTORY)
			{
				// Directory Exists close file and return
				FindClose(fFile);
				return TRUE;
			}

			m_arr.RemoveAll();					// Not really necessary - Just habit
			for (x1 = 0; x1 < strDir.GetLength(); x1++)	// Parse the supplied CString Directory String
			{
				if (strDir.GetAt(x1) != '\\')		// if the Charachter is not a \ 
					tem += strDir.GetAt(x1);		// else add character to Temp String
				else
				{
					m_arr.Add(tem);				// if the Character is a \ Add the Temp String to the CString Array
					tem += "\\";				// Now add the \ to the temp string
				}
				if (x1 == strDir.GetLength() - 1)		// If we reached the end of the file add the remaining string
					m_arr.Add(tem);
			}
			// Close the file
			FindClose(fFile);

			// Now lets cycle through the String Array and create each directory in turn
			for (x1 = 1; x1 < m_arr.GetSize(); x1++)
			{
				tem = m_arr.GetAt(x1);
				tt = CreateDirectory(tem, NULL);

				// If the Directory exists it will return a false
				if (tt)
					SetFileAttributes(tem, FILE_ATTRIBUTE_NORMAL);
				// If we were successful we set the attributes to normal
			}
			m_arr.RemoveAll();
			//  Now lets see if the directory was successfully created
			fFile = FindFirstFile(strDir, &fileinfo);

			// if the file exists and it is a directory
			if (fileinfo.dwFileAttributes == FILE_ATTRIBUTE_DIRECTORY)
			{
				//  Directory Exists close file and return
				FindClose(fFile);
				return TRUE;
			}
			else
			{
				FindClose(fFile);
				return FALSE;
			}
		}

		HICON GetFileIcon(const CString& strFilePathName)
		{
			SHFILEINFO    shfi;
			memset(&shfi, 0, sizeof(shfi));
			SHGetFileInfo(strFilePathName, FILE_ATTRIBUTE_NORMAL, &shfi, sizeof(SHFILEINFO), SHGFI_ICON);
			return shfi.hIcon;
		}

		void EnumDirectoryFiles(const CString& strDirPath, const CString& strFileExt, CStringArray &fileArray, BOOL bSubDir)
		{
			CFileFind finder;

			CString strTargetDir;
			strTargetDir.Format("%s\\%s", strDirPath, strFileExt);

			BOOL IsFinded = (BOOL)finder.FindFile(strTargetDir);
			while (IsFinded)
			{
				IsFinded = (BOOL)finder.FindNextFile();
				if (!finder.IsDots())
				{
					if (finder.IsDirectory())
					{
						if (bSubDir)
						{
							CString strNewDir;
							strNewDir.Format("%s\\%s", strDirPath, finder.GetFileName());
							EnumDirectoryFiles(strNewDir, strFileExt, fileArray, bSubDir);
						}
					}
					else {
						fileArray.Add(finder.GetFilePath());
					}
				}
			}
			finder.Close();
		}

		DWORD DeleteFilesWithExt(const CString& strDir, const CString& strExt, BOOL bSubDir)
		{
			DWORD dwNums = 0;
			CStringArray arr;
			EnumDirectoryFiles(strDir, strExt, arr, bSubDir);
			for (int iTemp = 0; iTemp < arr.GetSize(); iTemp++)
			{
				DeleteFile(arr[iTemp]);
			}
			dwNums += arr.GetSize();
			return dwNums;
		}


		void GetAllChildDir(const CString& strDir, CStringArray &strDirArray)
		{
			CFileFind finder;
			BOOL isNotEmpty = finder.FindFile(strDir + _T("/*.*"));//总文件夹，开始遍历 
			while (isNotEmpty)
			{
				isNotEmpty = finder.FindNextFile();				
				if (finder.IsDirectory() &&
					!finder.IsDots() )
				{
					CString filename = finder.GetFilePath();
					strDirArray.Add(filename);

					GetAllChildDir(filename + _T("/"), strDirArray);
				}

			}
		}

		void GetAllChildDir_NoRecursion(const CString& strDir, CStringArray &strDirArray)
		{

			CFileFind finder;
			BOOL isNotEmpty = finder.FindFile(strDir + _T("/*.*"));//总文件夹，开始遍历 
			while (isNotEmpty)
			{
				isNotEmpty = finder.FindNextFile();
				if (finder.IsDirectory() &&
					!finder.IsDots())
				{
					CString filename = finder.GetFilePath();
					strDirArray.Add(filename);

					//GetAllChildDir(filename + _T("/"), strDirArray);
				}

			}
		}

		void DeleteChildDirIfFind(const CStringArray &strDirArray, const CString& strTemp)
		{
			for (int iTemp = 0; iTemp < strDirArray.GetSize(); iTemp++)
			{
				CString strTemp1 = strDirArray[iTemp];
				CString strTempRight = strTemp1.Right(10);
				if (strTempRight.Find(strTemp) > -1)
				{
					DeleteFile(strTemp1);
				}
			}
		}


		BOOL MoveFile(const CString& strSource, const CString& strTarget)
		{
			BOOL bReturn = FALSE;
			TCHAR szSrc[MAX_PATH];
			strcpy(szSrc, strSource);
			szSrc[strSource.GetLength()] = '\0';
			szSrc[strSource.GetLength() + 1] = '\0';

			TCHAR szDst[MAX_PATH];
			strcpy(szDst, strTarget);
			szDst[strTarget.GetLength()] = '\0';
			szDst[strTarget.GetLength() + 1] = '\0';

			SHFILEOPSTRUCT FileOp;
			ZeroMemory((void*)&FileOp, sizeof(SHFILEOPSTRUCT));
			FileOp.hwnd = NULL;
			FileOp.wFunc = FO_MOVE;
			FileOp.pFrom = szSrc;
			FileOp.pTo = szDst;
			FileOp.fFlags = FOF_SILENT | FOF_NOCONFIRMATION | FOF_NOCONFIRMMKDIR;

			int iReturn = SHFileOperation(&FileOp);
			if (iReturn == ERROR_SUCCESS)
			{
				bReturn = TRUE;
			}

			return bReturn;
		}

		BOOL CopyFile(const CString& strSource, const CString& strTarget)
		{
			BOOL bReturn = FALSE;
			TCHAR szSrc[MAX_PATH];
			strcpy(szSrc, strSource);
			szSrc[strSource.GetLength()] = '\0';
			szSrc[strSource.GetLength() + 1] = '\0';

			TCHAR szDst[MAX_PATH];
			strcpy(szDst, strTarget);
			szDst[strTarget.GetLength()] = '\0';
			szDst[strTarget.GetLength() + 1] = '\0';

			SHFILEOPSTRUCT FileOp;
			ZeroMemory((void*)&FileOp, sizeof(SHFILEOPSTRUCT));
			FileOp.hwnd = NULL;
			FileOp.wFunc = FO_COPY;
			FileOp.pFrom = szSrc;
			FileOp.pTo = szDst;
			FileOp.fFlags = FOF_SILENT | FOF_NOCONFIRMATION | FOF_NOCONFIRMMKDIR;

			int iReturn = SHFileOperation(&FileOp);
			if (iReturn == ERROR_SUCCESS)
			{
				bReturn = TRUE;
			}

			return bReturn;
		}

		BOOL DeleteFile(const CString& strTarget)
		{
			BOOL bReturn = FALSE;
			TCHAR szDelItem[MAX_PATH];
			SHFILEOPSTRUCT FileOp;

			strcpy(szDelItem, strTarget);
			szDelItem[strTarget.GetLength()] = '\0';
			szDelItem[strTarget.GetLength() + 1] = '\0';

			ZeroMemory((void*)&FileOp, sizeof(SHFILEOPSTRUCT));
			FileOp.hwnd = NULL;
			FileOp.wFunc = FO_DELETE;
			FileOp.pFrom = szDelItem;
			FileOp.pTo = NULL;
			FileOp.fFlags = FOF_SILENT | FOF_NOCONFIRMATION | FOF_NOCONFIRMMKDIR;

			if (SHFileOperation(&FileOp) == ERROR_SUCCESS)
			{
				bReturn = TRUE;
			}

			return bReturn;
		}

		void ClearDirectory(const CString& strTarget)
		{
			DeleteFilesWithExt(strTarget, _T("*"), TRUE);
		}

		BOOL RenameFile(const CString& strSource, const CString& strTarget)
		{
			BOOL bReturn = FALSE;
			TCHAR szSrc[MAX_PATH];
			strcpy(szSrc, strSource);
			szSrc[strSource.GetLength()] = '\0';
			szSrc[strSource.GetLength() + 1] = '\0';

			TCHAR szDst[MAX_PATH];
			strcpy(szDst, strTarget);
			szDst[strTarget.GetLength()] = '\0';
			szDst[strTarget.GetLength() + 1] = '\0';

			SHFILEOPSTRUCT FileOp;
			ZeroMemory((void*)&FileOp, sizeof(SHFILEOPSTRUCT));
			FileOp.hwnd = NULL;
			FileOp.pFrom = szSrc;
			FileOp.pTo = szDst;
			FileOp.fFlags = FOF_SILENT | FOF_NOCONFIRMATION | FOF_NOCONFIRMMKDIR;
			FileOp.wFunc = FO_RENAME;

			int iStatus;
			iStatus = SHFileOperation(&FileOp);
			if (iStatus == ERROR_SUCCESS || iStatus == ERROR_FILE_NOT_FOUND)
			{
				bReturn = TRUE;
			}

			return bReturn;
		}

		CString GetStringFromFile(const CString& strFilePathName)
		{
			CString strReturn = "";
			CFile openfile(strFilePathName, CFile::modeRead);
			int length = openfile.GetLength();
			int iLen = length + 2;
			char *strText = new char[iLen];
			memset(strText, 0, iLen);
			openfile.Read(strText, length);
			openfile.Close();
			strReturn = (CString)strText;
			delete[] strText;
			return strReturn;
		}

		BOOL SaveStringToFile(const CString& strFilePathName, const CString & str)
		{
			BOOL bSaveOk = FALSE;

			CFile file;
			if (!file.Open(strFilePathName, CFile::modeCreate | CFile::modeWrite))
			{
				bSaveOk = FALSE;
			}
			else
			{
				file.Write((LPTSTR)(LPCTSTR)str, str.GetLength());
				file.Close();
				bSaveOk = TRUE;
			}

			return bSaveOk;
		}


		CString GetCurrentDir()
		{
			CString str;
			GetCurrentDirectory(MAX_PATH, (LPTSTR)(LPCTSTR)str);
			return str;
		}

		CString GetWindowsDir()
		{
			CString str;
			GetWindowsDirectory((LPTSTR)(LPCTSTR)str, MAX_PATH);
			return str;
		}


		// Returns 0 if an error occurs or the drive letter (as an upper-case char) of the system partition (e.g. 'C');
		char GetSystemDriveLetter()
		{
			char systemDir[MAX_PATH];
			if (GetSystemDirectory(systemDir, sizeof(systemDir)))
				return (char)(toupper(systemDir[0]));
			else
				return 0;
		}







		CString GetTempDir()
		{
			CString str;
			::GetTempPath(MAX_PATH, (LPTSTR)(LPCTSTR)str);
			return str;
		}

		CString GetTempFile()
		{
			CString strFile;
			CString strDir = GetTempDir();
			GetTempFileName(strDir, _T("~mytemp"), 0, (LPTSTR)(LPCTSTR)strFile);
			return strFile;
		}

		CString GetMyDocumentDir()
		{
			char szPath[MAX_PATH];
			SHGetFolderPath(NULL, CSIDL_MYDOCUMENTS, NULL, 0, szPath);
			return CString(szPath);
		}

		void OpenProcessDir()
		{
			CString str = CProcessUtil::GetExeDir();
			ShellExecute(NULL, _T("open"), (LPCTSTR)str, NULL, NULL, SW_MAXIMIZE);
		}

		void ShowFileProperties(HWND hwnd, LPSTR lpszFile)
		{
			SHELLEXECUTEINFO ShExecInfo = { 0 };

			ShExecInfo.cbSize = sizeof(SHELLEXECUTEINFO);
			ShExecInfo.fMask = SEE_MASK_INVOKEIDLIST;
			ShExecInfo.hwnd = hwnd;
			ShExecInfo.lpVerb = "properties";
			ShExecInfo.lpFile = lpszFile;
			ShExecInfo.lpParameters = "";
			ShExecInfo.lpDirectory = NULL;
			ShExecInfo.nShow = SW_SHOW;
			ShExecInfo.hInstApp = NULL;
			ShellExecuteEx(&ShExecInfo);
		}




		CString GetFileNameWithExtByFullPath(const CString& strFullPath)
		{
			CString strName = PathFindFileName((LPCTSTR)strFullPath);
			return strName;
		}


		CString GetFileNameWithoutExtByFullPath(const CString& strFullPath)
		{
			CString strName = GetFileNameWithExtByFullPath(strFullPath);
			strName = strName.Left(strName.ReverseFind('.'));
			return strName;
		}

		CString GetDirNameByFullPath(const CString& strFullPath)
		{
			CString strName = strFullPath;
			int iPos1 = strName.ReverseFind('\\');
			CString strName1 = strName.Left(iPos1);
			int iPos2 = strName1.ReverseFind('\\');
			CString strName2 = strName1.Left(iPos2);
			strName1.Replace(strName2, "");
			strName1.Replace("\\", "");
			return strName1;
		}


		BOOL IsDirctoryHasFile(const CString&  strLocalDir)
		{
			CString strWildcard = strLocalDir;
			strWildcard += _T("\\*.*");

			CFileFind   finder;
			BOOL   bWorking = finder.FindFile(strWildcard);
			while (bWorking)
			{
				bWorking = finder.FindNextFile();
				if (finder.IsDots())
				{
					continue;
				}

				if (finder.IsDirectory())
				{
					CString csNewPath = finder.GetFilePath();
					if (IsDirctoryHasFile(csNewPath))
					{
						return TRUE;
					}
				}

				return TRUE;
			}

			return FALSE;
		}


		// Returns TRUE if the file or directory exists (both may be enclosed in quotation marks).
		BOOL FileExists(const char *filePathPtr)
		{
			char filePath[MAX_PATH];

			// Strip quotation marks (if any)
			if (filePathPtr[0] == '"')
			{
				strcpy(filePath, filePathPtr + 1);
			}
			else
			{
				strcpy(filePath, filePathPtr);
			}

			// Strip quotation marks (if any)
			if (filePath[strlen(filePath) - 1] == '"')
				filePath[strlen(filePath) - 1] = 0;

			return (_access(filePath, 0) != -1);
		}



		// Returns -1 if there is an error, or the size of the file.
		__int64 GetFileSize64(const char *path)
		{
			HANDLE h = CreateFile(path, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, NULL);
			LARGE_INTEGER size;

			if (h == INVALID_HANDLE_VALUE)
				return -1;

			if (GetFileSizeEx(h, &size) == 0)
				return -1;

			CloseHandle(h);

			return size.QuadPart;
		}


		BOOL CombineFiles(const CString& strDes, vector<CString>& vecFiles)
		{
			CString strFinalContent = "";
			for (int index = 0; index < vecFiles.size(); index++)
			{
				CString strFile = vecFiles[index];
				CString strFileContent = GetStringFromFile(strFile);
				strFinalContent = strFinalContent + strFileContent;		// + "\r\n";
			}

			return SaveStringToFile(strDes, strFinalContent);
		}




		std::string FindLatestFileOrDirectory(const std::string &directory, const char *namePattern, bool findDirectory, bool findFile)
		{
			string name;
			ULARGE_INTEGER latestTime;
			latestTime.QuadPart = 0;
			WIN32_FIND_DATA findData;

			HANDLE find = FindFirstFile((directory + "\\" + namePattern).c_str(), &findData);
			if (find != INVALID_HANDLE_VALUE)
			{
				do
				{
					if (strcmp(findData.cFileName, ".") == 0 || strcmp(findData.cFileName, "..") == 0)
						continue;

					ULARGE_INTEGER writeTime;
					writeTime.LowPart = findData.ftLastWriteTime.dwLowDateTime;
					writeTime.HighPart = findData.ftLastWriteTime.dwHighDateTime;

					if ((!findFile && !(findData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
						|| (!findDirectory && (findData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)))
						continue;

					if (latestTime.QuadPart < writeTime.QuadPart)
					{
						latestTime = writeTime;
						name = findData.cFileName;
					}
				} while (FindNextFile(find, &findData));

				FindClose(find);
			}

			if (name.empty())
				return name;

			return string(directory) + "\\" + name;
		}


		//根据给定的目录，和筛选条件，返回所有的文件名称
		BOOL getFilesByDir(const char *dir, const char *filespec, std::vector<std::string> &vFiles, BOOL incSub)
		{

			char *temPath = new char[MAX_PATH];
			GetCurrentDirectory(MAX_PATH, temPath);
			_chdir(dir);

			//首先查找dir中符合要求的文件
			long hFile;
			_finddata_t fileinfo;
			if ((hFile = _findfirst(filespec, &fileinfo)) != -1)
			{
				do
				{
					//检查是不是目录
					//如果不是,则进行处理
					if (!(fileinfo.attrib & _A_SUBDIR))
					{
						std::string temP = dir;
						temP += fileinfo.name;
						//::MessageBox (NULL,fileinfo.name,"Path",MB_OK);
						//::MessageBox (NULL,temP.c_str(),"Path",MB_OK);
						vFiles.push_back(temP);

					}
				} while (_findnext(hFile, &fileinfo) == 0);
				_findclose(hFile);
			}
			if (!incSub) {
				_chdir(temPath);
				delete[] temPath;
				return true;
			}
			//查找dir中的子目录
			//因为在处理dir中的文件时，派生类的ProcessFile有可能改变了
			//当前目录，因此还要重新设置当前目录为dir。
			//执行过_findfirst后，可能系统记录下了相关信息，因此改变目录
			//对_findnext没有影响。
			_chdir(dir);
			if ((hFile = _findfirst("*.*", &fileinfo)) != -1)
			{
				do
				{
					//检查是不是目录
					//如果是,再检查是不是 . 或 .. 
					//如果不是,进行迭代
					if ((fileinfo.attrib & _A_SUBDIR))
					{
						if (strcmp(fileinfo.name, ".") != 0 && strcmp
						(fileinfo.name, "..") != 0)
						{
							char subdir[_MAX_PATH];
							strcpy(subdir, dir);
							strcat(subdir, fileinfo.name);
							strcat(subdir, "\\");
							//ProcessDir(subdir,dir);
							//::MessageBox (NULL,subdir,"Path",MB_OK);
							getFilesByDir(subdir, filespec, vFiles, incSub);
							// return false;
						}
					}
				} while (_findnext(hFile, &fileinfo) == 0);
				_findclose(hFile);
			}
			_chdir(temPath);
			delete[] temPath;
			return true;
		}

		void OpenPicFile(const CString& path)
		{
			CString sPicturePara = "shimgvw.dll ImageView_Fullscreen " + path;
			ShellExecute(NULL, NULL, "rundll32.exe", sPicturePara, "C:\\WINDOWS\\system32", SW_SHOW);
		}

	}


	namespace fileutil
	{

		//检查文件是否存在 hefw
		bool IsFileExist(char * file) 
		{
			bool r = false;
			if (_access(file, 0) != -1)
			{
				r = true;
			}
			return r;
		}


		bool IsDirExist(char * dir)  
		{  
			int ftyp = _access(dir, 0);  

			if (0 == ftyp)  
				return true;   // this is a directory!  
			else   
				return false;    // this is not a directory!  
		} 


		BOOL SaveToFile(const  char * data, CString strFileName,DWORD len)
		{
			HANDLE fh = CreateFile(strFileName, GENERIC_WRITE,  
				0, NULL, CREATE_ALWAYS,  
				FILE_ATTRIBUTE_NORMAL | FILE_FLAG_SEQUENTIAL_SCAN, NULL);    

			if (fh == INVALID_HANDLE_VALUE)  
				return FALSE;    
			DWORD dwWritten=0,dw =0;
			dw = WriteFile(fh, data, len, &dwWritten, NULL);    
			CloseHandle(fh);  
			return TRUE;
		}

		string ReadFileIntoString(const char * filename)  
		{  
			ifstream ifile(filename,  ios::binary); 			
			ostringstream buf;  
			char ch;  
			while(buf&&ifile.get(ch))  
				buf.put(ch);  			
			return buf.str();  
		}  

		void WriteStringIntoFile(const char * filename,const string& str)
		{
			ofstream fout(filename, ios::binary);
			//fout.open(filename);
			//fout<<str.c_str()<<endl;
			fout.write(str.c_str(),str.length());
			fout.close();
		}	

		bool FindDirExist(const CString& strDir)		
		{
			WIN32_FIND_DATA   fileinfo;   
			char   _szDir[_MAX_PATH];                                
			_tcscpy(_szDir, (LPTSTR)(LPCTSTR)strDir);                               
			int nLen  =  _tcsclen(_szDir);                            
			if((_szDir[nLen-1] == '\\') || (_szDir[nLen-1] == '/'))   
			{                                                         
				_szDir[nLen-1] = '\0';                                
			}                                                         
			HANDLE hFind  = ::FindFirstFile(_szDir,&fileinfo);        

			if(hFind == INVALID_HANDLE_VALUE)                         
			{                                                         
				return false;                                         
			}                                                         
			if(fileinfo.dwFileAttributes == FILE_ATTRIBUTE_DIRECTORY) 
			{                                                         
				::FindClose(hFind);                                   
				return true;                                          
			}                                                         
			::FindClose(hFind);                                       
			return false;                                             
		}

		bool CreatMultiDir(const CString& strDir)	
		{
			bool bRet = false;                                                                          
			char _szDir[_MAX_PATH];                                                                
			char _szTmp[_MAX_DIR];                                                                 
			int nLen = 0;                                                                           
			int idx;                                                                                
			if((FindDirExist(strDir)))                                                      
				return true;                                                                        
			_tcscpy(_szDir, (LPTSTR)(LPCTSTR)strDir);                                                              
			nLen   =   _tcslen(_szDir);                                                             
			if(_szDir[nLen-1] == '\\' || _szDir[nLen-1] == '/')                                     
			{                                                                                       
				_szDir[nLen-1] = '\0';                                                              
			}                                                                                       
			nLen = _tcslen(_szDir);                                                                 
			memset(_szTmp,0,_MAX_DIR);                                                              
			char _str[2];                                                                          
			for(idx = 0;idx < nLen;idx++)                                                           
			{                                                                                       
				if(_szDir[idx] != '\\')                                                             
				{                                                                                   
					_str[0] = _szDir[idx];                                                          
					_str[1] = 0;                                                                    
					_tcscat(_szTmp,_str);                                                           
				}                                                                                   
				else                                                                                
				{                                                                                   
					bRet = ::CreateDirectory(_szTmp,NULL);                                          
					if(bRet)                                                                        
					{                                                                               
						::SetFileAttributes(_szTmp,FILE_ATTRIBUTE_NORMAL);                          
					}                                                                               
					_str[0] = _szDir[idx];                                                          
					_str[1] = 0;                                                                    
					_tcscat(_szTmp,_str);                                                           
				}                                                                                   
				if(idx == nLen-1)                                                                   
				{                                                                                   
					bRet = ::CreateDirectory(_szTmp,NULL);                                          
					if(bRet)                                                                        
					{                                                                               
						::SetFileAttributes(_szTmp,FILE_ATTRIBUTE_NORMAL);                          
					}                                                                               
				}                                                                                   
			}                                                                                       
			if(FindDirExist(_szTmp))                                                                    
				return   true;                                                                      
			return   false;                                                                         

		}

		void DeleteFilesOld(const CString& strDir, const CString& strType, int iDays)
		{
			CTime timeCurrent = CTime::GetCurrentTime();
			CFileFind tempFind; 
			CString strFileFind = strDir + "\\" + strType;
			BOOL IsFinded = tempFind.FindFile(strFileFind); 
			while(IsFinded) 
			{ 
				IsFinded = tempFind.FindNextFile(); 
				if(!tempFind.IsDots()) 
				{ 	
					CString strTemp = strDir + "\\"  + tempFind.GetFileName();
					if(!tempFind.IsDirectory()) 
					{ 	
						CTime timeFile = timeCurrent;
						CFileStatus rStatus;
						if(CFile::GetStatus(strTemp, rStatus))
						{
							timeFile = rStatus.m_ctime;
						}

						CTimeSpan timespan = timeCurrent - timeFile;
						int iDaysSpan = timespan.GetDays();						
						if (iDaysSpan > iDays)
						{														
							DeleteFile(strTemp); 
						}
					} 
				} 
			} 
			tempFind.Close(); 
		}

		void OpenFolderAndSelectFile(const CString& strFile)
		{
			CString strPara = " /select, " + strFile;
			SHELLEXECUTEINFO shex = { 0 };
			shex.cbSize = sizeof(SHELLEXECUTEINFO);
			shex.lpFile = _T("explorer.exe");
			shex.lpParameters = (LPTSTR)(LPCTSTR)strPara;
			shex.lpVerb = _T("open");
			shex.nShow = SW_SHOWDEFAULT;
			shex.lpDirectory = NULL;
			ShellExecuteEx(&shex);			
		}

		void OpenFile(const CString& path)
		{
			ShellExecute(0, "open", (LPTSTR)(LPCTSTR)path, "", "", SW_SHOW);
		}

		

	}









}
