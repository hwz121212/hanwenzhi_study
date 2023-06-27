#include "stdafx.h"
#include "BitmapUtil.h"


namespace sdk
{


	//-------------------------------------------------------------------------    
	// Function Name    :LoadImage
	// Parameter(s)     :UINT nID				The resource id
	//					:LPCTSTR lpszType		The resource type
	//					:HINSTANCE hInstance	The module handle
	// Return           :Image *                                  
	// Memo             :Load the GDIPlus::Image from resource
	//-------------------------------------------------------------------------   
// 	Image * CBitmapUtil::LoadImage( UINT nID, LPCTSTR lpszType, HINSTANCE hInstance /*=NULL*/)
// 	{
// 		Image * pImage = NULL;
// 
// 		if( lpszType == RT_BITMAP )
// 		{
// 			HBITMAP hBitmap = ::LoadBitmap( hInstance, MAKEINTRESOURCE(nID) );
// 			pImage = (Image*)Bitmap::FromHBITMAP(hBitmap, 0);
// 			::DeleteObject(hBitmap);
// 			return pImage;
// 		}		
// 
// 		hInstance = (hInstance == NULL) ? ::AfxGetResourceHandle() : hInstance;
// 		HRSRC hRsrc = ::FindResource ( hInstance, MAKEINTRESOURCE(nID), lpszType); 
// 		ASSERT(hRsrc != NULL);
// 
// 		DWORD dwSize = ::SizeofResource( hInstance, hRsrc);
// 		LPBYTE lpRsrc = (LPBYTE)::LoadResource( hInstance, hRsrc);
// 		ASSERT(lpRsrc != NULL);
// 
// 		HGLOBAL hMem = ::GlobalAlloc(GMEM_FIXED, dwSize);
// 		LPBYTE pMem = (LPBYTE)::GlobalLock(hMem);
// 		memcpy( pMem, lpRsrc, dwSize);
// 		IStream * pStream = NULL;
// 		::CreateStreamOnHGlobal( hMem, FALSE, &pStream);
// 
// 		pImage = Image::FromStream(pStream);
// 
// 		::GlobalUnlock(hMem);
// 		pStream->Release();
// 		::FreeResource(lpRsrc);
// 
// 		return pImage;
// 	}
// 
// 	HRGN CBitmapUtil::CreateRegionFromBitmap(Bitmap* bitmap, BYTE alphaValve/* = 0*/)
// 	{
// 		UINT width = bitmap->GetWidth();
// 		UINT height = bitmap->GetHeight();
// 
// 		Color color;
// 		HRGN hRegion = ::CreateRectRgn(0, 0, width, height);
// 		HRGN rgn = ::CreateRectRgn(0, 0, width, height);
// 		for (UINT h = 0; h < width; ++h)
// 		{
// 			for (UINT w = 0; w < height; ++w)
// 			{
// 				UINT start = w;
// 				while (w < width)
// 				{
// 					bitmap->GetPixel(w, h, &color);
// 					if (color.GetAlpha() > alphaValve)
// 						break;
// 
// 					++w;
// 				}
// 
// 				if (w > start)
// 				{
// 					::SetRectRgn(rgn, start, h, w, h + 1);
// 					::CombineRgn(hRegion, hRegion, rgn, RGN_DIFF);
// 				}
// 			}
// 		}
// 
// 		::DeleteObject(rgn);
// 		return hRegion;
// 	}
// 
// 	HRGN CBitmapUtil::CreateRegion(LPCTSTR lpszFile, BYTE alphaValve/* = 0*/)
// 	{
// 		if (!sdk::CFileUtil::IsFileExist(lpszFile))
// 			return NULL;
// 
// 		Bitmap bitmap(sdk::CStringUtil::UTF82Unicode(lpszFile).c_str());
// 		return CreateRegionFromBitmap(&bitmap);
// 	}
// 
// 	HRGN CBitmapUtil::CreateRegion(UINT nID, LPCTSTR lpszType, HINSTANCE hInstance/* = NULL*/, BYTE alphaValve/* = 0*/)
// 	{
// 		Image* image = LoadImage(nID, lpszType, hInstance);
// 		if ((image == NULL) || (ImageTypeBitmap != image->GetType()))
// 			return NULL;
// 
// 		Bitmap* bitmap = (Bitmap*)image;
// 		return CreateRegionFromBitmap(bitmap);
// 	}


	bool CBitmapUtil::CalculateTransparentPixel( CImage *imageBackGround )
	{
		if (imageBackGround->IsNull())
		{
			return false;
		}
		if (imageBackGround->GetBPP()==32)
		{
			int i;
			int j;
			for (i = 0; i < imageBackGround->GetWidth(); i++)
			{
				for (j = 0; j < imageBackGround->GetHeight(); j++)
				{
					byte *pByte = (byte *)imageBackGround->GetPixelAddress(i, j);
					pByte[0] = pByte[0] * pByte[3] / 255;
					pByte[1] = pByte[1] * pByte[3] / 255;
					pByte[2] = pByte[2] * pByte[3] / 255;
				}
			}
			return true;
		}
		else
		{
			return false;
		}
	}
	bool CBitmapUtil::CloneImage(CImage *srcImage,CImage *imageClone) 
	{
		if (!imageClone->IsNull())
		{
			imageClone->Destroy();
		}
		if (!imageClone->Create(srcImage->GetWidth(),srcImage->GetWidth(),32))
		{
			return false;
		}
		if(!srcImage->Draw(imageClone->GetDC(),0,0,srcImage->GetWidth(),srcImage->GetHeight()))
		{
			imageClone->ReleaseDC();
			return false;
		}
		else
		{
			imageClone->ReleaseDC();
			return true;
		}

	}

	bool CBitmapUtil::CreateBlankImage(CImage *image, int width, int height, COLORREF color, int bpp /*= 32*/, DWORD alpha /*= 0*/)
	{
		if (NULL == image)
		{
			return false;
		}
		if (!image->IsNull())
		{
			image->Destroy();
		}
		if(!image->Create(width, height, bpp, alpha))
		{
			return false;
		}
		else
		{
			CDC blankDC;
			HDC hBlankDC = image->GetDC();
			blankDC.Attach(hBlankDC);
			blankDC.FillSolidRect(0, 0, image->GetWidth(), image->GetWidth(), color);
			blankDC.Detach();
			image->ReleaseDC();
			return true;
		}

	}




	HDC CBitmapUtil::CreateMemBitmap (HINSTANCE hInstance, HWND hwnd, char *resource)
	{
		HBITMAP picture = LoadBitmap (hInstance, resource);
		HDC viewDC = GetDC (hwnd), dcMem;

		dcMem = CreateCompatibleDC (viewDC);

		SetMapMode (dcMem, MM_TEXT);

		SelectObject (dcMem, picture);

		DeleteObject (picture);

		ReleaseDC (hwnd, viewDC);

		return dcMem;
	}





	namespace bitmaputil
	{

		bool SaveBitmapToFile(CBitmap* bitmap, LPSTR lpFileName)  
		{   
			CString strDesPath = lpFileName;
			CString strDesPathWithoutName = sdk::processutil::GetPathByFullPath(strDesPath);
			sdk::fileutil::CreatMultiDir(strDesPathWithoutName);

			HBITMAP hBitmap;    // 为刚才的屏幕位图句柄  
			HDC hDC; //设备描述表    
			int iBits; //当前显示分辨率下每个像素所占字节数    
			WORD wBitCount; //位图中每个像素所占字节数    
			DWORD dwPaletteSize = 0, //定义调色板大小  
				dwBmBitsSize,  //位图中像素字节大小     
				dwDIBSize,   //位图文件大小  
				dwWritten;  //写入文件字节数  
			BITMAP Bitmap; //位图属性结构    
			BITMAPFILEHEADER bmfHdr; //位图文件头结构    
			BITMAPINFOHEADER bi; //位图信息头结构      
			LPBITMAPINFOHEADER lpbi; //指向位图信息头结构    
			HANDLE fh,   //定义文件  
				hDib,    //分配内存句柄  
				hPal,   //调色板句柄  
				hOldPal = NULL;  

			//计算位图文件每个像素所占字节数    
			hBitmap = (HBITMAP)*bitmap;    
			hDC = CreateDC("DISPLAY",NULL,NULL,NULL);    
			iBits = GetDeviceCaps(hDC, BITSPIXEL) * GetDeviceCaps(hDC, PLANES);    
			DeleteDC(hDC);  

			iBits = 1;

			if (iBits <= 1)    
				wBitCount = 1;    
			else if (iBits <= 4)    
				wBitCount = 4;    
			else if (iBits <= 8)    
				wBitCount = 8;    
			else if (iBits <= 24)    
				wBitCount = 24;    
			else if (iBits <= 32)  
				wBitCount = 32;  

			//计算调色板大小    
			if (wBitCount <= 8)    
				dwPaletteSize = (1 << wBitCount) * sizeof (RGBQUAD);  

			//设置位图信息头结构    
			GetObject(hBitmap, sizeof (BITMAP), (LPSTR)&Bitmap);  
			bi.biSize = sizeof (BITMAPINFOHEADER);    
			bi.biWidth = Bitmap.bmWidth;    
			bi.biHeight = Bitmap.bmHeight;    
			bi.biPlanes = 1;      
			bi.biBitCount = wBitCount;    
			bi.biCompression = BI_RGB;    
			bi.biSizeImage = 0;    
			bi.biXPelsPerMeter = 0;    
			bi.biYPelsPerMeter = 0;    
			bi.biClrUsed = 0;    
			bi.biClrImportant = 0;    

			dwBmBitsSize = ((Bitmap.bmWidth * wBitCount+31) / 32) * 4 * Bitmap.bmHeight;    

			//为位图内容分配内存    
			hDib = GlobalAlloc(GHND, dwBmBitsSize + dwPaletteSize + sizeof (BITMAPINFOHEADER));    
			lpbi = (LPBITMAPINFOHEADER)GlobalLock(hDib);    
			*lpbi = bi;  

			// 处理调色板         
			hPal = GetStockObject(DEFAULT_PALETTE);    
			if (hPal)    
			{    
				hDC = ::GetDC(NULL);      
				hOldPal = ::SelectPalette(hDC, (HPALETTE)hPal, FALSE);    
				RealizePalette(hDC);  
			}    

			//   获取该调色板下新的像素值    
			GetDIBits(hDC, hBitmap, 0, (UINT) Bitmap.bmHeight,    
				(LPSTR)lpbi + sizeof (BITMAPINFOHEADER) + dwPaletteSize,  
				(LPBITMAPINFO)lpbi, DIB_RGB_COLORS);    

			//恢复调色板       
			if (hOldPal)      
			{    
				SelectPalette(hDC, (HPALETTE)hOldPal, TRUE);    
				RealizePalette(hDC);    
				::ReleaseDC(NULL, hDC);  
			}    

			//创建位图文件              
			fh = CreateFile(lpFileName, GENERIC_WRITE,  
				0, NULL, CREATE_ALWAYS,  
				FILE_ATTRIBUTE_NORMAL | FILE_FLAG_SEQUENTIAL_SCAN, NULL);    

			if (fh == INVALID_HANDLE_VALUE)  
				return FALSE;    

			//   设置位图文件头    
			bmfHdr.bfType = 0x4D42;     //   "BM"    
			dwDIBSize = sizeof (BITMAPFILEHEADER)       
				+ sizeof (BITMAPINFOHEADER)    
				+ dwPaletteSize + dwBmBitsSize;      
			bmfHdr.bfSize = dwDIBSize;    
			bmfHdr.bfReserved1 = 0;    
			bmfHdr.bfReserved2 = 0;    
			bmfHdr.bfOffBits = (DWORD)sizeof (BITMAPFILEHEADER)     
				+ (DWORD)sizeof (BITMAPINFOHEADER)    
				+ dwPaletteSize;      

			//   写入位图文件头    
			WriteFile(fh, (LPSTR)&bmfHdr, sizeof(BITMAPFILEHEADER), &dwWritten, NULL);    

			//   写入位图文件其余内容    
			WriteFile(fh, (LPSTR)lpbi, dwDIBSize,  
				&dwWritten, NULL);  

			//清除            
			GlobalUnlock(hDib);    
			GlobalFree(hDib);    
			CloseHandle(fh);    

			return TRUE;      
		}   

		bool VerticalCombine2BMP(const CString& strBmp1, const CString& strBmp2, const CString& strBmpFinial)
		{
			int iWidthBmp1 = 0;
			int iHeightBmp1 = 0;
			CBitmap bmpBmp1;	
			HBITMAP hBitmapBmp1 = (HBITMAP) ::LoadImage(NULL, (LPTSTR)(LPCTSTR)strBmp1, IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION | LR_DEFAULTSIZE);
			if (hBitmapBmp1 != NULL) 
			{
				bmpBmp1.Attach(hBitmapBmp1);
				BITMAP bmBmp1;
				bmpBmp1.GetBitmap(&bmBmp1);	
				iWidthBmp1 = bmBmp1.bmWidth;
				iHeightBmp1 = bmBmp1.bmHeight;
			}			

			int iWidthBmp2 = 0;
			int iHeightBmp2 = 0;
			CBitmap bmpBmp2;	
			HBITMAP hBitmapBmp2 = (HBITMAP) ::LoadImage(NULL, (LPTSTR)(LPCTSTR)strBmp2, IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION | LR_DEFAULTSIZE);
			if (hBitmapBmp2 != NULL) 
			{
				bmpBmp2.Attach(hBitmapBmp2);
				BITMAP bmBmp2;
				bmpBmp2.GetBitmap(&bmBmp2);	
				iWidthBmp2 = bmBmp2.bmWidth;
				iHeightBmp2 = bmBmp2.bmHeight;
			}

			int VER_SPACE_SIZE = 	30; 
			int iFinialHeight = 0;
			iFinialHeight += iHeightBmp1;
			iFinialHeight += VER_SPACE_SIZE;
			iFinialHeight += iHeightBmp2;
			iFinialHeight += VER_SPACE_SIZE;	

			CDC cdcFinial;
			cdcFinial.CreateCompatibleDC(NULL);	
			CBitmap bmpFinial;	
			bmpFinial.CreateCompatibleBitmap(&cdcFinial, iWidthBmp1, iFinialHeight);  
			cdcFinial.SelectObject(&bmpFinial);				
			cdcFinial.SelectStockObject(WHITE_BRUSH);
			cdcFinial.SelectStockObject(WHITE_PEN);
			cdcFinial.SetBkColor(RGB(255,255,255));
			cdcFinial.FloodFill(0,0,RGB(255,255,255));


			int iPosVer = 0;
			CDC cdcBmp1;
			cdcBmp1.CreateCompatibleDC(&cdcFinial);
			cdcBmp1.SelectObject(&bmpBmp1);
			cdcFinial.StretchBlt(0,0,iWidthBmp1,iHeightBmp1,&cdcBmp1,0,0,iWidthBmp1,iHeightBmp1,SRCCOPY);

			iPosVer += iHeightBmp1 + VER_SPACE_SIZE;

			CDC cdcBmp2;
			cdcBmp2.CreateCompatibleDC(&cdcFinial);
			cdcBmp2.SelectObject(&bmpBmp2);
			cdcFinial.StretchBlt(0,iPosVer,iWidthBmp2,iHeightBmp2,&cdcBmp2,0,0,iWidthBmp2,iHeightBmp2,SRCCOPY);

			bool bOK = sdk::bitmaputil::SaveBitmapToFile(&bmpFinial, (LPTSTR)(LPCTSTR)strBmpFinial);

			cdcFinial.DeleteDC();
			cdcBmp1.DeleteDC();
			cdcBmp2.DeleteDC();
			bmpFinial.DeleteObject();
			bmpBmp1.DeleteObject();
			bmpBmp2.DeleteObject();

			return bOK;
		}


		bool GetHBITMAPFromBuf(char *pBuffer, int width, int height, HBITMAP & hBitmap)
		{
			LPSTR hDIB; 
			LPVOID lpDIBBits; 
			BITMAPFILEHEADER bmpHeader; 
			DWORD bmpHeaderLen; 
			bmpHeaderLen = sizeof(bmpHeader);

			CDC cdc;
			cdc.CreateCompatibleDC(NULL); 			
			strncpy((LPSTR)&bmpHeader,(LPSTR)pBuffer,bmpHeaderLen); 
			if (bmpHeader.bfType!=(*(WORD*)"BM")) 
			{ 
				return false;
			} 

			hDIB = pBuffer+bmpHeaderLen;
			BITMAPINFOHEADER &bmiHeader=*(LPBITMAPINFOHEADER)hDIB; 
			bmiHeader.biHeight = height;
			bmiHeader.biWidth = width;
			bmiHeader.biPlanes			= 1;
			bmiHeader.biBitCount		= 1;
			bmiHeader.biCompression	= 0;
			bmiHeader.biSizeImage		= 0;
			bmiHeader.biXPelsPerMeter	= 0;
			bmiHeader.biYPelsPerMeter	= 0;
			bmiHeader.biClrUsed		= 0;
			bmiHeader.biClrImportant	= 0;
			BITMAPINFO &bmInfo=*(LPBITMAPINFO)hDIB; 
			lpDIBBits=(pBuffer)+((BITMAPFILEHEADER*)pBuffer)->bfOffBits; 			

			hBitmap=CreateDIBitmap(cdc.m_hDC, &bmiHeader,CBM_INIT,lpDIBBits, 
				&bmInfo,DIB_RGB_COLORS);      
			if (hBitmap==NULL) 
			{
				return false;
			}

			cdc.DeleteDC();
			return true;
		}

		bool IsBmpFile(const CString& strBmpFile)
		{
			CString strTemp = strBmpFile;
			HBITMAP hBitmap = (HBITMAP) ::LoadImage(NULL, strTemp, IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION | LR_DEFAULTSIZE);
			if (hBitmap != NULL) 
			{
				return true;
			}

			return false;
		}

		bool StretchBmpFor192_8_1(const CString& strSourceFile, const CString& strDesFile)
		{
			bool bResult = false;
			try
			{
				if(sdk::fileutil::IsFileExist((LPTSTR)(LPCTSTR)strSourceFile))
				{			
					HBITMAP hBitmapSource = (HBITMAP) ::LoadImage(NULL, (LPTSTR)(LPCTSTR)strSourceFile, IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION | LR_DEFAULTSIZE);
					if (hBitmapSource != NULL) 
					{
						CString strDesPath = strDesFile;
						strDesPath.Trim();
						CString strDesPathWithoutName = sdk::processutil::GetPathByFullPath(strDesPath);
						sdk::fileutil::CreatMultiDir(strDesPathWithoutName);

						CBitmap bmpSource;
						bmpSource.Attach(hBitmapSource);
						BITMAP bmSource;
						bmpSource.GetBitmap(&bmSource);	
						int iWidth = bmSource.bmWidth;
						int iHeight = bmSource.bmHeight;

						int iFinialWidth = iWidth;
						int iFinialHeight = (iHeight * 2 + 2)/3;

						CDC cdcFinial;
						cdcFinial.CreateCompatibleDC(NULL);	

						CBitmap bmpFinial;	
						bmpFinial.CreateCompatibleBitmap(&cdcFinial, iFinialWidth, iFinialHeight);  
						cdcFinial.SelectObject(&bmpFinial);
						cdcFinial.SelectStockObject(WHITE_BRUSH);
						cdcFinial.SelectStockObject(WHITE_PEN);
						cdcFinial.SetBkColor(RGB(255,255,255));
						cdcFinial.FloodFill(0,0,RGB(255,255,255));	

						CDC cdcSource;
						cdcSource.CreateCompatibleDC(&cdcFinial);
						cdcSource.SelectObject(&bmpSource);
						cdcFinial.StretchBlt(0, 0, iFinialWidth, iFinialHeight, &cdcSource, 0, 0, iWidth, iHeight, SRCCOPY);

						bResult = sdk::bitmaputil::SaveBitmapToFile(&bmpFinial, (LPTSTR)(LPCTSTR)strDesPath);
						cdcFinial.DeleteDC();
						bmpFinial.DeleteObject();	
						cdcSource.DeleteDC();
						bmpSource.DeleteObject();
					}					
				}						
			}			
			catch (...)
			{	
			}

			return bResult;
		}

		bool StretchBmp(const CString& strSourceFile, const CString& strDesFile, int iDesWidth, int iDesHeight)
		{
			bool bResult = false;
			try
			{
				if(sdk::fileutil::IsFileExist((LPTSTR)(LPCTSTR)strSourceFile))
				{			
					HBITMAP hBitmapSource = (HBITMAP) ::LoadImage(NULL, (LPTSTR)(LPCTSTR)strSourceFile, IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION | LR_DEFAULTSIZE);
					if (hBitmapSource != NULL) 
					{
						CString strDesPath = strDesFile;
						strDesPath.Trim();
						CString strDesPathWithoutName = sdk::processutil::GetPathByFullPath(strDesPath);
						sdk::fileutil::CreatMultiDir(strDesPathWithoutName);

						CBitmap bmpSource;
						bmpSource.Attach(hBitmapSource);
						BITMAP bmSource;
						bmpSource.GetBitmap(&bmSource);	
						int iWidth = bmSource.bmWidth;
						int iHeight = bmSource.bmHeight;					

						CDC cdcFinial;
						cdcFinial.CreateCompatibleDC(NULL);	

						CBitmap bmpFinial;	
						bmpFinial.CreateCompatibleBitmap(&cdcFinial, iDesWidth, iDesHeight);  
						cdcFinial.SelectObject(&bmpFinial);
						cdcFinial.SelectStockObject(WHITE_BRUSH);
						cdcFinial.SelectStockObject(WHITE_PEN);
						cdcFinial.SetBkColor(RGB(255,255,255));
						cdcFinial.FloodFill(0,0,RGB(255,255,255));	

						CDC cdcSource;
						cdcSource.CreateCompatibleDC(&cdcFinial);
						cdcSource.SelectObject(&bmpSource);
						cdcFinial.StretchBlt(0, 0, iDesWidth, iDesHeight, &cdcSource, 0, 0, iWidth, iHeight, SRCCOPY);

						bResult = sdk::bitmaputil::SaveBitmapToFile(&bmpFinial, (LPTSTR)(LPCTSTR)strDesPath);
						cdcFinial.DeleteDC();
						bmpFinial.DeleteObject();	
						cdcSource.DeleteDC();
						bmpSource.DeleteObject();
					}					
				}						
			}			
			catch (...)
			{	
			}

			return bResult;
		}


		bool EnlargeBmp(const CString& strSourceFile, const CString& strDesFile, int iRealSize, int iDesSize)
		{
			bool bResult = false;
			try
			{
				if(sdk::fileutil::IsFileExist((LPTSTR)(LPCTSTR)strSourceFile))
				{			
					HBITMAP hBitmapSource = (HBITMAP) ::LoadImage(NULL, (LPTSTR)(LPCTSTR)strSourceFile, IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION | LR_DEFAULTSIZE);
					if (hBitmapSource != NULL) 
					{
						CString strDesPath = strDesFile;
						strDesPath.Trim();
						CString strDesPathWithoutName = sdk::processutil::GetPathByFullPath(strDesPath);
						sdk::fileutil::CreatMultiDir(strDesPathWithoutName);

						CBitmap bmpSource;
						bmpSource.Attach(hBitmapSource);
						BITMAP bmSource;
						bmpSource.GetBitmap(&bmSource);	
						int iWidth = bmSource.bmWidth;
						int iHeight = bmSource.bmHeight;

						int iFinialWidth = (iWidth * iDesSize + iRealSize - 1)/iRealSize;
						int iFinialHeight = (iHeight * iDesSize + iRealSize - 1)/iRealSize;

						CDC cdcFinial;
						cdcFinial.CreateCompatibleDC(NULL);	

						CBitmap bmpFinial;	
						bmpFinial.CreateCompatibleBitmap(&cdcFinial, iFinialWidth, iFinialHeight);  
						cdcFinial.SelectObject(&bmpFinial);
						cdcFinial.SelectStockObject(WHITE_BRUSH);
						cdcFinial.SelectStockObject(WHITE_PEN);
						cdcFinial.SetBkColor(RGB(255,255,255));
						cdcFinial.FloodFill(0,0,RGB(255,255,255));	

						CDC cdcSource;
						cdcSource.CreateCompatibleDC(&cdcFinial);
						cdcSource.SelectObject(&bmpSource);
						cdcFinial.StretchBlt(0, 0, iFinialWidth, iFinialHeight, &cdcSource, 0, 0, iWidth, iHeight, SRCCOPY);

						bResult = sdk::bitmaputil::SaveBitmapToFile(&bmpFinial, (LPTSTR)(LPCTSTR)strDesPath);
						cdcFinial.DeleteDC();
						bmpFinial.DeleteObject();	
						cdcSource.DeleteDC();
						bmpSource.DeleteObject();
					}					
				}						
			}			
			catch (...)
			{	
			}

			return bResult;
		}



	}


}