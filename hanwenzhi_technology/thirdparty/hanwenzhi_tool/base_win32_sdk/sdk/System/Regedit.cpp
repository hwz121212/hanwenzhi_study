#include "stdafx.h"
#include "Regedit.h"




void CRegeditUtil::OpenRegedit()
{
::ShellExecute(0, _T("open"), _T("regedit"), 0, 0, SW_SHOWNORMAL);
}

		 
