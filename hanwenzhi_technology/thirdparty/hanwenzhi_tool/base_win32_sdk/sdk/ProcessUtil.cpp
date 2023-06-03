#include "stdafx.h"
#include "Process.h"

#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")
#include <TlHelp32.h>

namespace sdk
{

	CString CProcessUtil::GetExeDir()
	{			
		return GetModuleDir(NULL);
	}

	CString CProcessUtil::GetExeFullPathName()
	{
		TCHAR szPath[MAX_PATH ]  = {0};
		GetModuleFileName(NULL, szPath, MAX_PATH );
		CString str = szPath;
		return str;		
	}


	CString CProcessUtil::GetModuleDir(HMODULE hModule)
	{
		TCHAR szCurrentFilePath[MAX_PATH] = {0};
		GetModuleFileName(hModule, szCurrentFilePath, MAX_PATH);
		PathRemoveFileSpec(szCurrentFilePath);
		CString strPath = szCurrentFilePath;	
		return strPath;
	}


	BOOL CProcessUtil::ShowExistProcessMainWnd(const CString& strWnd, const CString& strProcessMutex)
	{
		HANDLE hMutex = CreateMutex(NULL, TRUE, strProcessMutex);
		if( hMutex!= NULL && GetLastError() == ERROR_ALREADY_EXISTS)
		{
			HWND hWnd = ::FindWindow(NULL, strWnd);
			if(hWnd != NULL)
			{
				if (::IsIconic(hWnd))
					::ShowWindow(hWnd,SW_RESTORE);  

				::ShowWindow(hWnd, SW_SHOW);
				::SetForegroundWindow(hWnd);			
				CloseHandle(hMutex);
			}
			return TRUE;
		}
		return FALSE;
	}



#define BUf_LEN 128
	typedef struct tagWNDINFO
	{
		DWORD dwProcessId; 
		HWND hWnd;
		string strMainWndClass;	//主窗口类名
	}WNDINFO, *LPWNDINFO;


	BOOL CALLBACK EnumProc(HWND hWnd,LPARAM lParam)
	{   
		DWORD dwProcessId;
		GetWindowThreadProcessId(hWnd, &dwProcessId);
		LPWNDINFO pInfo = (LPWNDINFO)lParam;
		if(dwProcessId==pInfo->dwProcessId) 
		{    
			char szBuf[BUf_LEN];
			memset(szBuf, 0, BUf_LEN);
			GetClassName(hWnd, szBuf, BUf_LEN);

			if (strcmp(szBuf, pInfo->strMainWndClass.c_str()) == 0)
			{
				pInfo->hWnd=hWnd;
				return FALSE; 
			}        
		} 
		return TRUE;
	} 


	HWND CProcessUtil::GetMainWndByProcessID(DWORD dwProcessId, string strMainWndClass)
	{
		WNDINFO wi;
		wi.dwProcessId		=	dwProcessId;
		wi.hWnd				=	NULL; 
		wi.strMainWndClass	=	strMainWndClass; 
		EnumWindows(EnumProc,	(LPARAM)&wi);
		return wi.hWnd;
	}


	bool CProcessUtil::EnableDebugPrivilege()  
	{  
		HANDLE hToken;  
		LUID sedebugnameValue;  
		TOKEN_PRIVILEGES tkp;  
		if (!OpenProcessToken(GetCurrentProcess(), TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &hToken))
		{  
			return   FALSE;  
		}  
		if (!LookupPrivilegeValue(NULL, SE_DEBUG_NAME, &sedebugnameValue)) 
		{  
			CloseHandle(hToken);  
			return false;  
		}  
		tkp.PrivilegeCount = 1;  
		tkp.Privileges[0].Luid = sedebugnameValue;  
		tkp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;  
		if (!AdjustTokenPrivileges(hToken, FALSE, &tkp, sizeof(tkp), NULL, NULL))
		{  
			CloseHandle(hToken);  
			return false;  
		}  
		return true;  
	}

	bool CProcessUtil::UpPrivilege()  
	{  
		HANDLE hToken;                             //   handle   to   process   token  
		TOKEN_PRIVILEGES tkp;               //   pointer   to   token   structure  
		bool result = OpenProcessToken(GetCurrentProcess(),  
			TOKEN_ADJUST_PRIVILEGES|TOKEN_QUERY,    
			&hToken);  
		if(!result)         //打开进程错误  
			return result;  
		result   =   LookupPrivilegeValue(     NULL,    
			SE_DEBUG_NAME,  
			&tkp.Privileges[0].Luid);  
		if(!result)         //查看进程权限错误  
			return   result;  
		tkp.PrivilegeCount   =   1;     //   one   privilege   to   set  
		tkp.Privileges[0].Attributes   =   SE_PRIVILEGE_ENABLED;  
		result   =   AdjustTokenPrivileges(   hToken,    
			FALSE,    
			&tkp,    
			sizeof(TOKEN_PRIVILEGES),  
			(PTOKEN_PRIVILEGES)   NULL,    
			(PDWORD)   NULL);  
		return   result;  
	}




// 
// #define SE_CREATE_TOKEN_NAME              TEXT("SeCreateTokenPrivilege")
// #define SE_ASSIGNPRIMARYTOKEN_NAME        TEXT("SeAssignPrimaryTokenPrivilege")
// #define SE_LOCK_MEMORY_NAME               TEXT("SeLockMemoryPrivilege")
// #define SE_INCREASE_QUOTA_NAME            TEXT("SeIncreaseQuotaPrivilege")
// #define SE_UNSOLICITED_INPUT_NAME         TEXT("SeUnsolicitedInputPrivilege")
// #define SE_MACHINE_ACCOUNT_NAME           TEXT("SeMachineAccountPrivilege")
// #define SE_TCB_NAME                       TEXT("SeTcbPrivilege")
// #define SE_SECURITY_NAME                  TEXT("SeSecurityPrivilege")
// #define SE_TAKE_OWNERSHIP_NAME            TEXT("SeTakeOwnershipPrivilege")
// #define SE_LOAD_DRIVER_NAME               TEXT("SeLoadDriverPrivilege")
// #define SE_SYSTEM_PROFILE_NAME            TEXT("SeSystemProfilePrivilege")
// #define SE_SYSTEMTIME_NAME                TEXT("SeSystemtimePrivilege")
// #define SE_PROF_SINGLE_PROCESS_NAME       TEXT("SeProfileSingleProcessPrivilege")
// #define SE_INC_BASE_PRIORITY_NAME         TEXT("SeIncreaseBasePriorityPrivilege")
// #define SE_CREATE_PAGEFILE_NAME           TEXT("SeCreatePagefilePrivilege")
// #define SE_CREATE_PERMANENT_NAME          TEXT("SeCreatePermanentPrivilege")
// #define SE_BACKUP_NAME                    TEXT("SeBackupPrivilege")
// #define SE_RESTORE_NAME                   TEXT("SeRestorePrivilege")
// #define SE_SHUTDOWN_NAME                  TEXT("SeShutdownPrivilege")
// #define SE_DEBUG_NAME                     TEXT("SeDebugPrivilege")
// #define SE_AUDIT_NAME                     TEXT("SeAuditPrivilege")
// #define SE_SYSTEM_ENVIRONMENT_NAME        TEXT("SeSystemEnvironmentPrivilege")
// #define SE_CHANGE_NOTIFY_NAME             TEXT("SeChangeNotifyPrivilege")
// #define SE_REMOTE_SHUTDOWN_NAME           TEXT("SeRemoteShutdownPrivilege")
// #define SE_UNDOCK_NAME                    TEXT("SeUndockPrivilege")
// #define SE_SYNC_AGENT_NAME                TEXT("SeSyncAgentPrivilege")
// #define SE_ENABLE_DELEGATION_NAME         TEXT("SeEnableDelegationPrivilege")
// #define SE_MANAGE_VOLUME_NAME             TEXT("SeManageVolumePrivilege")


	bool CProcessUtil::EnablePrivilege(LPCTSTR privilege, bool bEnable)
	{
		HANDLE hToken;
		TOKEN_PRIVILEGES tkp;

		SetThreadExecutionState(ES_CONTINUOUS);

		// Get a token for this process.
		if (!OpenProcessToken(GetCurrentProcess(), TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &hToken)) {
			return false;
		}

		// Get the LUID for the privilege.
		LookupPrivilegeValue(nullptr, privilege, &tkp.Privileges[0].Luid);

		tkp.PrivilegeCount = 1;  // one privilege to set
		tkp.Privileges[0].Attributes = bEnable ? SE_PRIVILEGE_ENABLED : 0;

		// Set the privilege for this process.
		AdjustTokenPrivileges(hToken, FALSE, &tkp, 0, (PTOKEN_PRIVILEGES)nullptr, 0);

		CloseHandle(hToken);

		return (GetLastError() == ERROR_SUCCESS);
	}


	//根据exe的路径得到进程ID
	DWORD CProcessUtil::GetProcessID(const char * str)
	{
		HANDLE   handle = ::CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);   
		PROCESSENTRY32 pe = { sizeof(pe) };
		if(::Process32First(handle, &pe))   
		{   
			while(::Process32Next(handle, &pe)!=FALSE)   
			{   
				CString ss = pe.szExeFile;   
				ss.MakeLower();   
				if(ss.Compare(str)   ==   0)   
				{   
					::CloseHandle(handle);
					return   pe.th32ProcessID;   
				}   
			}   
			::CloseHandle(handle);  			
		}   
		return   -1; 
	}

	HANDLE CProcessUtil::GetProcessHandleByID(int nID)
	{
		HANDLE hToken;
		bool flag = OpenProcessToken( GetCurrentProcess(), TOKEN_ADJUST_PRIVILEGES, &hToken );
		if( !flag )
		{
			DWORD err = GetLastError();
			printf( "OpenProcessToken error:%d", err );
		}
		SetPrivilege( hToken, SE_DEBUG_NAME, true );
		CloseHandle(hToken);
		return OpenProcess(PROCESS_ALL_ACCESS, FALSE, nID);
	}

	HANDLE CProcessUtil::GetProcessHandle(const char * str)
	{
		HANDLE hReturn = NULL;
		DWORD dwID = GetProcessID(str);
		if (dwID != -1)
		{
			hReturn =  GetProcessHandleByID(dwID);
		}
		return hReturn;
	}

	void CProcessUtil::TerminateProcessByName(const CString& strName,  bool bWait, unsigned int iErr)
	{
		HANDLE handle = GetProcessHandle((LPCTSTR)strName);
		TerminateProcess(handle, iErr);
		if (bWait)
		{
			WaitForSingleObject(handle, INFINITE);
		}
		CloseHandle(handle);
	}

	//参数1：进程token
	//参数2：进程权限
	//参数3：是否启用或者禁用
	//返回：设置成功或者失败
	BOOL CProcessUtil::SetPrivilege(HANDLE hToken,LPCTSTR lpszPrivilege,BOOL bEnablePrivilege) 
	{ 

		TOKEN_PRIVILEGES tp; 
		LUID luid; 

		if(!LookupPrivilegeValue(NULL,lpszPrivilege,&luid)) 
		{ 

			return FALSE; 
		} 
		tp.PrivilegeCount = 1; 
		tp.Privileges[0].Luid = luid; 
		if (bEnablePrivilege) 
			tp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED; 
		else 
			tp.Privileges[0].Attributes = 0; 

		AdjustTokenPrivileges( 
			hToken, 
			FALSE, 
			&tp, 
			sizeof(TOKEN_PRIVILEGES), 
			(PTOKEN_PRIVILEGES) NULL, 
			(PDWORD) NULL); 

		if (GetLastError() != ERROR_SUCCESS) 
		{ 
			return FALSE; 
		} 
		return TRUE; 
	} 

	//根据进程ID，杀掉进程
	BOOL CProcessUtil::KillPS(DWORD id) 
	{ 
		HANDLE hProcess=NULL,hProcessToken=NULL; 
		BOOL IsKilled=FALSE,bRet=FALSE; 

		OpenProcessToken(GetCurrentProcess(),TOKEN_ALL_ACCESS,&hProcessToken);
		SetPrivilege(hProcessToken,SE_DEBUG_NAME,TRUE); 
		hProcess=OpenProcess(PROCESS_ALL_ACCESS,FALSE,id);
		TerminateProcess(hProcess,1);

		IsKilled=TRUE; 
		if(hProcessToken!=NULL) CloseHandle(hProcessToken); 
		if(hProcess!=NULL) CloseHandle(hProcess); 

		return(IsKilled); 
	} 


	// Returns TRUE if a process running on the system has the specified mutex (otherwise FALSE). 
	BOOL CProcessUtil::MutexExistsOnSystem (char *name)
	{
		if (name[0] == 0)
			return FALSE;

		HANDLE hMutex = OpenMutex (MUTEX_ALL_ACCESS, FALSE, name);

		if (hMutex == NULL)
		{
			if (GetLastError () == ERROR_FILE_NOT_FOUND)
				return FALSE;

			if (GetLastError () == ERROR_ACCESS_DENIED) // On Vista, this is returned if the owner of the mutex is elevated while we are not
				return TRUE;		

			// The call failed and it is not certain whether the mutex exists or not
			return FALSE;
		}

		CloseHandle (hMutex);
		return TRUE;
	}

	void CProcessUtil::RunExe(const CString& strExe)
	{
		 ShellExecute( NULL , "Open" , strExe , NULL , NULL , SW_SHOW );
	}

	BOOL CProcessUtil::RunExe1(const string &strPath)
	{
		STARTUPINFO sui;
		PROCESS_INFORMATION pi;
		SECURITY_ATTRIBUTES sa;

		ZeroMemory(&sui,sizeof(STARTUPINFO));
		sui.cb	= sizeof(STARTUPINFO);

		sa.nLength = sizeof(SECURITY_ATTRIBUTES);
		sa.bInheritHandle = FALSE;
		sa.lpSecurityDescriptor = NULL;

		BOOL bRet = FALSE;
		if (CreateProcess(strPath.c_str(), NULL, &sa, NULL, TRUE, 0, NULL, NULL, &sui, &pi))
		{
			bRet = TRUE;
			CloseHandle(pi.hThread);
			CloseHandle(pi.hProcess);
		}

		return bRet;
	}

	bool CProcessUtil::IsProcessExsit(const string &strName)
	{
		bool bReturn = false;

		PROCESSENTRY32* pinfo = new PROCESSENTRY32;
		MODULEENTRY32* minfo = new MODULEENTRY32;
		pinfo->dwSize = sizeof(PROCESSENTRY32);
		minfo->dwSize = sizeof(MODULEENTRY32);

		HANDLE hProcess = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
		BOOL report=Process32First(hProcess,pinfo);

		HANDLE hModule = NULL;		
		while (report)
		{
			hModule = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, pinfo->th32ProcessID);
			Module32First(hModule, minfo);

			if (minfo->szExePath!=NULL && strstr(minfo->szExePath, strName.c_str())!=NULL)
			{
				bReturn = true;
				break;
			}

			report=Process32Next(hProcess, pinfo); 
		}
		
		CloseHandle(hProcess);
		CloseHandle(hModule);
		delete pinfo;
		delete minfo;

		return bReturn;
	}


	void CProcessUtil::Pause()
	{
		system("PAUSE");
	}

	void CProcessUtil::OpenPDFFile(const char* pchFile)
	{
		int r = (int)ShellExecute (NULL, "open", pchFile, NULL, NULL, SW_SHOWNORMAL);
		if (r == ERROR_FILE_NOT_FOUND)
		{
			//没有这个文件
		}		
	}

	void CProcessUtil::OpenURL(const char* pchUrl)
	{
		ShellExecute (NULL, "open", pchUrl, NULL, NULL, SW_SHOWNORMAL);
	}
	
	void CProcessUtil::AbortProcessSilent (void)
	{
		// Note that this function also causes localcleanup() to be called (see atexit())
		exit (1);
	}





	BOOL SetMuteXP()
	{
		return TRUE;
	}
	BOOL SetMuteWin7()
	{
		HMIXER hMixer;
		MIXERCONTROL mxc;
		MIXERLINE mxl;
		MIXERLINECONTROLS mxlc;
		MIXERCONTROLDETAILS mxcd;
		MIXERCONTROLDETAILS_SIGNED volStruct;
		MMRESULT mmr;
		BOOL bMute=1;

		SYSTEM_INFO info;                                   //用SYSTEM_INFO结构判断64位AMD处理器 
		GetSystemInfo(&info);                               //调用GetSystemInfo函数填充结构 
		OSVERSIONINFOEX os; 
		os.dwOSVersionInfoSize=sizeof(OSVERSIONINFOEX);   
		if(GetVersionEx((OSVERSIONINFO *)&os))                  
		{ 
			if(os.dwMajorVersion<6)
			{   
				return FALSE;
			}
		}
		else
		{
			return FALSE;
		}

		//Sound Setting
		mmr = mixerOpen(&hMixer, 0, 0, 0, 0);
		if (mmr != MMSYSERR_NOERROR) return FALSE;

		// 初始化MIXERLINE结构体.
		ZeroMemory(&mxl, sizeof(MIXERLINE));
		mxl.cbStruct = sizeof(MIXERLINE);

		// 指出需要获取的通道，扬声器用MIXERLINE_COMPONENTTYPE_DST_SPEAKERS
		mxl.dwComponentType = MIXERLINE_COMPONENTTYPE_DST_SPEAKERS;

		mmr = mixerGetLineInfo((HMIXEROBJ)hMixer, &mxl, MIXER_GETLINEINFOF_COMPONENTTYPE);
		if (mmr != MMSYSERR_NOERROR) return FALSE;

		// 取得控制器.
		ZeroMemory(&mxlc, sizeof(MIXERLINECONTROLS));
		mxlc.cbStruct = sizeof(MIXERLINECONTROLS);
		mxlc.dwLineID = mxl.dwLineID;
		mxlc.dwControlType = MIXERCONTROL_CONTROLTYPE_MUTE;
		mxlc.cControls = 1;
		mxlc.cbmxctrl = sizeof(mxc);
		mxlc.pamxctrl = &mxc;
		//mxc.cMultipleItems=0;

		//ZeroMemory(&mxc, sizeof(MIXERCONTROL));
		//mxc.cbStruct = sizeof(MIXERCONTROL);
		mmr = mixerGetLineControls((HMIXEROBJ)hMixer, &mxlc, MIXER_GETLINECONTROLSF_ONEBYTYPE);
		if (mmr != MMSYSERR_NOERROR) return FALSE;

		// 初始化MIXERCONTROLDETAILS结构体
		// 获得音量值
		volStruct.lValue = bMute;
		//volStruct.fValue = bMute;
		ZeroMemory(&mxcd, sizeof(MIXERCONTROLDETAILS));
		mxcd.cbStruct = sizeof(MIXERCONTROLDETAILS);
		mxcd.cbDetails = sizeof(MIXERCONTROLDETAILS_SIGNED);
		mxcd.dwControlID = mxc.dwControlID;
		mxcd.paDetails = &volStruct;
		mxcd.cChannels = 1;
		//这个是后加入也不懂啥意思
		mxcd.cMultipleItems = 0; 

		mmr = mixerSetControlDetails((HMIXEROBJ)hMixer, &mxcd, MIXER_SETCONTROLDETAILSF_VALUE);

		mixerClose(hMixer);
		return TRUE;
	} 

	void CProcessUtil::doMute()
	{
		SetMuteWin7();
		SetMuteXP();
	}



	namespace processutil
	{

		CString GetModuleFullPath(HINSTANCE hInstance)
		{
			TCHAR szPath[ 256 ]= {0};
			GetModuleFileName(hInstance, szPath,sizeof(szPath));
			CString str_path = (CString)szPath;
			return str_path;
		}

		CString GetModulePath(HINSTANCE hInstance)
		{			
			CString str_path = GetModuleFullPath(hInstance);
			int position=str_path.ReverseFind('\\'); //反向查找"\"所在的位置
			str_path=str_path.Left(position+1); 
			return str_path;
		}

		CString GetPathByFullPath(const CString& str)
		{
			CString str_path = str;
			int position=str_path.ReverseFind('\\'); //反向查找"\"所在的位置
			str_path=str_path.Left(position+1); 
			return str_path;
		}

		CString GetNameByPath(const CString& str)
		{
			CString strTemp = str;
			int nPos = strTemp.ReverseFind('\\');
			strTemp = strTemp.Right(strTemp.GetLength() - nPos - 1);
			return strTemp;
		}

		CString GetNameWithoutSuffixByPath(const CString& str)
		{
			CString str_path = GetNameByPath(str);
			int position=str_path.ReverseFind('.'); //反向查找"\"所在的位置
			str_path=str_path.Left(position); 
			return str_path;
		}


		BOOL RunExe(const CString& strExe)
		{
			BOOL bResult = FALSE;
			SHELLEXECUTEINFO ShellInfo;
			memset(&ShellInfo, 0, sizeof(ShellInfo));
			ShellInfo.cbSize = sizeof(ShellInfo);
			ShellInfo.hwnd = NULL;
			ShellInfo.lpVerb = _T("open");
			ShellInfo.lpFile = (LPTSTR)(LPCTSTR)strExe;
			ShellInfo.nShow = SW_SHOWNORMAL;
			ShellInfo.fMask = SEE_MASK_NOCLOSEPROCESS;
			bResult = ShellExecuteEx(&ShellInfo);
			return bResult;
		}

		BOOL OpenWeb(const CString& strUrl)
		{
			BOOL bResult = FALSE;
			SHELLEXECUTEINFO ShellInfo;
			memset(&ShellInfo, 0, sizeof(ShellInfo));
			ShellInfo.cbSize = sizeof(ShellInfo);
			ShellInfo.hwnd = NULL;
			ShellInfo.lpVerb = _T("open");
			ShellInfo.lpFile = (LPTSTR)(LPCTSTR)strUrl;
			ShellInfo.nShow = SW_SHOWNORMAL;
			ShellInfo.fMask = SEE_MASK_NOCLOSEPROCESS;
			bResult = ShellExecuteEx(&ShellInfo);
			return bResult;
		}

		BOOL RunExeAndWaitEnd(const CString& strExe)
		{
			BOOL bResult = FALSE;
			SHELLEXECUTEINFO ShellInfo;
			memset(&ShellInfo, 0, sizeof(ShellInfo));
			ShellInfo.cbSize = sizeof(ShellInfo);
			ShellInfo.hwnd = NULL;
			ShellInfo.lpVerb = _T("open");
			ShellInfo.lpFile =  (LPTSTR)(LPCTSTR)strExe;
			ShellInfo.nShow = SW_SHOWNORMAL;
			ShellInfo.fMask = SEE_MASK_NOCLOSEPROCESS;
			bResult = ShellExecuteEx(&ShellInfo);
			if (bResult)
			{
				WaitForSingleObject(ShellInfo.hProcess,INFINITE);
			}
			return bResult;
		}

	}

}
