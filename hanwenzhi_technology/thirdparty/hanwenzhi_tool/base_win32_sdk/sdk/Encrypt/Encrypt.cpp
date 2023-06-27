#include "stdafx.h"
#include "Encrypt.h"



namespace sdk
{

	static unsigned char SWAP_MAP1[] = {26, 235, 180, 100, 148, 13, 206, 79, 61, 130, 193, 226, 104, 101, 3, 203, 
		6, 31, 82, 47, 27, 123, 199, 195, 205, 248, 25, 35, 125, 242, 17, 234, 
		161, 136, 44, 98, 238, 145, 70, 115, 93, 77, 29, 169, 179, 75, 143, 20, 
		111, 84, 19, 219, 117, 137, 9, 118, 237, 227, 253, 71, 58, 133, 224, 190, 
		141, 134, 167, 171, 162, 218, 23, 191, 14, 124, 96, 18, 87, 46, 196, 52, 
		73, 245, 114, 50, 138, 126, 252, 187, 132, 15, 119, 166, 153, 178, 49, 231, 
		127, 21, 213, 194, 184, 215, 156, 83, 38, 158, 159, 170, 30, 65, 81, 233, 
		149, 42, 88, 192, 189, 2, 146, 173, 214, 185, 232, 177, 43, 151, 144, 59, 
		10, 69, 108, 225, 16, 201, 204, 102, 197, 188, 36, 91, 254, 39, 40, 207, 
		12, 244, 57, 67, 142, 200, 109, 208, 8, 89, 105, 228, 172, 150, 5, 66, 
		174, 139, 63, 183, 247, 94, 54, 164, 129, 250, 120, 51, 221, 53, 236, 255, 
		202, 76, 122, 7, 176, 86, 34, 131, 0, 246, 240, 155, 163, 229, 110, 116, 
		175, 216, 222, 140, 157, 55, 107, 182, 165, 223, 4, 95, 41, 211, 92, 212, 
		22, 160, 181, 121, 128, 28, 103, 147, 230, 154, 78, 251, 241, 68, 97, 198, 
		64, 210, 106, 60, 62, 72, 135, 168, 243, 239, 85, 249, 99, 24, 45, 152, 
		113, 220, 48, 80, 33, 1, 90, 209, 217, 32, 56, 112, 74, 37, 186, 11}; 

	static unsigned char SWAP_MAP2[] = {206, 222, 63, 249, 135, 173, 130, 134, 122, 191, 153, 66, 161, 233, 106, 238, 
		81, 204, 241, 19, 49, 218, 170, 50, 185, 62, 100, 38, 144, 198, 117, 55, 
		232, 118, 44, 143, 101, 127, 107, 108, 254, 239, 26, 200, 105, 104, 211, 216, 
		227, 229, 141, 86, 76, 129, 54, 64, 73, 56, 219, 35, 91, 237, 41, 72, 
		84, 145, 226, 18, 30, 27, 213, 245, 163, 142, 119, 77, 169, 29, 114, 179, 
		61, 181, 42, 180, 90, 151, 94, 158, 53, 220, 252, 208, 39, 176, 14, 152, 
		148, 45, 48, 75, 196, 4, 89, 132, 67, 199, 6, 20, 187, 159, 85, 133, 
		28, 2, 17, 40, 36, 1, 146, 34, 95, 209, 154, 10, 21, 164, 248, 25, 
		113, 23, 172, 242, 78, 231, 112, 247, 189, 202, 168, 225, 182, 58, 79, 157, 
		214, 13, 228, 12, 3, 11, 109, 51, 147, 8, 47, 246, 165, 111, 70, 150, 
		174, 128, 251, 15, 22, 240, 210, 255, 203, 87, 192, 207, 98, 195, 183, 83, 
		250, 190, 125, 167, 102, 46, 234, 194, 201, 193, 188, 69, 0, 166, 230, 24, 
		186, 7, 123, 162, 121, 223, 139, 221, 96, 88, 136, 103, 217, 93, 212, 5, 
		120, 160, 253, 244, 31, 97, 82, 205, 16, 43, 126, 71, 80, 60, 138, 59, 
		32, 52, 33, 236, 110, 156, 197, 92, 124, 149, 99, 177, 9, 224, 65, 137, 
		115, 184, 57, 235, 116, 175, 37, 243, 74, 140, 171, 68, 155, 131, 178, 215};

	static unsigned char XOR_MAP[] = {84, 125, 106, 33, 50, 250, 233, 2, 163, 169, 175, 227, 126, 171, 94, 181, 
		32, 36, 180, 167, 59, 194, 132, 76, 248, 22, 29, 138, 216, 201, 58, 85, 
		198, 188, 61, 121, 161, 190, 195, 71, 111, 117, 155, 173, 196, 42, 242, 237, 
		62, 236, 72, 102, 67, 176, 74, 143, 231, 152, 11, 44, 16, 107, 232, 204, 
		118, 113, 26, 128, 8, 230, 164, 220, 101, 0, 193, 197, 146, 241, 154, 217, 
		97, 78, 213, 65, 109, 142, 88, 133, 53, 10, 131, 93, 12, 105, 116, 90, 
		228, 199, 49, 52, 209, 108, 215, 35, 95, 114, 255, 119, 68, 129, 20, 139, 
		239, 172, 226, 43, 183, 207, 98, 134, 25, 234, 160, 46, 254, 77, 162, 252, 
		182, 137, 80, 27, 246, 179, 251, 15, 23, 86, 235, 21, 249, 9, 147, 149, 
		202, 211, 63, 57, 48, 104, 191, 66, 123, 83, 6, 79, 165, 103, 124, 5, 
		3, 81, 19, 92, 96, 144, 253, 243, 30, 17, 28, 168, 229, 189, 203, 82, 
		224, 240, 73, 166, 210, 159, 186, 136, 115, 18, 178, 174, 56, 218, 41, 64, 
		221, 223, 69, 75, 214, 130, 135, 110, 145, 151, 247, 24, 47, 156, 192, 14, 
		51, 219, 87, 177, 100, 244, 37, 13, 55, 112, 148, 38, 60, 187, 140, 40, 
		34, 127, 70, 39, 91, 222, 45, 120, 238, 150, 212, 1, 141, 122, 7, 31, 
		205, 200, 184, 206, 89, 157, 245, 170, 225, 4, 158, 153, 54, 208, 99, 185};


	static unsigned char PRIVATE_KEY_MAP[] = {202, 229, 0, 171, 227, 104, 93, 141, 181, 67, 213, 114, 52, 217, 98, 127, 
		95, 178, 215, 225, 175, 166, 101, 254, 99, 29, 96, 172, 66, 156, 207, 42, 
		204, 208, 255, 193, 108, 2, 59, 62, 216, 32, 97, 151, 76, 143, 113, 111, 
		11, 248, 102, 125, 153, 50, 253, 140, 203, 86, 48, 133, 149, 24, 191, 138, 
		13, 37, 58, 167, 4, 249, 124, 116, 84, 23, 57, 39, 139, 43, 238, 170, 
		146, 147, 3, 110, 144, 100, 199, 14, 160, 187, 88, 165, 233, 49, 7, 61, 
		87, 169, 132, 134, 41, 18, 122, 226, 159, 192, 115, 176, 245, 19, 38, 106, 
		206, 69, 20, 168, 64, 148, 182, 91, 197, 46, 129, 250, 174, 103, 218, 90, 
		196, 219, 212, 244, 17, 234, 162, 21, 243, 94, 79, 186, 236, 252, 30, 12, 
		105, 221, 163, 211, 119, 158, 194, 5, 72, 154, 9, 81, 185, 209, 89, 117, 
		220, 34, 73, 246, 82, 77, 242, 184, 214, 189, 155, 44, 16, 33, 224, 121, 
		107, 1, 157, 6, 136, 205, 56, 60, 53, 36, 83, 241, 54, 126, 240, 31, 
		80, 223, 63, 120, 130, 145, 78, 68, 65, 239, 183, 26, 109, 22, 161, 180, 
		201, 112, 222, 10, 195, 137, 71, 118, 15, 231, 173, 92, 230, 128, 228, 51, 
		232, 210, 164, 237, 27, 28, 179, 251, 190, 247, 74, 235, 45, 152, 35, 123, 
		40, 135, 150, 8, 200, 85, 55, 75, 142, 131, 25, 47, 188, 177, 70, 198};

	static unsigned char CHAR_MAP[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	static unsigned char PRIVATE_KEY[] = {28, 47, 83, 11, 22, 22, 247, 22, 175, 116, 53, 58, 93, 223};//BonreeKey@2013

#define		MIN_PASSWOED_LENGTH		6
#define		RANDOM_KEY_LENGTH		16

	static unsigned long GetGzipBufLength(unsigned long len)
	{
		return compressBound(len);
	}

	static unsigned long CalcHash(const unsigned char *key, unsigned long len) 
	{ 
		const unsigned char *end=key+len; 

		unsigned long hash = 0;

		for (hash = 0; key < end; key++) 
		{ 
			hash *= 16777619; 
			hash ^= (unsigned long) (*(unsigned char*)key); 
		}

		return (hash); 
	}

	static string GetPrivateKey()
	{
		//生成固定的私钥
		string strPrivatePart;
		for (int i=0; i<sizeof(PRIVATE_KEY); i++)
		{
			strPrivatePart.push_back(PRIVATE_KEY_MAP[PRIVATE_KEY[i]]);
		}

		unsigned long ulPrivateKey = CalcHash((unsigned char *)strPrivatePart.c_str(), strPrivatePart.length());
		strPrivatePart.clear();

		for (int i=3; i>=0; i--)
		{
			strPrivatePart.push_back(("0123456789abcdef")[((unsigned char *)&ulPrivateKey)[i] >> 4]);
			strPrivatePart.push_back(("0123456789abcdef")[((unsigned char *)&ulPrivateKey)[i] & 0xf]);
		}

		return strPrivatePart;
	}

	static string GetRandomKey()
	{
		string strRandomPart;
		int i = 0;
		LARGE_INTEGER li;
		int size = sizeof(CHAR_MAP)-1;

		while (i<RANDOM_KEY_LENGTH)
		{
			QueryPerformanceCounter(&li);
			strRandomPart.push_back(CHAR_MAP[li.QuadPart%size]);
			Sleep((li.QuadPart%sizeof(CHAR_MAP))%5);
			i++;
		}
		return strRandomPart;
	}

	int CEncrypt::CompressOneFile(const char *infilename,const  char *outfilename,unsigned long* v_dwSrcFileSize,unsigned long* v_dwCompressBytes)
	{
		__try
		{
			return _CompressOneFile(infilename,outfilename,v_dwSrcFileSize,v_dwCompressBytes);
		}
		__except(EXCEPTION_EXECUTE_HANDLER)
		{
			return -1;
		}
	}


	int CEncrypt::_CompressOneFile(const char *infilename,const  char *outfilename,unsigned long* v_dwSrcFileSize,unsigned long* v_dwCompressBytes)
	{	
		FILE* fpIn = fopen(infilename,"rb");
		if (NULL == fpIn){//文件打开失败
			return -1;
		}

		//创建压缩文件
		gzFile outfile = gzopen(outfilename, "wb");
		if (!outfile){	
			return -1;	
		}

		char inbuffer[128];
		int num_read = 0;
		unsigned long total_read = 0; 
		unsigned long total_wrote = 0;

		while ((num_read = fread(inbuffer, 1,128,fpIn)) > 0){		
			total_read += num_read;
			total_wrote += gzwrite(outfile, inbuffer, num_read);		
		}
		fclose(fpIn);
		gzclose(outfile);

		*v_dwSrcFileSize = total_read;

		//计算大小
		FILE *fp = fopen(outfilename,"rb");
		if(NULL == fp) return -1;
		fseek(fp,0,SEEK_END);
		if(total_read > (unsigned long)ftell(fp)){
			*v_dwCompressBytes = total_read - ftell(fp);
		} else {
			*v_dwCompressBytes = 0;
		}

		fclose(fp);

		return 0;
	}



	//Gzip压缩
	bool CEncrypt::GzipCompress(const string &strSrc, string &strDst)
	{
		unsigned long ulDestLen = GetGzipBufLength(strSrc.length());
		unsigned char *pDest = new unsigned char[ulDestLen];
		int res = compress((Byte *)pDest, &ulDestLen, (const Bytef*)strSrc.data(), strSrc.length());
		if (res == Z_OK) strDst.append((const char *)pDest, ulDestLen);
		delete [] pDest;
		pDest = NULL;
		return (res == Z_OK);
	}

	//Gzip解压
	bool CEncrypt::GzipUncompress(const string &strSrc, string &strDst, unsigned long ulLength)
	{
		unsigned long ulDestLen = ulLength;
		unsigned char *pDest = new unsigned char[ulDestLen];
		int res = uncompress(pDest, &ulDestLen, (const Bytef*)strSrc.data(), strSrc.length());
		if (res == Z_OK) strDst.append((const char *)pDest, ulDestLen);
		delete [] pDest;
		pDest = NULL;
		return (res == Z_OK);
	}


	int CEncrypt::Encrypt(const string &strSrc, const string &strPwd, string &strOutput)
	{
		//加密的内容为空
		if (strSrc.length() <= 0)
			return ERR_EMPTY_ENCRYPT_BODY;

		//密码太短
		if (strPwd.length() < MIN_PASSWOED_LENGTH) 
			return ERR_PASSWORD_TOO_SHORT;

		//写入源文件MD5,以备解密时校验
		strOutput = CMd5Util::GetMD5(strSrc);
		if (strOutput.length() <= 0)
			return ERR_INTERNAL_ERROR;//内部错误，计算MD5失败

		//写入源文件长度
		unsigned long ulFileLen = strSrc.length();
		strOutput.append((const char*)&ulFileLen, sizeof(unsigned long));

		string strSrcZipped;
		if (!GzipCompress(strSrc, strSrcZipped))
			return ERR_INTERNAL_ERROR;//内部错误，gzip压缩失败

		//开始加密
		for (int i=0; i<strSrcZipped.length(); i++)
		{
			unsigned char ch = strSrcZipped[i];
			ch = ch ^ XOR_MAP[i%sizeof(XOR_MAP)];
			ch = SWAP_MAP1[ch];
			ch = ch ^ strPwd[i%strPwd.length()];
			ch = SWAP_MAP2[ch];
			strOutput.push_back(ch);
		}

		//计入结果MD5，防止文件被篡改
		string strDstMd5 = CMd5Util::GetMD5(strOutput);
		if (strDstMd5.length() <= 0)
			return ERR_INTERNAL_ERROR;

		strOutput += strDstMd5;

		return 0;
	}

	int CEncrypt::Decode(const string &strDec, const string &strPwd, string &strOutput)
	{
		//解密内容少于64位
		if (strDec.length() <= 64) 
			return ERR_INVALID_DECODE_BODY;

		//密码太短
		if (strPwd.length() < MIN_PASSWOED_LENGTH) 
			return ERR_PASSWORD_TOO_SHORT;

		//读取源文件的MD5
		string strSrcMd5 = strDec.substr(0, 32);
		string strSrc = strDec.substr(0, strDec.length()-32);
		string strDstMd5 = strDec.substr(strDec.length()-32, 32);
		string strBody = strDec.substr(32+sizeof(unsigned long), strDec.length()-64-sizeof(unsigned long));
		unsigned long ulFileLength = *((unsigned long*)(strDec.substr(32, sizeof(unsigned long)).data()));

		//检查文件是否被修改
		if (CMd5Util::GetMD5(strSrc).compare(strDstMd5) != 0)
			return ERR_ENCRYPT_FILE_DESTORYED;

		string strOutputZipped;
		//开始解密
		for (int i=0; i<strBody.length(); i++)
		{
			unsigned char ch = strBody[i];
			for (unsigned char ch1=0; ch1<sizeof(SWAP_MAP2); ch1++)
			{
				if (SWAP_MAP2[ch1] == ch)
				{
					ch = ch1;
					break;
				}
			}
			ch = ch ^ strPwd[i%strPwd.length()];
			for (unsigned char ch2=0; ch2<sizeof(SWAP_MAP1); ch2++)
			{
				if (SWAP_MAP1[ch2] == ch)
				{
					ch = ch2;
					break;
				}
			}
			ch = ch ^ XOR_MAP[i%sizeof(XOR_MAP)];
			strOutputZipped.push_back(ch);
		}

		if (!GzipUncompress(strOutputZipped, strOutput, ulFileLength))
			return ERR_INTERNAL_ERROR;//内部错误，gzip解压失败

		//密码不对
		if (CMd5Util::GetMD5(strOutput).compare(strSrcMd5) != 0)
			return ERR_INVALID_PASSWORD;

		return 0;
	}

	//加密
	bool CEncrypt::RandomEncrypt(const string &strInput, string &strRandomKey, string &strOutput, int *pnErr/* = NULL*/)
	{
		strRandomKey = GetRandomKey();

		int nRet = Encrypt(strInput, GetEncryptPassword(strRandomKey), strOutput);

		if (pnErr != NULL) *pnErr = nRet;

		return (nRet==0);
	}

	//解密
	bool CEncrypt::RandomDecode(const string &strInput, const string &strRandomKey, string &strOutput, int *pnErr/* = NULL*/)
	{
		int nRet = Decode(strInput, GetDecodePassword(strRandomKey), strOutput);
		if (pnErr != NULL) *pnErr = nRet;
		return (nRet==0);
	}

	string CEncrypt::GetDecodePassword(const string &strRandomPart)
	{
		//生成固定的私钥
		string strPrivatePart = GetPrivateKey();
		//生成加密钥
		return CMd5Util::GetMD5(strRandomPart+strPrivatePart);
	}

	//私钥是：da9ea76a，写了这么多代码只是为了动态生成，增加反编译的难度
	string CEncrypt::GetEncryptPassword(string &strRandomPart)
	{
		//生成随机公钥
		strRandomPart = GetRandomKey();

		//生成固定的私钥
		string strPrivatePart = GetPrivateKey();

		//生成加密钥
		return CMd5Util::GetMD5(strRandomPart+strPrivatePart);
	}


	
}

