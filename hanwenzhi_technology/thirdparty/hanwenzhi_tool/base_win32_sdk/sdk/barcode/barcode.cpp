// tuxiangDlg.cpp : implementation file
//

#include "stdafx.h"
#include "barcode.h"
#include "Bitmap/BitmapUtil.h"



namespace sdk
{
	namespace barcode
	{

		namespace ean13
		{

			/******************************************************************************
			* 初始化
			* Modified: NES
			* Data	   : 2008-04-22
			******************************************************************************/
			void  bmp_bar::ini(int ilineWidth)
			{
				lineWidth	=ilineWidth;
				shortLine	=shortL ;//160;
				longLine	=longL;//178;
				BldFirstTable();
				BldSecondTable();
			}

			void bmp_bar::BldFirstTable()
			{
				firstcode[0]=_T("AAAAAA");
				firstcode[1]=_T("AABABB");
				firstcode[2]=_T("AABBAB");
				firstcode[3]=_T("AABBBA");
				firstcode[4]=_T("ABAABB");
				firstcode[5]=_T("ABBAAB");
				firstcode[6]=_T("ABBBAA");
				firstcode[7]=_T("ABABAB");
				firstcode[8]=_T("ABABBA");
				firstcode[9]=_T("ABBABA");
			}
			/******************************************************************************
			* 建立编码规则表二
			******************************************************************************/
			void bmp_bar::BldSecondTable()
			{
				coderule[_T("0A")]=_T("0001101");
				coderule[_T("0B")]=_T("0100111");
				coderule[_T("0C")]=_T("1110010");
				coderule[_T("1A")]=_T("0011001");
				coderule[_T("1B")]=_T("0110011");
				coderule[_T("1C")]=_T("1100110");
				coderule[_T("2A")]=_T("0010011");
				coderule[_T("2B")]=_T("0011011");
				coderule[_T("2C")]=_T("1101100");
				coderule[_T("3A")]=_T("0111101");
				coderule[_T("3B")]=_T("0100001");
				coderule[_T("3C")]=_T("1000010");
				coderule[_T("4A")]=_T("0100011");
				coderule[_T("4B")]=_T("0011101");
				coderule[_T("4C")]=_T("1011100");
				coderule[_T("5A")]=_T("0110001");
				coderule[_T("5B")]=_T("0111001");
				coderule[_T("5C")]=_T("1001110");
				coderule[_T("6A")]=_T("0101111");
				coderule[_T("6B")]=_T("0000101");
				coderule[_T("6C")]=_T("1010000");
				coderule[_T("7A")]=_T("0111011");
				coderule[_T("7B")]=_T("0010001");
				coderule[_T("7C")]=_T("1000100");
				coderule[_T("8A")]=_T("0110111");
				coderule[_T("8B")]=_T("0001001");
				coderule[_T("8C")]=_T("1001000");
				coderule[_T("9A")]=_T("0001011");
				coderule[_T("9B")]=_T("0010111");
				coderule[_T("9C")]=_T("1110100");
			}
		
			/******************************************************************************
			* 画起始线
			* Modified: huxb@nes.com.cn
			* Data	   : 2008-04-22
			******************************************************************************/
			void bmp_bar::DrawStart(CDC *ptDC)
			{
				for(int i=0; i<=8; i++)
					DrawZero(ptDC, CPoint(i * lineWidth,0));
				DrawOne(ptDC,CPoint(9 * lineWidth, 0),TRUE);
				DrawZero(ptDC,CPoint(10 * lineWidth,0));
				DrawOne(ptDC,CPoint(11 * lineWidth,0),TRUE);
			}
			/******************************************************************************
			* 画空白线
			* Modified: huxb@nes.com.cn
			* Data	   : 2008-04-22
			******************************************************************************/
			void bmp_bar::DrawZero(CDC *ptDC,CPoint point)
			{
				CPen zpen(PS_NULL, lineWidth, RGB(255,255,255));
				CPen *oldPen=ptDC->SelectObject(&zpen);
				ptDC->MoveTo(point);
				ptDC->LineTo(point.x, point.y+shortLine);
				ptDC->SelectObject(oldPen);
				DeleteObject(oldPen);	
				DeleteObject(zpen);	


			}
			/******************************************************************************
			* 画黑线
			* Modified: huxb@nes.com.cn
			* Data	   : 2008-04-22
			******************************************************************************/
			void bmp_bar::DrawOne(CDC *ptDC,CPoint point,BOOL b_long)
			{
				CPen epen(PS_SOLID, lineWidth, RGB(0,0,0));
				CPen *oldPen=ptDC->SelectObject(&epen);
				if(b_long)
				{   
					ptDC->MoveTo(point);
					ptDC->LineTo(point.x, point.y+longLine);
				}
				else
				{
					ptDC->MoveTo(point);
					ptDC->LineTo(point.x, point.y+shortLine);
				}
				ptDC->SelectObject(oldPen);
				DeleteObject(oldPen);
				DeleteObject(epen);
			}
			/******************************************************************************
			* 画条形码的左半部
			* Modified: huxb@nes.com.cn
			* Data	   : 2008-04-22
			******************************************************************************/
			void bmp_bar::DrawLeft(CDC *ptDC)
			{
				CString temp1 = firstcode[code[0]];
				CString YorN[6];			//用于存贮左边的六位数的编码
				for(int i=0;i<=5;i++)
				{
					char temp2;
					ToChar(code[i+1],temp2);
					CString temp3(temp2);
					temp3+=temp1.GetAt(i);	//将数字和字母连接成串
					coderule.Lookup(temp3,YorN[i]);		//查表得出编码
				}

				int x;
				for(int j=0;j<=5;j++)
				{
					for(int k=0;k<=6;k++)				//每个数字有七位编码
					{
						x=12+j*7+k;						//计算每个模块的横坐标
						if(YorN[j].GetAt(k)=='1')
							DrawOne(ptDC,CPoint(x*lineWidth,0),FALSE);
						else
							DrawZero(ptDC,CPoint(x*lineWidth,0));
					}
				}
			} 

			/******************************************************************************
			* 画条形码中间的部分
			* Modified: huxb@nes.com.cn
			* Data	   : 2008-04-22
			******************************************************************************/
			void bmp_bar::DrawMiddle(CDC *ptDC)
			{
				DrawZero(ptDC,CPoint(54*lineWidth,0));
				DrawOne(ptDC,CPoint(55*lineWidth,0),TRUE);
				DrawZero(ptDC,CPoint(56*lineWidth,0));
				DrawOne(ptDC,CPoint(57*lineWidth,0),TRUE);
				DrawZero(ptDC,CPoint(58*lineWidth,0));
			}

			/******************************************************************************
			* 画条形码的右半部
			* Modified: huxb@nes.com.cn
			* Data	   : 2008-04-22
			******************************************************************************/
			void bmp_bar::DrawRight(CDC *ptDC)
			{
				char temp1;
				CString YorN[6];				//用于存储后面六位的编码
				for(int i=7;i<=12;i++)
				{
					ToChar(code[i],temp1);
					CString temp2(temp1);
					temp2+='C'; 
					coderule.Lookup(temp2,YorN[i-7]);
				}

				int x;
				for(int j=0;j<=5;j++)
				{
					for(int k=0;k<=6;k++)		//每个数字有七位编码
					{
						x=59+j*7+k;				//计算每个模块的横坐标
						if(YorN[j].GetAt(k)=='1')
							DrawOne(ptDC,CPoint(x*lineWidth,0),FALSE);
						else DrawZero(ptDC,CPoint(x*lineWidth,0));
					}
				}
			}

			/******************************************************************************
			* 画条形码的结束部分
			* Modified: huxb@nes.com.cn
			* Data	   : 2008-04-22
			******************************************************************************/
			void bmp_bar::DrawEnd(CDC *ptDC)
			{
				DrawOne(ptDC,CPoint(101*lineWidth,0),TRUE);
				DrawZero(ptDC,CPoint(102*lineWidth,0));
				DrawOne(ptDC,CPoint(103*lineWidth,0),TRUE);
				for(int i=104;i<=112;i++)
					DrawZero(ptDC,CPoint(i*lineWidth,0));
			}

			/******************************************************************************
			* 数字转换成字符串
			* Modified: huxb@nes.com.cn
			* Data	   : 2008-04-22
			******************************************************************************/
			void bmp_bar::ToChar(int no,char &c)
			{
				c=(char) no+48;
			}

			/******************************************************************************
			* 画条形码的数字标识
			* Modified: huxb@nes.com.cn
			* Data	   : 2008-04-22
			******************************************************************************/
			void bmp_bar::DrawNumber(CDC *ptDC)
			{
				char No[13];
				for(int i=0;i<=12;i++)
				{
					ToChar(code[i],No[i]);
				}
				CFont font;
				LOGFONT lf;
				lf.lfHeight=12;
				lf.lfWidth=5*lineWidth;
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
				ptDC->SelectObject(&font);
				ptDC->TextOut(2*lineWidth,shortLine+3,&No[0],1);
				ptDC->TextOut(15*lineWidth,shortLine+3,&No[1],6);
				ptDC->TextOut(61*lineWidth,shortLine+3,&No[7],6);

				//font.Detach();
				font.DeleteObject();
			}

			

			void bmp_bar::DeleteTable(){
				if (!coderule.IsEmpty()) coderule.RemoveAll();
				DeleteObject(firstcode);
				DeleteObject(code);


			}


			bool bar_bimtp(CDC *dcMem, int picwith, int picHeight, CString bar_str, int iLineWidth)
			{  
				sdk::barcode::ean13::bmp_bar  mybmp_bar;    
				dcMem->SelectStockObject(WHITE_BRUSH);
				dcMem->SelectStockObject(WHITE_PEN);
				dcMem->Rectangle(0, 0, picwith, picHeight);
				mybmp_bar.ini(iLineWidth);
				if (bar_str.GetLength() != 13)
				{				
					return false;
				}
				for (int j=0; j<=12; j++)
				{
					mybmp_bar.code[j]=int(bar_str.GetAt(j) - 48);
				}
				mybmp_bar.DrawStart(dcMem);
				mybmp_bar.DrawLeft(dcMem);
				mybmp_bar.DrawMiddle(dcMem);
				mybmp_bar.DrawRight(dcMem);
				mybmp_bar.DrawEnd(dcMem);
				mybmp_bar.DrawNumber(dcMem);
				mybmp_bar.DeleteTable(); 
				
				return true;
			}

			bool StringToEan13BarcodeBmpObj(CString strBar,  CBitmap& bmp)
			{
				bool bResult =false;
				const int iFinialHeight = 35;
				CDC   cdcFinial;
				cdcFinial.CreateCompatibleDC(NULL);
				bmp.CreateCompatibleBitmap(&cdcFinial, 350, iFinialHeight);
				cdcFinial.SelectObject(&bmp);
				cdcFinial.SelectStockObject(WHITE_BRUSH);
				cdcFinial.SelectStockObject(WHITE_PEN);
				cdcFinial.SetBkColor(RGB(255,255,255));
				cdcFinial.Rectangle(0,0,384,60);
				cdcFinial.FloodFill(0,0,RGB(255,255,255));

				CDC bar_cdc;
				CBitmap bmpTemp;
				bar_cdc.CreateCompatibleDC(NULL);
				bmpTemp.CreateCompatibleBitmap(&bar_cdc, 350, iFinialHeight);  
				bar_cdc.SelectObject(&bmpTemp);			

				CFont font;
				LOGFONT lf;
				lf.lfHeight=12;
				lf.lfWidth=9;
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
				bar_cdc.SelectObject(&font);

				bResult = sdk::barcode::ean13::bar_bimtp(&bar_cdc, 350, iFinialHeight, strBar, 3);//生成条码图片

				bar_cdc.SetBkColor(RGB(255,255,255));
				cdcFinial.StretchBlt(25,0,350,iFinialHeight,&bar_cdc,0,0,350,iFinialHeight,SRCCOPY);				
				cdcFinial.SelectObject(&bmp);

				bar_cdc.DeleteDC();
				cdcFinial.DeleteDC();
				bmpTemp.DeleteObject();
				return bResult;
			}

			bool StringToEan13BarcodeBmpFile(CString strBar, CString strFile)
			{				
				bool bResult = false;
				CBitmap bmp;
				bResult = StringToEan13BarcodeBmpObj(strBar, bmp);
				if (bResult)
				{
					bResult = sdk::bitmaputil::SaveBitmapToFile(&bmp, (LPTSTR)(LPCTSTR)strFile);
				}
				bmp.DeleteObject();
				return bResult;
			}
		



		}

	}
}
