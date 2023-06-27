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
			//�õ����������ȫ·�� 
			DWORD dwRet = GetModuleFileName(NULL, (LPTSTR)pFileName, MAX_PATH); 
			//�ҵ�ϵͳ�������� 
			LPCTSTR lpRun = _T("Software\\Microsoft\\Windows\\CurrentVersion\\Run"); 
			//��������Key 
			long lRet = RegOpenKeyEx(HKEY_LOCAL_MACHINE, lpRun, 0, KEY_WRITE, &hKey); 
			if(lRet== ERROR_SUCCESS)
			{
				//���ע��
				RegSetValueEx(hKey, szRegisterName, 0,REG_SZ,(const BYTE*)(LPCSTR)pFileName, strlen(pFileName));
				RegCloseKey(hKey); 
			}
		}

		void CancelStartUpWhenUserLogin(char *szRegisterName)
		{
			HKEY   hKey; 
			char pFileName[MAX_PATH] = {0}; 
			//�õ����������ȫ·�� 
			DWORD dwRet = GetModuleFileName(NULL, (LPTSTR)pFileName, MAX_PATH); 
			//�ҵ�ϵͳ�������� 
			LPCTSTR lpRun = _T("Software\\Microsoft\\Windows\\CurrentVersion\\Run"); 
			//��������Key 
			long lRet = RegOpenKeyEx(HKEY_LOCAL_MACHINE, lpRun, 0, KEY_WRITE, &hKey); 
			if(lRet== ERROR_SUCCESS)
			{
				//ɾ��ע��
				RegDeleteValue(hKey, szRegisterName);
				RegCloseKey(hKey); 
			}
		}




		void StartUpWhenPowerOn(char *szName)
		{
			char pBuf[MAX_PATH]={0}; //���·���ı���
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