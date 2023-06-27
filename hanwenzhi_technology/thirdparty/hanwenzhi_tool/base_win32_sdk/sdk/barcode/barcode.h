#pragma once



namespace sdk
{
	namespace barcode
	{

		namespace ean13
		{

			const int linew     = 1;      //��ӡ��������ߵĿ�� 
			const int shortL    = 20;     //��ӡ��������ߵĸ߶�                     
			const int longL     = 30;      //��ӡ�����볤�ߵĸ߶�


			class bmp_bar
			{
			public:
				int lineWidth;	// �ߵĿ��
				int shortLine;	// ���߳���
				int longLine;	// ���߳���
				bool m_bModified;	// ����
				int code[13];	// ��������������
				CMapStringToString coderule;
				CString firstcode[10];

				void ini(int ilineWidth = 1);
				// ������
				void DrawNumber(CDC *ptDC);
				// ����ת�����ַ�
				void ToChar(int no,char &c);
				// ������������Ĳ���
				void DrawEnd(CDC *ptDC);
				// ����������Ұ벿
				void DrawRight(CDC *ptDC);
				// ���������м䲿��
				void DrawMiddle(CDC *ptDC);
				// �����������벿
				void DrawLeft(CDC *ptDC);
				// ����ɫ����
				void DrawOne(CDC *ptDC,CPoint point,BOOL b_long);
				// ���հײ���
				void DrawZero(CDC *ptDC,CPoint point);
				// ��������Ŀ�ʼ����
				void DrawStart(CDC *ptDC);
				
				// �����ڶ�����
				void BldSecondTable();
				// ������һ����
				void BldFirstTable();
				void DeleteTable();
				
				
			};


			//����ֵ��true, 
			//�ɹ�true
			//ʧ��false λ�����ԣ�������13������
			bool bar_bimtp(CDC *dcMem,int picwith,int picHeight , CString bar_str, int iLineWidth);

			//bool StringToEan13BarcodeBmpObj(CString strBar, CBitmap& bmp);
			bool StringToEan13BarcodeBmpFile(CString strBar, CString strFile);



		}	


	}
}
