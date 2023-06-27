#ifndef _H_ENCRYPT_D5732EBB_3AC6_4A07_8C20_B31E8C3932F0
#define _H_ENCRYPT_D5732EBB_3AC6_4A07_8C20_B31E8C3932F0

namespace sdk
{
		

	/************************************************************************/
	/*		此加密参考DES加密思想，依然采用交换叠加基本原理，为对称加密		*/
	/*		同时在加密的同时进行了GZIP压缩									*/
	/************************************************************************/
	class AFX_EXT_CLASS CEncrypt
	{
	public:
		enum ERROR_CODE
		{
			ERR_ENCRYPT_FILE_DESTORYED	= -1,	//密文已被破坏
			ERR_INVALID_PASSWORD		= -2,	//无效的密码
			ERR_PASSWORD_TOO_SHORT		= -3,	//加密的密码过短
			ERR_INTERNAL_ERROR			= -4,	//内部错误
			ERR_EMPTY_ENCRYPT_BODY		= -5,	//待加密文为空
			ERR_INVALID_DECODE_BODY		= -6,	//待解密文为空
		};
	public:
		//加密，成功返回0，失败返回错误码
		static int Encrypt(const string &strInput, const string &strPwd, string &strOutput);
		//解密，成功返回0，失败返回错误码
		static int Decode(const string &strInput, const string &strPwd, string &strOutput);
	public:
		//随机密码加密，成功返回TRUE
		static bool RandomEncrypt(const string &strInput, string &strRandomKey, string &strOutput, int *pnErr = NULL);
		//传入随机码解密，成功返回TRUE
		static bool RandomDecode(const string &strInput, const string &strRandomKey, string &strOutput, int *pnErr = NULL);

	public:

		static int CompressOneFile(const char *infilename,const  char *outfilename,unsigned long* v_dwSrcFileSize,unsigned long* v_dwCompressBytes);
		//Gzip压缩
		static bool GzipCompress(const string &strInput, string &strOutput);
		//Gzip解压
		static bool GzipUncompress(const string &strInput, string &strOutput, unsigned long ulLength);
	public:
		//生成随机密码，此密码由（随机码+固定码）MD5生成
		static string GetEncryptPassword(string &strRandomPart);
		//根据server回传的随机码，生成本地解密密码
		static string GetDecodePassword(const string &strRandomPart);

	private:
		static int _CompressOneFile(const char *infilename,const char *outfilename,unsigned long* v_dwSrcFileSize,unsigned long* v_dwCompressBytes);
	};



	
}


#endif






