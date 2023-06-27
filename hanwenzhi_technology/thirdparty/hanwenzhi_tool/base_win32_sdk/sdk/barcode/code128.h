#pragma once






namespace sdk
{
	namespace barcode
	{
		namespace code128
		{

			void StringToCode128Barcode192WidthBmpObj(CString strBar, CBitmap& bmp);
			bool StringToCode128Barcode192WidthBmpFile(CString strBar, CString strDesFile);
			void StringToCode128Barcode384WidthBmpObj(CString strBar, CBitmap& bmp);
			bool StringToCode128Barcode384WidthBmpFile(CString strBar, CString strDesFile);



		}
	}
}