#ifndef _H_PROCESS_B3D81B12_A84F_41B5_BEA2_C5540D1E5A8A
#define _H_PROCESS_B3D81B12_A84F_41B5_BEA2_C5540D1E5A8A


namespace sdk
{
	class CProcessUtil
	{
	public:
		CProcessUtil(){};
		

		static CString GetExeDir();		
		static CString GetExeFullPathName();
		static CString GetModuleDir(HMODULE hModule);


		static BOOL ShowExistProcessMainWnd(const CString& strWnd, const CString& strProcessMutex);


		bool IsProcessExsit(const string &strName);
		static DWORD GetProcessID(const char * str);
		static HANDLE GetProcessHandleByID(int nID);
		static HANDLE GetProcessHandle(const char * str);
		static void TerminateProcessByName(const CString& strName, bool bWait=false, unsigned int iErr = 0);

		static HWND GetMainWndByProcessID(DWORD dwProcessId, string strMainWndClass);
			
		static BOOL SetPrivilege(HANDLE hToken,LPCTSTR lpszPrivilege,BOOL bEnablePrivilege);
		static BOOL KillPS(DWORD id);

		//进程提权
		static bool EnableDebugPrivilege();
		static bool UpPrivilege();
		static bool EnablePrivilege(LPCTSTR privilege, bool bEnable);	


		// Returns TRUE if a process running on the system has the specified mutex (otherwise FALSE). 
		static BOOL MutexExistsOnSystem (char *name);
		static void RunExe(const CString& strExe);
		static BOOL RunExe1(const string &strPath);

		static void OpenPDFFile(const char* pchFile);
		
		//在线帮助、帮助手册、常见问题   url
		static void OpenURL(const char* pchUrl);	


		static void AbortProcessSilent (void);
		static void Pause();



		void doMute();		//对进程进行静音处理
	};

		
	namespace processutil
	{
		CString GetModuleFullPath(HINSTANCE hInstance);
		CString GetModulePath(HINSTANCE hInstance);
		CString GetPathByFullPath(const CString& str);
		CString GetNameByPath(const CString& str);
		CString GetNameWithoutSuffixByPath(const CString& str);


		BOOL RunExe(const CString& strExe);
		BOOL OpenWeb(const CString& strUrl);
		BOOL RunExeAndWaitEnd(const CString& strExe);

	}
	
}


#endif