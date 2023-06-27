#ifndef _H_JPEG_9F6DA872_09DF_4B00_AD1C_62BE4AA89AA7
#define _H_JPEG_9F6DA872_09DF_4B00_AD1C_62BE4AA89AA7


namespace sdk
{

	typedef int (__stdcall *PROGRESSCALLBACK)(int iCurProg,int iTotalProg) ;

	class AFX_EXT_CLASS CJpegUtil
	{
	public:
		CJpegUtil(){};


		
		/*	功能：压缩jpg、jpeg文件
			参数：	srcImagefile -- 源文件，源文件必须是jpg或者jpeg
					dstImagefile -- 目标文件
					iCompressQuality -- 压缩质量
			返回值：0 -- 成功，其他--失败
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