#include "stdafx.h"
#include "cursor.h"


namespace sdk
{


	void CCursorUtil::WaitCursor ()
	{
		static HCURSOR hcWait;
		if (hcWait == NULL)
			hcWait = LoadCursor (NULL, IDC_WAIT);
		SetCursor (hcWait);
	}

	void CCursorUtil::NormalCursor ()
	{
		static HCURSOR hcArrow;
		if (hcArrow == NULL)
			hcArrow = LoadCursor (NULL, IDC_ARROW);
		SetCursor (hcArrow);
	}

	void CCursorUtil::ArrowWaitCursor ()
	{
		static HCURSOR hcArrowWait;
		if (hcArrowWait == NULL)
			hcArrowWait = LoadCursor (NULL, IDC_APPSTARTING);
		SetCursor (hcArrowWait);
	}

	void CCursorUtil::HandCursor ()
	{
		static HCURSOR hcHand;
		if (hcHand == NULL)
			hcHand = LoadCursor (NULL, IDC_HAND);
		SetCursor (hcHand);
	}









	
}
