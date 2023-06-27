#include "stdafx.h"
#include "NetworkUtil.h"



namespace sdk
{


	BOOL CNetworkUtil::IsConnected()
	{		
		DWORD flags = 0;
		return InternetGetConnectedState(&flags, 0);
	}

	UINT CNetworkUtil::CheckNet(std::string &str)
	{
		DWORD dwFlag;
		if(!InternetGetConnectedState(&dwFlag, 0))
		{
			str="未连接到网络";
			return 0;
		}
		else if(dwFlag & INTERNET_CONNECTION_MODEM)
		{
			str="上网类型：采用RAS拨号连接上网";
			return 1;
		}
		else  if(dwFlag & INTERNET_CONNECTION_LAN)
		{
			str="上网类型：采用网卡通过局域网上网";
			return 2;
		}
		else if(dwFlag & INTERNET_CONNECTION_PROXY)
		{
			str="上网类型：使用代理服务器上网";
			return 3;
		}

		return 4;
	}





}

