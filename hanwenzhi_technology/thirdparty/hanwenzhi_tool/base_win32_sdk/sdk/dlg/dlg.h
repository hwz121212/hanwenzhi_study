#ifndef _H_DLG_97B2BB5D_812B_445C_8C70_BF09B9334DD0
#define _H_DLG_97B2BB5D_812B_445C_8C70_BF09B9334DD0


namespace sdk
{
	class AFX_EXT_CLASS CCommonDlg
	{
	public:
	

		//选择文件目录
		static bool SelectFileDir(char* pchReturn, HWND hwnd, const char* strInit, const char* strTitle = "请选择一个文件夹:");
		//选择单个文件对话框
		static BOOL OpenFileDlg(HWND hwnd, PTSTR pstrFileName, PTSTR pstrTitleName, PTSTR pstrFilter);		
		static BOOL OpenMultiFileDlg(HWND hwnd, PTSTR pstrFileName, PTSTR pstrTitleName, PTSTR pstrFilter);

		static bool GetMultiFile(CStringArray& arr);
		static bool GetMultiFile(vector<CString>& arr);
	};



}


#endif