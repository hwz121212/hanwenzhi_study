#include "stdafx.h"
#include "HWNDUtil.h"



namespace sdk
{
	void CHWNDUtil::SetHwndForeFront(HWND hwnd, bool bYes)
	{
		SetWindowPos(hwnd, bYes ? HWND_TOPMOST : HWND_NOTOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
	}

	//
	// 将窗口透明化
	//
	void CHWNDUtil::TransparentWindow ( HWND hWnd, BYTE bAlpha/*0~255*/ )
	{
		if ( !IsWindow(hWnd) ) return;
		SetWindowLong(hWnd,GWL_EXSTYLE, GetWindowLong(hWnd,GWL_EXSTYLE)^0x80000);
		HINSTANCE hInst = LoadLibrary("User32.DLL");
		if(hInst)
		{
			typedef BOOL (WINAPI *MYFUNC)(HWND,COLORREF,BYTE,DWORD);
			MYFUNC fun = NULL;
			// 取得SetLayeredWindowAttributes函数指针 
			fun=(MYFUNC)GetProcAddress(hInst, "SetLayeredWindowAttributes");
			if(fun)fun(hWnd,0,bAlpha,2); 
			FreeLibrary(hInst);
		}
	}


}