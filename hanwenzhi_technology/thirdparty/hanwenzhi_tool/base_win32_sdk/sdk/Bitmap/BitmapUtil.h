#ifndef _H_BITMAPUTIL_6082B5FE_C762_40AB_A043_45C88DEEEEEF
#define _H_BITMAPUTIL_6082B5FE_C762_40AB_A043_45C88DEEEEEF


namespace sdk
{
	class AFX_EXT_CLASS CBitmapUtil
	{
	public:

		
// 		static Image * LoadImage( UINT nID, LPCTSTR lpszType, HINSTANCE hInstance = NULL);
// 		static HRGN CreateRegionFromBitmap(Bitmap* bitmap, BYTE alphaValve = 0);
		static HRGN CreateRegion(LPCTSTR lpszFile, BYTE alphaValve = 0);
		static HRGN CreateRegion(UINT nID, LPCTSTR lpszType, HINSTANCE hInstance = NULL, BYTE alphaValve = 0); 


		static bool CalculateTransparentPixel( CImage *imageBackGround );
		static bool CloneImage(CImage *srcImage,CImage *imageClone) ;
		static bool CreateBlankImage(CImage *image, int width, int height, COLORREF color, int bpp = 32, DWORD alpha = 0);


		static HDC CreateMemBitmap (HINSTANCE hInstance, HWND hwnd, char *resource);
		


	};



	namespace bitmaputil
	{

		bool SaveBitmapToFile(CBitmap* bitmap, LPSTR lpFileName);
		bool VerticalCombine2BMP(const CString& strBmp1, const CString& strBmp2, const CString& strBmpFinial);
		bool GetHBITMAPFromBuf(char *pBuffer, int width, int height, HBITMAP & hBitmap);
		bool IsBmpFile(const CString& strBmpFile);

		bool StretchBmpFor192_8_1(const CString& strSourceFile, const CString& strDesFile);
		bool StretchBmp(const CString& strSourceFile, const CString& strDesFile, int iDesWidth, int iDesHeight);
		bool EnlargeBmp(const CString& strSourceFile, const CString& strDesFile, int iRealSize, int iDesSize);

	}




}

#endif