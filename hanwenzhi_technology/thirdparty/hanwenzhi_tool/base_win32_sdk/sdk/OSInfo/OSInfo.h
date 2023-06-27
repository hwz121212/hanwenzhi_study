#ifndef _H_MEMORY_F1A1EA96_866D_4D34_9C78_51B93758C565
#define _H_MEMORY_F1A1EA96_866D_4D34_9C78_51B93758C565


namespace sdk
{
	class AFX_EXT_CLASS COsUtil
	{
	public:
		COsUtil(){};


			/*
		* �������ܣ���ȡ���������ڴ��С
		* �����������
		* �����������
		* ����ֵ  ���ڴ��Сֵ����λM
		*/
		static int	GetMemorySize();
	

		/*
		* �������ܣ���ȡ���ز���ϵͳ�汾��Ϣ
		* �����������
		* ���������v_szOSVersion-����ϵͳ�汾��Ϣ
		* ����ֵ  �����󷵻�-1����ȷ����0
		*/
		static int	GetOSVersion(char v_szOSVersion[]);
		static DWORD GetOSMajorVersion();

		static BOOL IsX64Platform();

		static BOOL Is64BitOs ();
		static BOOL IsServerOS ();


		/*
		* �������ܣ���ȡ����IE�汾��Ϣ
		* �����������
		* ���������v_szIEVersion-������汾��Ϣ
		* ����ֵ  �����󷵻�-1����ȷ����0
		*/
		static int	GetIEVersion(char v_szIEVersion[]);
		/*
		* �������ܣ��ж�IE�Ƿ�ʹ�ô��������
		* �����������
		* �����������
		* ����ֵ  ��TRUE-ʹ�ã�FALSE-δʹ��
		*/
		static BOOL IsUseProxy();
		/*
		* �������ܣ���ȡIE��������
		* �����������
		* ���������v_szProxyServer-���������IP
		* ����ֵ  �����󷵻�-1����ȷ����0
		*/
		static int	GetIEProxy(char v_szProxyServer[]);
		/*
		* �������ܣ���ȡ����MAC��ַ
		* �����������
		* ���������v_szMacAddress-MAC��ַ
		* ����ֵ  �����󷵻�-1����ȷ����0
		*/
		static int	GetMacAddress(char v_szMacAddress[]);
		static void GetMacAddresses(std::vector<std::string>* mac_addresses);
		/*
		* �������ܣ���ȡ����IP��ַ
		* �����������
		* ���������v_szIPAddress-MAC��ַ
		* ����ֵ  �����󷵻�-1����ȷ����0
		*/
		static int	GetIPAddress(char v_szIPAddress[]);
		static CString GetLocalIP();
		/*
		* �������ܣ���ȡ���ؼ������
		* ���������v_nBufferSize-���뻺��ĳ���
		* ���������v_szComputerName-����Ļ���
		* ����ֵ  �����󷵻�-1����ȷ����0
		*/
		static int	GetCptName(char v_szComputerName[], int v_nBufferSize);
		/*
		* �������ܣ���ȡ����DNS����������
		* �����������
		* ���������v_szDNSServerList-����DNS������IP���
		* ����ֵ  �����󷵻�-1����ȷ����0
		*/
		static int	GetDNSServerList(char v_szDNSServerList[]);
		/*
		* �������ܣ���ȡflashplayer�汾��Ϣ
		* �����������
		* ���������v_szFlashPlayerVersion-����flash�������汾
		* ����ֵ  �����󷵻�-1����ȷ����0
		*/
		static int	GetFlashPlayerVersion(char v_szFlashPlayerVersion[]);

		/*
		* �������ܣ���ȡ����ɱ���������Ϣ
		* �����������
		* ���������v_szAntivirusSoftware-����ɱ�������Ϣ
		* ����ֵ  �����󷵻�-1����ȷ����0
		*/
		static int  GetAntivirusSoftwareInfo(char v_szAntivirusSoftware[]);
		static int	GetSilverLightVersion(char v_szSLVersion[]);

	};


	



	
}


#endif