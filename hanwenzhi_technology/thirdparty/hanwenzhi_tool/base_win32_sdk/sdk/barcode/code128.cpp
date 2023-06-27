#include "stdafx.h"
#include "code128.h"
#include "Bitmap/BitmapUtil.h"
#include "barcodemore.h"

namespace sdk
{
	namespace barcode
	{
		namespace code128
		{

			void StringToCode128Barcode192WidthBmpObj(CString strBar, CBitmap& bmp)
			{
				CDC   cdcFinial;				
				
				int iFinialWidth = 192;
				int iFinialHeight = 60;

				cdcFinial.CreateCompatibleDC(NULL);
				bmp.CreateCompatibleBitmap(&cdcFinial, iFinialWidth, iFinialHeight);
				cdcFinial.SelectObject(&bmp);	

				cdcFinial.SelectStockObject(WHITE_BRUSH);
				cdcFinial.SelectStockObject(WHITE_PEN);
				cdcFinial.SetBkColor(RGB(255,255,255));
				cdcFinial.Rectangle(0,0, iFinialWidth, iFinialHeight);
				cdcFinial.FloodFill(0,0,RGB(255,255,255));

				COLORREF clrBar		= RGB(0,0,0);
				COLORREF clrSpace	= RGB(255,255,255);
				int iPenW = 1;

				Barcode128 code;
				code.Encode128C(strBar);
				code.DrawBarcode(cdcFinial.m_hDC, 25, 5, 35, 45, clrBar, clrSpace, iPenW);	

				CFont font;
				LOGFONT lf;
				lf.lfHeight=15;
				lf.lfWidth=7;
				lf.lfEscapement=0;
				lf.lfOrientation=0;
				lf.lfWeight=FW_NORMAL;
				lf.lfItalic=FALSE;
				lf.lfUnderline=FALSE;
				lf.lfStrikeOut=FALSE;
				lf.lfCharSet=ANSI_CHARSET;
				lf.lfClipPrecision=CLIP_DEFAULT_PRECIS;
				lf.lfQuality=DEFAULT_QUALITY;
				lf.lfPitchAndFamily=FF_ROMAN|DEFAULT_PITCH;
				::lstrcpy(lf.lfFaceName,_T("Times New Roman"));
				font.CreateFontIndirect(&lf);
				cdcFinial.SelectObject(&font);

				CString strTemp = strBar;
				CStringArray arrTemp;
				while(strTemp.GetLength() > 5)
				{
					CString strPart = strTemp.Left(5);
					arrTemp.Add(strPart);
					strTemp = strTemp.Right(strTemp.GetLength() - 5);
				}
				arrTemp.Add(strTemp);
				
				CString strOut;
				for (int index=0; index<arrTemp.GetCount(); index++)
				{
					strOut += arrTemp.GetAt(index);
					strOut += " ";
				}

				cdcFinial.TextOut(15, 40, strOut);
				font.DeleteObject();

				cdcFinial.SelectObject(&bmp);			
				cdcFinial.DeleteDC();			
			}

			bool StringToCode128Barcode192WidthBmpFile(CString strBar, CString strDesFile)
			{		
				bool bResult = false;
				CBitmap bmp;
				StringToCode128Barcode192WidthBmpObj(strBar, bmp);				
				bResult = sdk::bitmaputil::SaveBitmapToFile(&bmp, (LPTSTR)(LPCTSTR)strDesFile);								
				bmp.DeleteObject();
				return bResult;
			}

			void StringToCode128Barcode384WidthBmpObj(CString strBar, CBitmap& bmp)
			{
				CDC   cdcFinial;				

				int iFinialWidth = 384;
				int iFinialHeight = 70;

				cdcFinial.CreateCompatibleDC(NULL);
				bmp.CreateCompatibleBitmap(&cdcFinial, iFinialWidth, iFinialHeight);
				cdcFinial.SelectObject(&bmp);	

				cdcFinial.SelectStockObject(WHITE_BRUSH);
				cdcFinial.SelectStockObject(WHITE_PEN);
				cdcFinial.SetBkColor(RGB(255,255,255));
				cdcFinial.Rectangle(0,0, iFinialWidth, iFinialHeight);
				cdcFinial.FloodFill(0,0,RGB(255,255,255));

				COLORREF clrBar		= RGB(0,0,0);
				COLORREF clrSpace	= RGB(255,255,255);
				int iPenW = 2;

				Barcode128 code;
				code.Encode128C(strBar);
				code.DrawBarcode(cdcFinial.m_hDC, 25, 5, 45, 45, clrBar, clrSpace, iPenW);	

				CFont font;
				LOGFONT lf;
				lf.lfHeight=15;
				lf.lfWidth=10;
				lf.lfEscapement=0;
				lf.lfOrientation=0;
				lf.lfWeight=FW_NORMAL;
				lf.lfItalic=FALSE;
				lf.lfUnderline=FALSE;
				lf.lfStrikeOut=FALSE;
				lf.lfCharSet=ANSI_CHARSET;
				lf.lfClipPrecision=CLIP_DEFAULT_PRECIS;
				lf.lfQuality=DEFAULT_QUALITY;
				lf.lfPitchAndFamily=FF_ROMAN|DEFAULT_PITCH;
				::lstrcpy(lf.lfFaceName,_T("Times New Roman"));
				font.CreateFontIndirect(&lf);
				cdcFinial.SelectObject(&font);

				CString strTemp = strBar;
				CStringArray arrTemp;
				while(strTemp.GetLength() > 5)
				{
					CString strPart = strTemp.Left(5);
					arrTemp.Add(strPart);
					strTemp = strTemp.Right(strTemp.GetLength() - 5);
				}
				arrTemp.Add(strTemp);

				CString strOut;
				for (int index=0; index<arrTemp.GetCount(); index++)
				{
					strOut += arrTemp.GetAt(index);
					strOut += " ";
				}

				cdcFinial.TextOut(25, 50, strOut);
				font.DeleteObject();

				cdcFinial.SelectObject(&bmp);			
				cdcFinial.DeleteDC();
			}

			bool StringToCode128Barcode384WidthBmpFile(CString strBar, CString strDesFile)
			{
				bool bResult = false;
				CBitmap bmp;
				StringToCode128Barcode384WidthBmpObj(strBar, bmp);				
				bResult = sdk::bitmaputil::SaveBitmapToFile(&bmp, (LPTSTR)(LPCTSTR)strDesFile);							
				bmp.DeleteObject();
				return bResult;
			}



		}
	}
}