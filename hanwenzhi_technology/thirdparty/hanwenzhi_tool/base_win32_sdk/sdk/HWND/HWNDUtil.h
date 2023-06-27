#ifndef _H_HWNDUTIL_2892BC78_1E97_4A53_96F8_B092C0869577
#define _H_HWNDUTIL_2892BC78_1E97_4A53_96F8_B092C0869577


namespace sdk
{
	class AFX_EXT_CLASS CHWNDUtil
	{
	public:
		static void SetHwndForeFront(HWND hwnd, bool bYes);		//将窗体置为最前面
		static void TransparentWindow ( HWND hWnd, BYTE bAlpha/*0~255*/ );



	};



}

#endif