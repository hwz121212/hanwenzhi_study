#ifndef _H_ENCRYPT_D5732EBB_3AC6_4A07_8C20_B31E8C3932F0
#define _H_ENCRYPT_D5732EBB_3AC6_4A07_8C20_B31E8C3932F0

namespace sdk
{
		

	/************************************************************************/
	/*		�˼��ܲο�DES����˼�룬��Ȼ���ý������ӻ���ԭ��Ϊ�ԳƼ���		*/
	/*		ͬʱ�ڼ��ܵ�ͬʱ������GZIPѹ��									*/
	/************************************************************************/
	class AFX_EXT_CLASS CEncrypt
	{
	public:
		enum ERROR_CODE
		{
			ERR_ENCRYPT_FILE_DESTORYED	= -1,	//�����ѱ��ƻ�
			ERR_INVALID_PASSWORD		= -2,	//��Ч������
			ERR_PASSWORD_TOO_SHORT		= -3,	//���ܵ��������
			ERR_INTERNAL_ERROR			= -4,	//�ڲ�����
			ERR_EMPTY_ENCRYPT_BODY		= -5,	//��������Ϊ��
			ERR_INVALID_DECODE_BODY		= -6,	//��������Ϊ��
		};
	public:
		//���ܣ��ɹ�����0��ʧ�ܷ��ش�����
		static int Encrypt(const string &strInput, const string &strPwd, string &strOutput);
		//���ܣ��ɹ�����0��ʧ�ܷ��ش�����
		static int Decode(const string &strInput, const string &strPwd, string &strOutput);
	public:
		//���������ܣ��ɹ�����TRUE
		static bool RandomEncrypt(const string &strInput, string &strRandomKey, string &strOutput, int *pnErr = NULL);
		//�����������ܣ��ɹ�����TRUE
		static bool RandomDecode(const string &strInput, const string &strRandomKey, string &strOutput, int *pnErr = NULL);

	public:

		static int CompressOneFile(const char *infilename,const  char *outfilename,unsigned long* v_dwSrcFileSize,unsigned long* v_dwCompressBytes);
		//Gzipѹ��
		static bool GzipCompress(const string &strInput, string &strOutput);
		//Gzip��ѹ
		static bool GzipUncompress(const string &strInput, string &strOutput, unsigned long ulLength);
	public:
		//����������룬�������ɣ������+�̶��룩MD5����
		static string GetEncryptPassword(string &strRandomPart);
		//����server�ش�������룬���ɱ��ؽ�������
		static string GetDecodePassword(const string &strRandomPart);

	private:
		static int _CompressOneFile(const char *infilename,const char *outfilename,unsigned long* v_dwSrcFileSize,unsigned long* v_dwCompressBytes);
	};



	
}


#endif






