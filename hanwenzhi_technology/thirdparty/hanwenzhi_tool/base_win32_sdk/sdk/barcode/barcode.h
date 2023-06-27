#pragma once



namespace sdk
{
	namespace barcode
	{

		namespace ean13
		{

			const int linew     = 1;      //打印条形码的线的宽度 
			const int shortL    = 20;     //打印条形码短线的高度                     
			const int longL     = 30;      //打印条形码长线的高度


			class bmp_bar
			{
			public:
				int lineWidth;	// 线的宽度
				int shortLine;	// 短线长度
				int longLine;	// 长线长度
				bool m_bModified;	// 脏标记
				int code[13];	// 条形码数字数组
				CMapStringToString coderule;
				CString firstcode[10];

				void ini(int ilineWidth = 1);
				// 画数字
				void DrawNumber(CDC *ptDC);
				// 数字转换成字符
				void ToChar(int no,char &c);
				// 画条形码结束的部分
				void DrawEnd(CDC *ptDC);
				// 画条形码的右半部
				void DrawRight(CDC *ptDC);
				// 画条形码中间部分
				void DrawMiddle(CDC *ptDC);
				// 画条形码的左半部
				void DrawLeft(CDC *ptDC);
				// 画黑色部分
				void DrawOne(CDC *ptDC,CPoint point,BOOL b_long);
				// 画空白部分
				void DrawZero(CDC *ptDC,CPoint point);
				// 画条形码的开始部分
				void DrawStart(CDC *ptDC);
				
				// 建立第二个表
				void BldSecondTable();
				// 建立第一个表
				void BldFirstTable();
				void DeleteTable();
				
				
			};


			//返回值：true, 
			//成功true
			//失败false 位数不对，请输入13个数字
			bool bar_bimtp(CDC *dcMem,int picwith,int picHeight , CString bar_str, int iLineWidth);

			//bool StringToEan13BarcodeBmpObj(CString strBar, CBitmap& bmp);
			bool StringToEan13BarcodeBmpFile(CString strBar, CString strFile);



		}	


	}
}
