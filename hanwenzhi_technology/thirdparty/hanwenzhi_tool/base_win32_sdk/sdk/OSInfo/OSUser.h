#ifndef _H_OSUSER_850DAAA2_B406_470C_9E21_90212EA59016
#define _H_OSUSER_850DAAA2_B406_470C_9E21_90212EA59016


namespace sdk
{
	class AFX_EXT_CLASS COSUser
	{
	public:
		static BOOL IsAdmin ();		
		static BOOL IsBuiltInAdmin ();
		static BOOL IsUacSupported ();

		static BOOL IsRemoteSession();
	};


}

#endif