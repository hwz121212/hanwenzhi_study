#pragma once


// CUIImagePreview

namespace sdk
{
	class AFX_EXT_CLASS CUIImagePreview : public CStatic
	{
		DECLARE_DYNAMIC(CUIImagePreview)

	public:
		CUIImagePreview();
		virtual ~CUIImagePreview();

	private:
		CImage m_imgPreview;

	public:
		void SetPreviewImage(LPCTSTR pstrImage);

	protected:
		DECLARE_MESSAGE_MAP()
	public:
		afx_msg void OnPaint();
	};

	
}
