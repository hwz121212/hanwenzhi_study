#include "stdafx.h"
#include "Jpeg.h"




		
struct my_error_mgr    
{   
	struct jpeg_error_mgr  pub;	// 公共域
	jmp_buf setjmp_buffer;		// 用以返回调用者   
}; 

typedef struct my_error_mgr * my_error_ptr;

void my_error_exit (j_common_ptr cinfo)   
{   
	// cinfo->er指向一个my_error_mgr形的结构体，强制指针   
	my_error_ptr myerr = (my_error_ptr) cinfo->err;   
	char buffer[JMSG_LENGTH_MAX];   
	// 产生一个消息    
	(*cinfo->err->format_message) (cinfo, buffer);   
	// 要显示该消息.    
	//MessageBox(NULL,buffer,"JPEG Compress Error",MB_ICONSTOP);   
	// 返回已控制并传递给setjmp    
	longjmp(myerr->setjmp_buffer, 1);   
}

/*	功能：压缩jpg、jpeg文件
	参数：	srcImagefile -- 源文件，源文件必须是jpg或者jpeg
			dstImagefile -- 目标文件
			iCompressQuality -- 压缩质量
*/
int	CJpegUtil::JpgCompress(const char* srcImagefile,
				const char* dstImagefile,
				int iCompressQuality,
				PROGRESSCALLBACK progfun,
				unsigned long* pulCompressbytes,
				int* piCompressPercent)
{
	//src
	unsigned long ulSrcFileSize = 0;
	unsigned long ulDstFileSize = 0;
	// 声明解压缩对象及错误信息管理器
	struct jpeg_decompress_struct jpeg_decompress_info;
	struct my_error_mgr jerr;
	int nComponent = 0;
	int image_width = 0;
	int image_height = 0;
	
	// 建立一个JPEG错误处理程序, 忽略error_exit.
	jpeg_decompress_info.err = jpeg_std_error(&jerr.pub);
	jerr.pub.error_exit = my_error_exit;  

	FILE *fsrc = fopen(srcImagefile,"rb");
	if(NULL == fsrc)
	{
		if(NULL != progfun) progfun(100,100);//显示进度
		return -1;//Open src file error!
	}

	if (setjmp(jerr.setjmp_buffer)) 
	{   
		// 如果程序运行到此则说明已经出现错误，应及时的清掉JPEG对象   
		// 并关闭文件返回原处  
		jpeg_destroy_decompress(&jpeg_decompress_info);   

		if (fsrc!=NULL) fclose(fsrc);  
		if(NULL != progfun) progfun(100,100);//显示进度
		return -2;   
	}

	if(NULL != progfun) progfun(1,100);//显示进度

	jpeg_create_decompress(&jpeg_decompress_info);
	jpeg_stdio_src(&jpeg_decompress_info,fsrc);
	jpeg_read_header(&jpeg_decompress_info, TRUE);
	
	nComponent = jpeg_decompress_info.num_components;
	image_width = jpeg_decompress_info.image_width;
	image_height = jpeg_decompress_info.image_height;

	unsigned char * data = new unsigned char[image_width*image_height*nComponent];
	
	jpeg_start_decompress(&jpeg_decompress_info);
	
	JSAMPROW row_pointer[1];

	if(NULL != progfun) progfun(2,100);//显示进度

	while (jpeg_decompress_info.output_scanline < jpeg_decompress_info.output_height)
	{
		row_pointer[0] = &data[(jpeg_decompress_info.output_height - jpeg_decompress_info.output_scanline-1)*image_width*nComponent];
		jpeg_read_scanlines(&jpeg_decompress_info,row_pointer ,1);
		if(NULL != progfun) progfun(3+50*jpeg_decompress_info.output_scanline/jpeg_decompress_info.output_height,100);//显示进度
	}
	jpeg_finish_decompress(&jpeg_decompress_info);
	jpeg_destroy_decompress(&jpeg_decompress_info);
	fseek(fsrc,0,SEEK_END);
	ulSrcFileSize = ftell(fsrc);
	fclose(fsrc);

	//压缩后jpeg
	struct jpeg_compress_struct jpeg_compress_info;
	struct jpeg_error_mgr jem;
	jpeg_compress_info.err = jpeg_std_error(&jem);

	jpeg_create_compress(&jpeg_compress_info);

	FILE* fpDst = fopen(dstImagefile,"wb");
	if (fpDst==NULL)
	{//Open dest file error 
		delete [] data;
		if(NULL != progfun) progfun(100,100);//显示进度
		return -3;
	}
	jpeg_stdio_dest(&jpeg_compress_info, fpDst);
	jpeg_compress_info.image_width = image_width; 			// 为图的宽和高，单位为像素 
	jpeg_compress_info.image_height = image_height;

	jpeg_compress_info.input_components = nComponent;			// 1,表示灰度图， 如果是彩色位图，则为3 
	if (nComponent==1)
	{
		jpeg_compress_info.in_color_space = JCS_GRAYSCALE; //JCS_GRAYSCALE表示灰度图，JCS_RGB表示彩色图像 
	} 
	else 
	{
		jpeg_compress_info.in_color_space = JCS_RGB;
	}
	jpeg_set_defaults(&jpeg_compress_info);	
	jpeg_set_quality (&jpeg_compress_info, iCompressQuality, true);

	jpeg_start_compress(&jpeg_compress_info, TRUE);

	JSAMPROW row_pointer_compress[1];			// 一行位图
	int row_stride;						// 每一行的字节数 
	row_stride = jpeg_compress_info.image_width*nComponent;		// 如果不是索引图,此处需要乘以3

	// 对每一行进行压缩
	while (jpeg_compress_info.next_scanline < jpeg_compress_info.image_height) 
	{
		row_pointer_compress[0] = & data[(jpeg_compress_info.image_height-jpeg_compress_info.next_scanline-1) * row_stride];
		jpeg_write_scanlines(&jpeg_compress_info, row_pointer_compress, 1);
		if(NULL != progfun) progfun(50+50*jpeg_compress_info.next_scanline/jpeg_compress_info.image_height,100);//显示进度
	}
	jpeg_finish_compress(&jpeg_compress_info);
	jpeg_destroy_compress(&jpeg_compress_info);
	fseek(fpDst,0,SEEK_END);
	ulDstFileSize = ftell(fpDst);
	fclose(fpDst);
	delete [] data;

	if(NULL != progfun) progfun(100,100);//显示进度

	if(ulDstFileSize <= ulSrcFileSize)
	{
		if(NULL != pulCompressbytes)
		{
			*pulCompressbytes = ulSrcFileSize - ulDstFileSize;
		}
		if(NULL != piCompressPercent)
		{
			*piCompressPercent = *pulCompressbytes*100/ulSrcFileSize;
		}
	} 
	else 
	{
		if(NULL != pulCompressbytes)
		{
			*pulCompressbytes = 0;
		}
		if(NULL != piCompressPercent)
		{
			*piCompressPercent = 0;
		}
	}
	return 0;
}

int CJpegUtil::BMP2JPG(const char* srcBmp,
			const char* dstJpg,
			int	iQuality,
			PROGRESSCALLBACK profun)//bmp to jpg
{
	BITMAPFILEHEADER bfh;		// bmp文件头
	BITMAPINFOHEADER bih;		// bmp头信息
	RGBQUAD rq[256];			// 调色板

	BYTE *data= NULL;//new BYTE[bih.biWidth*bih.biHeight];
	//BYTE *pDataConv = NULL;//new BYTE[bih.biWidth*bih.biHeight];
	int nComponent = 0;

	// 打开图像文件
	FILE *f = fopen(srcBmp,"rb");
	if (f==NULL)
	{
		printf("Open file error!\n");
		return -1;
	}
	// 读取文件头
	fread(&bfh,sizeof(bfh),1,f);
	// 读取图像信息
	fread(&bih,sizeof(bih),1,f);
	// 为了简单，在本例中，只演示8位索引图像
	switch (bih.biBitCount) 
	{
	case 8:
		if (bfh.bfOffBits-1024<54) 
		{
			fclose(f);
			return -1;
		}
		data= new BYTE[bih.biWidth*bih.biHeight];
		//pDataConv = new BYTE[bih.biWidth*bih.biHeight];

		// 定位调色板，并读取调色板
		fseek(f,bfh.bfOffBits-1024,SEEK_SET);	
		fread(rq,sizeof(RGBQUAD),256,f);
		// 读取位图
		fread(data,bih.biWidth*bih.biHeight,1,f);
		fclose(f);
		nComponent = 1;
		break;
	case 24:
		{
			data= new BYTE[bih.biWidth*bih.biHeight*3];
			//pDataConv = new BYTE[bih.biWidth*bih.biHeight*3];
// 			fseek(f,bfh.bfOffBits,SEEK_SET);	
// 			fread(data,1,bih.biWidth*bih.biHeight*3,f);
// 			fclose(f);
//  			for (int i = 0;i<bih.biWidth*bih.biHeight;i++)
//  			{
//  				BYTE red = data[i*3];
//  				data[i*3] = data[i*3+2];
//  				data[i*3+2] = red;
//  			}

			int scans = bih.biWidth*3;
			if( (scans % 4) != 0 )
			{
				scans += (4-scans%4);
			}
			int index = bih.biHeight;
			int offset = 0;

			fseek(f,bfh.bfOffBits,SEEK_SET);
			while( index-- > 0 )
			{
				fread(data+offset,1,bih.biWidth*3,f);
				offset += bih.biWidth*3;
				fseek(f,scans-bih.biWidth*3,SEEK_CUR);
			}

			//bgr to rgb
  			for (int i = 0;i<bih.biWidth*bih.biHeight;i++)
  			{
  				BYTE red = data[i*3];
  				data[i*3] = data[i*3+2];
  				data[i*3+2] = red;
  			}

			nComponent = 3;
			break;
		}
	default:
		fclose(f);
		return -1;
	}

	if(NULL != profun) profun(2,100);//显示进度

	// 以上图像读取完毕,下面对图像进行压缩

	struct jpeg_compress_struct jcs;
	struct jpeg_error_mgr jem;
	jcs.err = jpeg_std_error(&jem);

	jpeg_create_compress(&jcs);

	f=fopen(dstJpg,"wb");
	if (f==NULL) 
	{
		delete [] data;
		//delete [] pDataConv;
		return -1;
	}
	jpeg_stdio_dest(&jcs, f);
	jcs.image_width = bih.biWidth; 			// 为图的宽和高，单位为像素 
	jcs.image_height = bih.biHeight;
	jcs.input_components = nComponent;			// 1,表示灰度图， 如果是彩色位图，则为3 
	if (nComponent==1)
		jcs.in_color_space = JCS_GRAYSCALE; //JCS_GRAYSCALE表示灰度图，JCS_RGB表示彩色图像 
	else 
		jcs.in_color_space = JCS_RGB;

	jpeg_set_defaults(&jcs);	
	jpeg_set_quality (&jcs, iQuality, true);

	jpeg_start_compress(&jcs, TRUE);

	JSAMPROW row_pointer[1];			// 一行位图
	int row_stride;						// 每一行的字节数 

	row_stride = jcs.image_width*nComponent;		// 如果不是索引图,此处需要乘以3

	// 对每一行进行压缩
	while (jcs.next_scanline < jcs.image_height) {
		row_pointer[0] = & data[(jcs.image_height-jcs.next_scanline-1) * row_stride];
		jpeg_write_scanlines(&jcs, row_pointer, 1);
		if(NULL != profun) profun(50+50*jcs.next_scanline/jcs.image_height,100);//显示进度
	}

	jpeg_finish_compress(&jcs);

	jpeg_destroy_compress(&jcs);

	fclose(f);
	delete [] data;

	if(NULL != profun) profun(100,100);//显示进度
	return 0;
}







