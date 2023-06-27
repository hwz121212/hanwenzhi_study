#include "stdafx.h"
#include "qrcodeutil.h"
#include "Bitmap/BitmapUtil.h"
#include "qrencode.h"
#pragma comment(lib,"libqrencode.lib")



 

#define PIXEL_COLOR_R				0											// Color of bmp pixels
#define PIXEL_COLOR_G				0
#define PIXEL_COLOR_B				0

//BMP defines
typedef unsigned short	WORD;
typedef unsigned long	DWORD;
typedef signed long		LONG;

#define BI_RGB			0L

#pragma pack(push, 2) //2字节对齐，不然会出问题
//typedef struct
//{
//	WORD    bfType;
//	DWORD   bfSize;
//	WORD    bfReserved1;
//	WORD    bfReserved2;
//	DWORD   bfOffBits;
//} BITMAPFILEHEADER;
//
//typedef struct
//{
//	DWORD      biSize;
//	LONG       biWidth;
//	LONG       biHeight;
//	WORD       biPlanes;
//	WORD       biBitCount;
//	DWORD      biCompression;
//	DWORD      biSizeImage;
//	LONG       biXPelsPerMeter;
//	LONG       biYPelsPerMeter;
//	DWORD      biClrUsed;
//	DWORD      biClrImportant;
//} BITMAPINFOHEADER;



#pragma pack(pop)


namespace sdk
{
	namespace qrcodeutil
	{
	

		int generate(string& text, string& bmpSavedPath, int iSize)
		{
			CString strDesPathWithoutName = sdk::processutil::GetPathByFullPath(bmpSavedPath.c_str());
			sdk::fileutil::CreatMultiDir(strDesPathWithoutName);

			const char*		szSourceSring   = text.c_str();
			const char*		szSavePathSring = bmpSavedPath.c_str();
			unsigned int	unWidth, x, y, l, n, unWidthAdjusted, unDataBytes;
			unsigned char*	pRGBData, *pSourceData, *pDestData;
			QRcode*			pQRC;
			FILE*			f;
			int iSizeReal = 0;

			if (pQRC = QRcode_encodeString(szSourceSring, 0, QR_ECLEVEL_H, QR_MODE_8, 1))
			{
				unWidth = pQRC->width; //矩阵的维数
				int iSize_OUT_FILE_PIXEL_PRESCALER = iSize / unWidth ;
				if(iSize_OUT_FILE_PIXEL_PRESCALER == 0)
				{
					iSize_OUT_FILE_PIXEL_PRESCALER = 1;
				}

				iSizeReal = unWidth * iSize_OUT_FILE_PIXEL_PRESCALER;

				unWidthAdjusted = unWidth * iSize_OUT_FILE_PIXEL_PRESCALER * 3; //每一个维度占的像素的个数（8），每个像素3个字节
				if (unWidthAdjusted % 4)
					unWidthAdjusted = (unWidthAdjusted / 4 + 1) * 4;
				unDataBytes = unWidthAdjusted * unWidth * iSize_OUT_FILE_PIXEL_PRESCALER;

				// Allocate pixels buffer
				if (!(pRGBData = (unsigned char*)malloc(unDataBytes)))
				{

				}

				// Preset to white
				memset(pRGBData, 0xff, unDataBytes);


				// Prepare bmp headers
				BITMAPFILEHEADER kFileHeader;
				kFileHeader.bfType = 0x4d42;  // "BM"
				kFileHeader.bfSize = sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER) + unDataBytes;
				kFileHeader.bfReserved1 = 0;
				kFileHeader.bfReserved2 = 0;
				kFileHeader.bfOffBits = sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER);

				BITMAPINFOHEADER kInfoHeader;
				kInfoHeader.biSize = sizeof(BITMAPINFOHEADER);
				kInfoHeader.biWidth = unWidth * iSize_OUT_FILE_PIXEL_PRESCALER;
				kInfoHeader.biHeight = ((int)unWidth * iSize_OUT_FILE_PIXEL_PRESCALER); //负数可以控制图像上下颠倒
				kInfoHeader.biPlanes = 1;
				kInfoHeader.biBitCount = 24;
				kInfoHeader.biCompression = BI_RGB;
				kInfoHeader.biSizeImage = 0;
				kInfoHeader.biXPelsPerMeter = 0;
				kInfoHeader.biYPelsPerMeter = 0;
				kInfoHeader.biClrUsed = 0;
				kInfoHeader.biClrImportant = 0;


				// Convert QrCode bits to bmp pixels
				pSourceData = pQRC->data;
				for (y = 0; y < unWidth; y++)
				{
					pDestData = pRGBData + unWidthAdjusted * y * iSize_OUT_FILE_PIXEL_PRESCALER;
					for (x = 0; x < unWidth; x++)
					{
						if (*pSourceData & 1)
						{
							for (l = 0; l < iSize_OUT_FILE_PIXEL_PRESCALER; l++)
							{
								for (n = 0; n < iSize_OUT_FILE_PIXEL_PRESCALER; n++)
								{
									*(pDestData + n * 3 + unWidthAdjusted * l)     = PIXEL_COLOR_B;
									*(pDestData + 1 + n * 3 + unWidthAdjusted * l) = PIXEL_COLOR_G;
									*(pDestData + 2 + n * 3 + unWidthAdjusted * l) = PIXEL_COLOR_R;
								}
							}
						}
						pDestData += 3 * iSize_OUT_FILE_PIXEL_PRESCALER;
						pSourceData++;
					}
				}


				// Output the bmp file
				if (!(fopen_s(&f, szSavePathSring, "wb")))
				{
					fwrite(&kFileHeader, sizeof(BITMAPFILEHEADER), 1, f);
					fwrite(&kInfoHeader, sizeof(BITMAPINFOHEADER), 1, f);
					fwrite(pRGBData, sizeof(unsigned char), unDataBytes, f);
					fclose(f);
				}

				// Free data
				free(pRGBData);
				QRcode_free(pQRC);
			}

			return iSizeReal;
		}


		int GenerateBMP(const CString& str, const CString& strBmpFile, int iSize)
		{
			CString strDesPathWithoutName = sdk::processutil::GetPathByFullPath(strBmpFile);
			sdk::fileutil::CreatMultiDir(strDesPathWithoutName);

			string strTemp = (LPTSTR)(LPCTSTR)str;
			string strFile = (LPTSTR)(LPCTSTR)strBmpFile;			
			return generate(strTemp, strFile, iSize);
		}





		bool  sdkCreate192WidthQrcodeBmp(char *qrcode, char *despath)
		{
			try
			{
				CString strQrCode = qrcode;				
				strQrCode.Trim();
				CString strDesPath = despath;
				strDesPath.Trim();
				CString strDesPathWithoutName = sdk::processutil::GetPathByFullPath(strDesPath);
				sdk::fileutil::CreatMultiDir(strDesPathWithoutName);

				CString strQRBmp = strDesPath + ".tmp";
				DeleteFile(strQRBmp);
				int QRCODE_Size = sdk::qrcodeutil::GenerateBMP(strQrCode, strQRBmp, 150);	

				int iFinialSize = 192;
				CDC cdcFinial;
				cdcFinial.CreateCompatibleDC(NULL);	

				CBitmap bmpFinial;	
				bmpFinial.CreateCompatibleBitmap(&cdcFinial, iFinialSize, QRCODE_Size + 20);  
				cdcFinial.SelectObject(&bmpFinial);
				cdcFinial.SelectStockObject(WHITE_BRUSH);
				cdcFinial.SelectStockObject(WHITE_PEN);
				cdcFinial.SetBkColor(RGB(255,255,255));
				cdcFinial.FloodFill(0,0,RGB(255,255,255));				

				CDC cdcQR;
				CBitmap bmpQR;	
				if(sdk::fileutil::IsFileExist((LPTSTR)(LPCTSTR)strQRBmp))
				{
					int iWidthQR = 0;
					int iHeightQR = 0;				
					HBITMAP hBitmapQR = (HBITMAP) ::LoadImage(NULL, (LPTSTR)(LPCTSTR)strQRBmp, IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION | LR_DEFAULTSIZE);
					if (hBitmapQR != NULL) 
					{
						bmpQR.Attach(hBitmapQR);
						BITMAP bmQR;
						bmpQR.GetBitmap(&bmQR);	
						iWidthQR = bmQR.bmWidth;
						iHeightQR = bmQR.bmHeight;

						cdcQR.CreateCompatibleDC(&cdcFinial);
						cdcQR.SelectObject(&bmpQR);

						int iLeftPos = (iFinialSize - QRCODE_Size)/2 ;							
						cdcFinial.StretchBlt(iLeftPos, 10, iWidthQR, iHeightQR, &cdcQR, 0, 0, iWidthQR, iHeightQR, SRCCOPY);
					}

					DeleteFile(strQRBmp);
				}	

				bool bSaveBitmapToFileOK = sdk::bitmaputil::SaveBitmapToFile(&bmpFinial, (LPTSTR)(LPCTSTR)strDesPath);
				cdcFinial.DeleteDC();
				bmpFinial.DeleteObject();	
				cdcQR.DeleteDC();
				bmpQR.DeleteObject();

				return bSaveBitmapToFileOK;								
			}			
			catch (...)
			{					
				return false;
			}

			return false;

		}

		bool  sdkCreate192WidthQrcodeBmp_stretch(char *qrcode, char *despath)
		{
			try
			{
				CString strQrCode = qrcode;				
				strQrCode.Trim();
				CString strDesPath = despath;
				strDesPath.Trim();
				CString strDesPathWithoutName = sdk::processutil::GetPathByFullPath(strDesPath);
				sdk::fileutil::CreatMultiDir(strDesPathWithoutName);

				CString strQRBmp = strDesPath + ".tmp";
				DeleteFile(strQRBmp);
				int QRCODE_Height = sdk::qrcodeutil::GenerateBMP(strQrCode, strQRBmp, 100);	
				int QRCODE_Width = (QRCODE_Height * 3 + 1) / 2 ;

				int iFinialSize = 192;
				CDC cdcFinial;
				cdcFinial.CreateCompatibleDC(NULL);	

				CBitmap bmpFinial;	
				bmpFinial.CreateCompatibleBitmap(&cdcFinial, iFinialSize, QRCODE_Height + 20);  
				cdcFinial.SelectObject(&bmpFinial);
				cdcFinial.SelectStockObject(WHITE_BRUSH);
				cdcFinial.SelectStockObject(WHITE_PEN);
				cdcFinial.SetBkColor(RGB(255,255,255));
				cdcFinial.FloodFill(0,0,RGB(255,255,255));				

				CDC cdcQR;
				CBitmap bmpQR;	
				if(sdk::fileutil::IsFileExist((LPTSTR)(LPCTSTR)strQRBmp))
				{
					int iWidthQR = 0;
					int iHeightQR = 0;				
					HBITMAP hBitmapQR = (HBITMAP) ::LoadImage(NULL, (LPTSTR)(LPCTSTR)strQRBmp, IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION | LR_DEFAULTSIZE);
					if (hBitmapQR != NULL) 
					{
						bmpQR.Attach(hBitmapQR);
						BITMAP bmQR;
						bmpQR.GetBitmap(&bmQR);	
						iWidthQR = bmQR.bmWidth;
						iHeightQR = bmQR.bmHeight;

						cdcQR.CreateCompatibleDC(&cdcFinial);
						cdcQR.SelectObject(&bmpQR);

						int iLeftPos = (iFinialSize - QRCODE_Width)/2 ;							
						cdcFinial.StretchBlt(iLeftPos, 10, QRCODE_Width, iHeightQR, &cdcQR, 0, 0, iWidthQR, iHeightQR, SRCCOPY);
					}

					DeleteFile(strQRBmp);
				}	

				bool bSaveBitmapToFileOK = sdk::bitmaputil::SaveBitmapToFile(&bmpFinial, (LPTSTR)(LPCTSTR)strDesPath);
				cdcFinial.DeleteDC();
				bmpFinial.DeleteObject();	
				cdcQR.DeleteDC();
				bmpQR.DeleteObject();

				return bSaveBitmapToFileOK;								
			}			
			catch (...)
			{					
				return false;
			}

			return false;
		}

		bool  sdkCreate384WidthQrcodeBmp(char *qrcode, char *despath)
		{
			try
			{
				CString strQrCode = qrcode;				
				strQrCode.Trim();
				CString strDesPath = despath;
				strDesPath.Trim();
				CString strDesPathWithoutName = sdk::processutil::GetPathByFullPath(strDesPath);
				sdk::fileutil::CreatMultiDir(strDesPathWithoutName);

				CString strQRBmp = strDesPath + ".tmp";
				DeleteFile(strQRBmp);
				int QRCODE_SIZE = sdk::qrcodeutil::GenerateBMP(strQrCode, strQRBmp, 300);	

				int iFinialSize = 384;
				CDC cdcFinial;
				cdcFinial.CreateCompatibleDC(NULL);	

				CBitmap bmpFinial;	
				bmpFinial.CreateCompatibleBitmap(&cdcFinial, iFinialSize, QRCODE_SIZE + 20);  
				cdcFinial.SelectObject(&bmpFinial);
				cdcFinial.SelectStockObject(WHITE_BRUSH);
				cdcFinial.SelectStockObject(WHITE_PEN);
				cdcFinial.SetBkColor(RGB(255,255,255));
				cdcFinial.FloodFill(0,0,RGB(255,255,255));				

				CDC cdcQR;
				CBitmap bmpQR;	
				if(sdk::fileutil::IsFileExist((LPTSTR)(LPCTSTR)strQRBmp))
				{
					int iWidthQR = 0;
					int iHeightQR = 0;				
					HBITMAP hBitmapQR = (HBITMAP) ::LoadImage(NULL, (LPTSTR)(LPCTSTR)strQRBmp, IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION | LR_DEFAULTSIZE);
					if (hBitmapQR != NULL) 
					{
						bmpQR.Attach(hBitmapQR);
						BITMAP bmQR;
						bmpQR.GetBitmap(&bmQR);	
						iWidthQR = bmQR.bmWidth;
						iHeightQR = bmQR.bmHeight;

						cdcQR.CreateCompatibleDC(&cdcFinial);
						cdcQR.SelectObject(&bmpQR);

						int iLeftPos = (iFinialSize - iWidthQR)/2 ;							
						cdcFinial.StretchBlt(iLeftPos, 10, iWidthQR, iHeightQR, &cdcQR, 0, 0, iWidthQR, iHeightQR, SRCCOPY);
					}

					DeleteFile(strQRBmp);
				}	

				bool bSaveBitmapToFileOK = sdk::bitmaputil::SaveBitmapToFile(&bmpFinial, (LPTSTR)(LPCTSTR)strDesPath);
				cdcFinial.DeleteDC();
				bmpFinial.DeleteObject();	
				cdcQR.DeleteDC();
				bmpQR.DeleteObject();

				return bSaveBitmapToFileOK;								
			}			
			catch (...)
			{					
				return false;
			}

			return false;
		}



	}

}
