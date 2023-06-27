#ifndef _H_MACINFO_B800774B_9874_48F7_A660_E26B6F53E82F
#define _H_MACINFO_B800774B_9874_48F7_A660_E26B6F53E82F


namespace sdk
{
	namespace mac_info
	{



		typedef struct _AdapterInfo
		{
			string strAdapterName;
			string strAdapterDesp;
			string strIP;
			string strGateWay;
			int	   iType;
			string strType;
			string strSubnet;
			string strPrimaryWinsServer;
			string strDHCP;
			string strMacAddress;
		}AdapterInfo;


		class AFX_EXT_CLASS CGetMacInfo
		{
		public:
			CGetMacInfo();
			int InitMacInfo();
			string GetLocalMac();
			vector<AdapterInfo> m_vecAdapterInfo;	

		};


		
	}
}





#endif