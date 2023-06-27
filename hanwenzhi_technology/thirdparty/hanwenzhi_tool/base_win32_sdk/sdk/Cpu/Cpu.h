#ifndef _H_CPU_ED0C1B8D_CE09_4B97_A9FD_898BD7F57BDD
#define _H_CPU_ED0C1B8D_CE09_4B97_A9FD_898BD7F57BDD

namespace sdk
{

	class AFX_EXT_CLASS CCpu
	{
	public:
		CCpu(){};

	
			/*
		* 函数介绍：获取本地cpu的信息，包括型号，品牌，主频，个数
		* 输入参数：无
		* 输出参数：v_szCpuIdentifier-型号，v_szCpuVendor-品牌，v_lCpuFrequency-主频，v_lCpuCount-个数
		* 返回值  ：错误返回-1，正确返回0
		*/
		static int	GetCPUInfo( char v_szCpuIdentifier[], 
								char v_szCpuVendor[], 
								LONG &v_lCpuFrequency, 
								LONG &v_lCpuCount
								);
		/*
		* 函数介绍：获取本地cpu的个数
		* 输入参数：无
		* 输出参数：无
		* 返回值  ：错误返回-1，正确返回大于0的数
		*/
		static int  GetCPUCount();

		static string GetSystemArch();

	};


}


#endif