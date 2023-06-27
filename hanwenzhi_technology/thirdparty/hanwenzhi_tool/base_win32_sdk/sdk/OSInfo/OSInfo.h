#ifndef _H_MEMORY_F1A1EA96_866D_4D34_9C78_51B93758C565
#define _H_MEMORY_F1A1EA96_866D_4D34_9C78_51B93758C565


namespace sdk
{
	class AFX_EXT_CLASS COsUtil
	{
	public:
		COsUtil(){};


			/*
		* 函数介绍：获取本地物理内存大小
		* 输入参数：无
		* 输出参数：无
		* 返回值  ：内存大小值，单位M
		*/
		static int	GetMemorySize();
	

		/*
		* 函数介绍：获取本地操作系统版本信息
		* 输入参数：无
		* 输出参数：v_szOSVersion-操作系统版本信息
		* 返回值  ：错误返回-1，正确返回0
		*/
		static int	GetOSVersion(char v_szOSVersion[]);
		static DWORD GetOSMajorVersion();

		static BOOL IsX64Platform();

		static BOOL Is64BitOs ();
		static BOOL IsServerOS ();


		/*
		* 函数介绍：获取本地IE版本信息
		* 输入参数：无
		* 输出参数：v_szIEVersion-浏览器版本信息
		* 返回值  ：错误返回-1，正确返回0
		*/
		static int	GetIEVersion(char v_szIEVersion[]);
		/*
		* 函数介绍：判断IE是否使用代理服务器
		* 输入参数：无
		* 输出参数：无
		* 返回值  ：TRUE-使用，FALSE-未使用
		*/
		static BOOL IsUseProxy();
		/*
		* 函数介绍：获取IE代理设置
		* 输入参数：无
		* 输出参数：v_szProxyServer-代理服务器IP
		* 返回值  ：错误返回-1，正确返回0
		*/
		static int	GetIEProxy(char v_szProxyServer[]);
		/*
		* 函数介绍：获取本地MAC地址
		* 输入参数：无
		* 输出参数：v_szMacAddress-MAC地址
		* 返回值  ：错误返回-1，正确返回0
		*/
		static int	GetMacAddress(char v_szMacAddress[]);
		static void GetMacAddresses(std::vector<std::string>* mac_addresses);
		/*
		* 函数介绍：获取本地IP地址
		* 输入参数：无
		* 输出参数：v_szIPAddress-MAC地址
		* 返回值  ：错误返回-1，正确返回0
		*/
		static int	GetIPAddress(char v_szIPAddress[]);
		static CString GetLocalIP();
		/*
		* 函数介绍：获取本地计算机名
		* 输入参数：v_nBufferSize-传入缓冲的长度
		* 输出参数：v_szComputerName-传入的缓冲
		* 返回值  ：错误返回-1，正确返回0
		*/
		static int	GetCptName(char v_szComputerName[], int v_nBufferSize);
		/*
		* 函数介绍：获取本地DNS服务器设置
		* 输入参数：无
		* 输出参数：v_szDNSServerList-本地DNS服务器IP组合
		* 返回值  ：错误返回-1，正确返回0
		*/
		static int	GetDNSServerList(char v_szDNSServerList[]);
		/*
		* 函数介绍：获取flashplayer版本信息
		* 输入参数：无
		* 输出参数：v_szFlashPlayerVersion-本地flash播放器版本
		* 返回值  ：错误返回-1，正确返回0
		*/
		static int	GetFlashPlayerVersion(char v_szFlashPlayerVersion[]);

		/*
		* 函数介绍：获取本地杀毒软件的信息
		* 输入参数：无
		* 输出参数：v_szAntivirusSoftware-本地杀毒软件信息
		* 返回值  ：错误返回-1，正确返回0
		*/
		static int  GetAntivirusSoftwareInfo(char v_szAntivirusSoftware[]);
		static int	GetSilverLightVersion(char v_szSLVersion[]);

	};


	



	
}


#endif