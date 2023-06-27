#ifndef _H_PLUGIN_MANAGER_CDC4958D_7A5B_4A74_9436_808E4D6ACB1F
#define _H_PLUGIN_MANAGER_CDC4958D_7A5B_4A74_9436_808E4D6ACB1F


namespace sdk
{
	typedef	int (WINAPI * PFN_DllInit)();							
	typedef int (WINAPI * PFN_DllCreate)(HWND hParentHwnd, HWND* childHwnd);	
	typedef int (WINAPI * PFN_DllGetTips)(char v_szTip[]);					
	typedef int (WINAPI * PFN_DllGetIconPathName)(char v_szPath[]);	
	typedef int (WINAPI * PFN_DllRelease)();		

	struct AFX_EXT_CLASS DllInfo
	{
		CString						strFullPathName;		//ģ��·��
		CString						strModuleName;			//ģ������
		HINSTANCE					hInstance;				//hinstance	
		HWND						hWnd;					//����HWND
		PFN_DllInit					pfnInit;
		PFN_DllCreate				pfnCreatePlugin;
		PFN_DllGetTips					pfnGetTips;
		PFN_DllGetIconPathName			pfnGetIconPathName;
		PFN_DllRelease					pfnRelease;

		DllInfo()
		{
			strFullPathName			= "";
			strModuleName			= "";	
			hInstance				= NULL;
			hWnd					= NULL;
			pfnInit				= NULL;
			pfnCreatePlugin		= NULL;
			pfnGetTips			= NULL;
			pfnGetIconPathName	= NULL;
			pfnRelease			= NULL;	
		}
	};

	class AFX_EXT_CLASS CDllManager
	{
	public:
		CDllManager(void);
		~CDllManager(void);

	public:
		int		LoadDlls(HINSTANCE hModule, const CString& strDir);			//����ģ�������ļ��е����ļ����µ�����dll������Ϊ���ļ�����
		bool	LoadDll( const CString& strDllFile);						//����ָ��dll
		void	FreeDlls();	

		int		GetSize();
		DllInfo	GetDllInfo(int index);

	private:		
		vector<DllInfo> m_vecDllInfos;
		
	};

}



#endif
