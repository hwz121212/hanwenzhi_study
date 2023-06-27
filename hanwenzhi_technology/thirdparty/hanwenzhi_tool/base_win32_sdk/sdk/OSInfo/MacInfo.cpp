#include "stdafx.h"
#include "MacInfo.h"



#include <Iphlpapi.h>
#pragma comment(lib, "iphlpapi.lib")

namespace sdk
{
namespace mac_info	
{
	
	CGetMacInfo::CGetMacInfo()
	{
		m_vecAdapterInfo.clear();
	}

	string CGetMacInfo::GetLocalMac()
	{
		string strMac = "";
		if (m_vecAdapterInfo.size() == 0)
		{
			InitMacInfo();
		}

		// ������������
		for (int index=0; index<m_vecAdapterInfo.size(); index++)
		{
			AdapterInfo adapterInfo = m_vecAdapterInfo[index];
			if (adapterInfo.iType == 6)
			{
				strMac = adapterInfo.strMacAddress;
				break;
			}	
		}

		//������������
		if (strMac.length() == 0)
		{
			for (int index=0; index<m_vecAdapterInfo.size(); index++)
			{
				AdapterInfo adapterInfo = m_vecAdapterInfo[index];
				if (adapterInfo.iType == 71)
				{
					strMac = adapterInfo.strMacAddress;
					break;
				}			
			}
		}

		return strMac;
	}

	int  CGetMacInfo::InitMacInfo()
	{
		m_vecAdapterInfo.clear();
		PIP_ADAPTER_INFO pAdapterInfo; 
		PIP_ADAPTER_INFO pAdapter = NULL; 
		ULONG ulOutBufLen = sizeof(IP_ADAPTER_INFO); 
		pAdapterInfo = (PIP_ADAPTER_INFO)malloc(ulOutBufLen); 
		int dwRetVal = GetAdaptersInfo( pAdapterInfo, &ulOutBufLen);
		// ��һ�ε���GetAdapterInfo��ȡulOutBufLen��С 
		if (dwRetVal == ERROR_BUFFER_OVERFLOW) 
		{ 
			free(pAdapterInfo); 
			pAdapterInfo = (IP_ADAPTER_INFO *) malloc (ulOutBufLen); 
			dwRetVal = GetAdaptersInfo( pAdapterInfo, &ulOutBufLen);
		} 
		if (dwRetVal == NO_ERROR)
		{ 
			pAdapter = pAdapterInfo; 
			while (pAdapter != NULL) 
			{ 	
				AdapterInfo adapterInfo;			
				char buf[256];
				memset(buf, 0, sizeof(buf));
				sprintf(buf,"%02X%02X%02X%02X%02X%02X",
					pAdapter->Address[0],
					pAdapter->Address[1],
					pAdapter->Address[2],
					pAdapter->Address[3],
					pAdapter->Address[4],
					pAdapter->Address[5]);
				adapterInfo.strMacAddress = buf;		
				adapterInfo.strAdapterName = pAdapter->AdapterName;
				adapterInfo.strAdapterDesp = pAdapter->Description;
				adapterInfo.iType = pAdapter->Type;


				memset(buf, 0, sizeof(buf));
				switch(pAdapter->Type)
				{
				case MIB_IF_TYPE_OTHER:
					strcpy(buf, "OTHER �������͵�������");
					break;
				case MIB_IF_TYPE_ETHERNET:
					strcpy(buf, "ETHERNET ��̫��������");
					break;				
				case MIB_IF_TYPE_TOKENRING:	
					strcpy(buf, "TOKENRING ���ƻ�������");
					break;
				case MIB_IF_TYPE_FDDI:	
					strcpy(buf, "FDDI FDDI�����˷ֲ����ݽӿڣ�������");
					break;
				case MIB_IF_TYPE_PPP:
					strcpy(buf, "PPP PPP������");
					break;
				case MIB_IF_TYPE_LOOPBACK:	
					strcpy(buf, "LOOPBACK Loopback������");
					break;
				case MIB_IF_TYPE_SLIP:	
					strcpy(buf, "SLIP Slip������");
					break;
				case IF_TYPE_IEEE80211:
					strcpy(buf, "An IEEE 802.11 wireless network interface");
					break;
				default:			
					break;
				}
				adapterInfo.strType = buf;
				memset(buf, 0, sizeof(buf));
				sprintf(buf, "%s",pAdapter->GatewayList.IpAddress.String);
				adapterInfo.strGateWay = buf;

				PIP_ADDR_STRING pAddressList = &(pAdapter->IpAddressList);
				string strIP = "";
				do 
				{
					strIP	+=	pAddressList->IpAddress.String;
					pAddressList = pAddressList->Next;
					if (pAddressList != NULL)
						strIP	+=";";
				} while (pAddressList != NULL);
				adapterInfo.strIP = strIP;

				memset(buf, 0, sizeof(buf));
				sprintf(buf, "%s",	pAdapter->IpAddressList.IpMask.String);		
				adapterInfo.strSubnet = buf;

				if (pAdapter->HaveWins) 
				{
					memset(buf, 0, sizeof(buf));
					sprintf(buf, "%s",	pAdapter->PrimaryWinsServer.IpAddress.String);	
					adapterInfo.strPrimaryWinsServer = buf;
				}			
				else
				{
					adapterInfo.strPrimaryWinsServer = "N/A" ;
				}


				if (pAdapter->DhcpEnabled )
				{
					memset(buf, 0, sizeof(buf));
					sprintf(buf, "%s",	pAdapter->DhcpServer.IpAddress.String);	
					adapterInfo.strDHCP = buf;
				}
				else
					adapterInfo.strDHCP = "N/A";

				m_vecAdapterInfo.push_back(adapterInfo);
				pAdapter = pAdapter->Next; 
			}
		} 

		if (pAdapterInfo != NULL)
		{
			free(pAdapterInfo);
		}

		return m_vecAdapterInfo.size();
	}











}
}

