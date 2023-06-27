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
			str="δ���ӵ�����";
			return 0;
		}
		else if(dwFlag & INTERNET_CONNECTION_MODEM)
		{
			str="�������ͣ�����RAS������������";
			return 1;
		}
		else  if(dwFlag & INTERNET_CONNECTION_LAN)
		{
			str="�������ͣ���������ͨ������������";
			return 2;
		}
		else if(dwFlag & INTERNET_CONNECTION_PROXY)
		{
			str="�������ͣ�ʹ�ô������������";
			return 3;
		}

		return 4;
	}





}

