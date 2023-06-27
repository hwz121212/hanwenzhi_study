#ifndef _H_OSVERSION_8483E2DB_DA96_4882_A8C2_58A476D0960E
#define _H_OSVERSION_8483E2DB_DA96_4882_A8C2_58A476D0960E


namespace sdk
{


	class AFX_EXT_CLASS COSVersion
	{
		public:
			typedef enum
			{
				// IMPORTANT: If you add a new item here, update IsOSVersionAtLeast().

				WIN_UNKNOWN = 0,
				WIN_31,
				WIN_95,
				WIN_98,
				WIN_ME,
				WIN_NT3,
				WIN_NT4,
				WIN_2000,
				WIN_XP,
				WIN_XP64,
				WIN_SERVER_2003,
				WIN_VISTA,
				WIN_SERVER_2008,
				WIN_7,
				WIN_SERVER_2008_R2,
			} OSVersionEnum;
		

		public:
	
			static bool GetOSVersionInfo(OSVersionEnum& nCurrentOS, int& CurrentOSMajor, int& CurrentOSMinor, int& CurrentOSServicePack);
			static string GetWindowsEdition ();		//ÀýÈç£º·µ»Ø winxp

			static BOOL IsOSAtLeast (OSVersionEnum reqMinOS);
			static BOOL IsOSVersionAtLeast (OSVersionEnum reqMinOS, int reqMinServicePack);
			static BOOL IsServerOS();
			static BOOL Is64BitOs ();
			



	};

}

#endif