#include "stdafx.h"
#include "UIButton.h"





IMPLEMENT_DYNAMIC(CColorBtn, CMFCColorButton)
	static const int nImageHorzMargin = 8;


namespace sdk
{

	void CColorBtn::OnDraw(CDC* pDC, const CRect& rect, UINT uiState)
	{
		ASSERT_VALID(pDC);

		if (m_pPalette == NULL)
		{
			RebuildPalette(NULL);
		}

		CPalette* pCurPalette = pDC->SelectPalette(m_pPalette, FALSE);
		pDC->RealizePalette();

		CSize sizeArrow = CMenuImages::Size();

		CRect rectColor = rect;
		rectColor.right -= sizeArrow.cx + nImageHorzMargin;

		CRect rectArrow = rect;
		rectArrow.left = rectColor.right;

		COLORREF color = m_Color;

		//---------------------------
		// Draw current color and color's value:
		//---------------------------
		CString strColor;
		color==(COLORREF)-1?strColor=_T("нч"):strColor.Format(_T("0x%06x"),color);

		rectColor.right = rectColor.left + rectColor.Height();

		CRect rectText = rect;
		rectText.left = rectColor.right;
		rectText.right = rectArrow.left;

		CFont* pOldFont=(CFont *)pDC->SelectStockObject(DEFAULT_GUI_FONT);
		pDC->SetBkMode(TRANSPARENT);
		pDC->SetTextColor(afxGlobalData.clrBtnText);
		pDC->DrawText(strColor, rectText, DT_CENTER | DT_VCENTER | DT_SINGLELINE | DT_END_ELLIPSIS);
		pDC->SelectObject(pOldFont);

		//----------------
		// Draw color box:
		//----------------
		rectColor.DeflateRect(2, 2);
		pDC->Draw3dRect(rectColor, afxGlobalData.clrBtnHilite, afxGlobalData.clrBtnHilite);
		rectColor.DeflateRect(1, 1);
		pDC->Draw3dRect(rectColor, afxGlobalData.clrBtnDkShadow, afxGlobalData.clrBtnDkShadow);
		rectColor.DeflateRect(1, 1);

		if (color != (COLORREF)-1 &&(uiState & ODS_DISABLED) == 0)
		{
			if (afxGlobalData.m_nBitsPerPixel == 8) // 256 colors
			{
				ASSERT_VALID(m_pPalette);
				color =  PALETTEINDEX(m_pPalette->GetNearestPaletteIndex(color));
			}

			CBrush br(color);
			pDC->FillRect(rectColor, &br);
		}

		//----------------------
		// Draw drop-down arrow:
		//----------------------
		CRect rectArrowWinXP = rectArrow;
		rectArrowWinXP.DeflateRect(2, 2);

		if (!m_bWinXPTheme || !CMFCVisualManager::GetInstance()->DrawComboDropButtonWinXP(pDC, rectArrowWinXP, (uiState & ODS_DISABLED), m_bPushed, m_bHighlighted))
		{
			pDC->FillRect(rectArrow, &afxGlobalData.brBtnFace);

			CMenuImages::Draw(pDC, CMenuImages::IdArrowDownLarge, rectArrow, (uiState & ODS_DISABLED) ? CMenuImages::ImageGray : CMenuImages::ImageBlack);

			pDC->Draw3dRect(rectArrow, afxGlobalData.clrBtnLight, afxGlobalData.clrBtnDkShadow);
			rectArrow.DeflateRect(1, 1);
			pDC->Draw3dRect(rectArrow, afxGlobalData.clrBtnHilite, afxGlobalData.clrBtnShadow);
		}

		if (pCurPalette != NULL)
		{
			pDC->SelectPalette(pCurPalette, FALSE);
		}
	}


}

