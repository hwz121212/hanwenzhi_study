#include "stdafx.h"
#include "KeyboardUtil.h"


namespace sdk
{
	
	BOOL CKeyboardUtil::CheckCapsLock ()
	{
		if ((GetKeyState(VK_CAPITAL) & 1) != 0)	
		{
			return TRUE;
		}
		return FALSE;
	}
	
	bool CKeyboardUtil::IsShiftPressed() 
	{
		return (::GetKeyState(VK_SHIFT) & 0x8000) == 0x8000;
	}

	bool CKeyboardUtil::IsCtrlPressed() 
	{
		return (::GetKeyState(VK_CONTROL) & 0x8000) == 0x8000;
	}

	bool CKeyboardUtil::IsAltPressed() 
	{
		return (::GetKeyState(VK_MENU) & 0x8000) == 0x8000;
	}

}
