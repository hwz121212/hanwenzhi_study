#include "stdafx.h"
#include "AutoRun.h"



namespace sdk
{
	namespace system
	{

		void StartUpWhenUserLogin(char *szRegisterName)
		{
			HKEY   hKey; 
			char pFileName[MAX_PATH] = {0}; 
			//得到程序自身的全路径 
			DWORD dwRet = GetModuleFileName(NULL, (LPTSTR)pFileName, MAX_PATH); 
			//找到系统的启动项 
			LPCTSTR lpRun = _T("Software\\Microsoft\\Windows\\CurrentVersion\\Run"); 
			//打开启动项Key 
			long lRet = RegOpenKeyEx(HKEY_LOCAL_MACHINE, lpRun, 0, KEY_WRITE, &hKey); 
			if(lRet== ERROR_SUCCESS)
			{
				//添加注册
				RegSetValueEx(hKey, szRegisterName, 0,REG_SZ,(const BYTE*)(LPCSTR)pFileName, strlen(pFileName));
				RegCloseKey(hKey); 
			}
		}

		void CancelStartUpWhenUserLogin(char *szRegisterName)
		{
			HKEY   hKey; 
			char pFileName[MAX_PATH] = {0}; 
			//得到程序自身的全路径 
			DWORD dwRet = GetModuleFileName(NULL, (LPTSTR)pFileName, MAX_PATH); 
			//找到系统的启动项 
			LPCTSTR lpRun = _T("Software\\Microsoft\\Windows\\CurrentVersion\\Run"); 
			//打开启动项Key 
			long lRet = RegOpenKeyEx(HKEY_LOCAL_MACHINE, lpRun, 0, KEY_WRITE, &hKey); 
			if(lRet== ERROR_SUCCESS)
			{
				//删除注册
				RegDeleteValue(hKey, szRegisterName);
				RegCloseKey(hKey); 
			}
		}




		void StartUpWhenPowerOn(char *szName)
		{
			char pBuf[MAX_PATH]={0}; //存放路径的变量
			CString strPath,strParam;
			GetModuleFileName(NULL,pBuf,MAX_PATH);
			strPath.Format("%s",pBuf);
			strParam="/Create /TN ";
			strParam += szName;
			strParam += " /TR "+strPath+" /F /SC ONSTART";
			ShellExecute(0, "open", "schtasks.exe", strParam, 0, SW_HIDE);
		}

		void CancelStartUpWhenPowerOn(char *szName)
		{
			CString strParam="/Delete /TN ";
			strParam += szName;
			strParam += " /F ";
			ShellExecute(0, "open", "schtasks.exe", strParam, 0, SW_HIDE);
		}




	}
}