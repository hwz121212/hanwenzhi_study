#include "stdafx.h"
#include "dlg.h"




int CALLBACK BrowseCallbackProc(HWND hwnd,UINT uMsg,LPARAM lParam,LPARAM lpData)
{
	switch(uMsg)
	{
	case BFFM_INITIALIZED:
		{
			::SendMessage(hwnd, BFFM_SETSELECTION, TRUE, lpData);
			break;
		}
	case BFFM_SELCHANGED:
		{
			TCHAR curr[MAX_PATH];   
			SHGetPathFromIDList((LPCITEMIDLIST)lParam, curr);   
			::SendMessage(hwnd, BFFM_SETSTATUSTEXT,0, (LPARAM)curr);   
		}
		break;
	default:
		break;
	}

	return 0;   
}

bool CCommonDlg::SelectFileDir(char* pchReturn, HWND hwnd, const char* strInit, const char* strTitle)		
{
	BROWSEINFO info;
	TCHAR szDefaultDir[MAX_PATH]={0};
	_tcscpy(szDefaultDir,strInit);
	ZeroMemory(&info, sizeof(BROWSEINFO));
	info.hwndOwner = hwnd;
	info.lpszTitle = strTitle;
	info.ulFlags = BIF_RETURNONLYFSDIRS | BIF_NEWDIALOGSTYLE;
	info.lpfn = BrowseCallbackProc;
	info.lParam = long(&szDefaultDir);
	ITEMIDLIST *pItem;
	//TCHAR szPath[MAX_PATH]={0};
	pItem = SHBrowseForFolder(&info);
	if(pItem)
	{  				
		SHGetPathFromIDList(pItem, pchReturn);
		GlobalFree(pItem);		
		return true;
	}
			
	return false;
}


//static TCHAR szFilter[] = TEXT ("Text Files (*.TXT)\0*.txt\0")  \
//TEXT ("ASCII Files (*.ASC)\0*.asc\0") \
//TEXT ("All Files (*.*)\0*.*\0\0") ;

BOOL CCommonDlg::OpenFileDlg(HWND hwnd, PTSTR pstrFileName, PTSTR pstrTitleName, PTSTR pstrFilter)
{ 				     
	OPENFILENAME ofn;
	ZeroMemory(&ofn, sizeof(OPENFILENAME));  
	ofn.lStructSize = sizeof(OPENFILENAME);  
	ofn.hwndOwner = hwnd;  
	ofn.lpstrFile = pstrFileName;  
	ofn.lpstrFile[0] = '\0'; 
	ofn.nMaxFile = MAX_PATH; 
	ofn.lpstrFilter = pstrFilter;  
	ofn.nFilterIndex = 1;  
	ofn.lpstrTitle = pstrTitleName;  
	ofn.lpstrInitialDir = NULL;  
	ofn.Flags = OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST;  
	return GetOpenFileName(&ofn);
}

//static TCHAR szFilter[] = TEXT ("Text Files (*.TXT)\0*.txt\0")  \
//TEXT ("ASCII Files (*.ASC)\0*.asc\0") \
//TEXT ("All Files (*.*)\0*.*\0\0") ;
BOOL CCommonDlg::OpenMultiFileDlg(HWND hwnd, PTSTR pstrFileName, PTSTR pstrTitleName, PTSTR pstrFilter)
{ 				     
	OPENFILENAME ofn;
	ZeroMemory(&ofn, sizeof(OPENFILENAME));  
	ofn.lStructSize = sizeof(OPENFILENAME);  
	ofn.hwndOwner = hwnd;  
	ofn.lpstrFile = pstrFileName;  
	ofn.lpstrFile[0] = '\0'; 
	ofn.nMaxFile = MAX_PATH; 
	ofn.lpstrFilter = pstrFilter;  
	ofn.nFilterIndex = 1;  
	ofn.lpstrTitle = pstrTitleName;  
	ofn.lpstrInitialDir = NULL;  
	ofn.Flags = OFN_PATHMUSTEXIST | OFN_ALLOWMULTISELECT;  
	return GetOpenFileName(&ofn);
}








bool CCommonDlg::GetMultiFile(CStringArray& arr)
{
	bool bReturn = false;
	CString szFilters="Text Files (*.txt)|*.txt||";	
	CFileDialog fileDlg (TRUE, "txt", "*.txt",OFN_FILEMUSTEXIST| OFN_ALLOWMULTISELECT, szFilters, NULL);

	CString fileName;
	const int c_cMaxFiles = 10240;
	const int c_cbBuffSize = (c_cMaxFiles * (MAX_PATH + 1)) + 1;
	fileDlg.GetOFN().lpstrFile = fileName.GetBuffer(c_cbBuffSize);
	fileDlg.GetOFN().nMaxFile = c_cMaxFiles;

	if( fileDlg.DoModal ()==IDOK )
	{		
		POSITION pos;
		pos=fileDlg.GetStartPosition();
		while (pos!=NULL)
		{
			CString filename=fileDlg.GetNextPathName(pos);
			arr.Add(filename);
		};
		bReturn = true;
	}
	return bReturn;
}

bool CCommonDlg::GetMultiFile(vector<CString>& arr)
{
	bool bReturn = false;
	CString szFilters="Text Files (*.txt)|*.txt||";	
	CFileDialog fileDlg (TRUE, "txt", "*.txt",OFN_FILEMUSTEXIST| OFN_ALLOWMULTISELECT, szFilters, NULL);

	CString fileName;
	const int c_cMaxFiles = 10240;
	const int c_cbBuffSize = (c_cMaxFiles * (MAX_PATH + 1)) + 1;
	fileDlg.GetOFN().lpstrFile = fileName.GetBuffer(c_cbBuffSize);
	fileDlg.GetOFN().nMaxFile = c_cMaxFiles;

	if( fileDlg.DoModal ()==IDOK )
	{		
		POSITION pos;
		pos=fileDlg.GetStartPosition();
		while (pos!=NULL)
		{
			CString filename=fileDlg.GetNextPathName(pos);			
			arr.push_back(filename);
		};
		bReturn = true;
	}
	return bReturn;
}


