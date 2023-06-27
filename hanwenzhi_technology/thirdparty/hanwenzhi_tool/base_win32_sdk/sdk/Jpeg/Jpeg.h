#ifndef _H_JPEG_9F6DA872_09DF_4B00_AD1C_62BE4AA89AA7
#define _H_JPEG_9F6DA872_09DF_4B00_AD1C_62BE4AA89AA7


namespace sdk
{

	typedef int (__stdcall *PROGRESSCALLBACK)(int iCurProg,int iTotalProg) ;

	class AFX_EXT_CLASS CJpegUtil
	{
	public:
		CJpegUtil(){};


		
		/*	���ܣ�ѹ��jpg��jpeg�ļ�
			������	srcImagefile -- Դ�ļ���Դ�ļ�������jpg����jpeg
					dstImagefile -- Ŀ���ļ�
					iCompressQuality -- ѹ������
			����ֵ��0 -- �ɹ�������--ʧ��
		*/
		static int	JpgCompress(const char* srcImagefile,
						const char* dstImagefile,
						int iCompressQuality,
						PROGRESSCALLBACK progfun=NULL,
						unsigned long* plCompressbytes=NULL,
						int* piCompressPercent=NULL);

		static int BMP2JPG(const char* srcBmp,
					const char* dstJpg,
					int	iQuality = 50,
					PROGRESSCALLBACK profun = NULL);//bmp to jpg



	};
	
}



#endif