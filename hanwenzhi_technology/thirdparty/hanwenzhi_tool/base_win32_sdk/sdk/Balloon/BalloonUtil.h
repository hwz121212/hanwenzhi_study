#ifndef _H_BALLOONUTIL_63EBC917_FB95_4DD8_980C_BEFD3610FBE4
#define _H_BALLOONUTIL_63EBC917_FB95_4DD8_980C_BEFD3610FBE4


namespace sdk
{
	class AFX_EXT_CLASS CBalloonUtil
	{
	public:
		static void TaskBarIconDisplayBalloonTooltip (HWND hwnd, UINT iIcon, wchar_t *headline, wchar_t *text, BOOL warning);
	};

}

#endif