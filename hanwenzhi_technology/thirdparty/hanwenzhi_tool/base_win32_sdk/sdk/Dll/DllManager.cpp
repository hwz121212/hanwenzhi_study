#include "stdafx.h"
#include "DllManager.h"

using namespace sdk;


CDllManager::CDllManager(void)
{
}

CDllManager::~CDllManager(void)
{	
}

int	CDllManager::LoadDlls(HINSTANCE hModule, const CString& strDir)
{
	//Ã¶¾Ùdll
	CString strDirPath = sdk::CProcessUtil::GetModuleDir(hModule);
	strDirPath.Format("%s\\%s\\", strDirPath, strDir);
	
	CStringArray arrDll;
	sdk::CFileUtil::EnumDirectoryFiles(strDirPath, "*.dll", arrDll, FALSE);
	for (int index=0; index<arrDll.GetCount(); index++)
	{
		CString strFile = arrDll.GetAt(index);
		LoadDll(strFile);
	}

	return arrDll.GetCount();
}

bool CDllManager::LoadDll( const CString& strDllFile)
{
	DllInfo Info;
	Info.strFullPathName = strDllFile;	

	Info.strModuleName = sdk::CFileUtil::GetFileNameWithExtByFullPath(strDllFile);
	Info.hInstance = LoadLibrary(strDllFile);
	if(NULL == Info.hInstance)
	{
		return false;
	}	
	Info.pfnInit				= (PFN_DllInit)GetProcAddress(Info.hInstance,"PluginInit");	
	Info.pfnCreatePlugin		= (PFN_DllCreate)GetProcAddress(Info.hInstance,"PluginCreate");
	Info.pfnGetTips			= (PFN_DllGetTips)GetProcAddress(Info.hInstance,"PluginGetTips");
	Info.pfnGetIconPathName	= (PFN_DllGetIconPathName)GetProcAddress(Info.hInstance,"PluginGetIconPathName");
	Info.pfnRelease			= (PFN_DllRelease)GetProcAddress(Info.hInstance,"PluginRelease");

	m_vecDllInfos.push_back(Info);	
	return true;
}

void CDllManager::FreeDlls()
{
	for (int index=0; index<m_vecDllInfos.size(); index++)
	{
		DllInfo info = m_vecDllInfos[index];
		if (info.pfnRelease != NULL)
		{
			info.pfnRelease();
		}

		if (info.hInstance != NULL)
		{
			FreeLibrary(info.hInstance);
		}	
	}
	m_vecDllInfos.clear();	
}

int	CDllManager::GetSize()
{
	return m_vecDllInfos.size();
}

DllInfo	CDllManager::GetDllInfo(int index)
{
	return m_vecDllInfos[index];
}
