#ifndef _H_UI_BUTTON_6032DEC6_C93B_416F_B0D9_4E98F09E7073
#define _H_UI_BUTTON_6032DEC6_C93B_416F_B0D9_4E98F09E7073


namespace sdk
{
	class AFX_EXT_CLASS CColorBtn : public CMFCColorButton
	{
		DECLARE_DYNAMIC(CColorBtn)

	protected:
		virtual void OnDraw(CDC* pDC, const CRect& rect, UINT uiState);
	};


	
}


#endif