#ifndef _H_URL_E8F92415_6F07_4C90_942C_B7EEE35B0121
#define _H_URL_E8F92415_6F07_4C90_942C_B7EEE35B0121


namespace sdk
{
	class AFX_EXT_CLASS CUrl
	{
	public:
		
		static CString CrackUrl(CString sUrl);
		static CString DownloadUrl(CString strUrl);
		static void download(const char *Url,const char *save_as);		/*��Urlָ��ĵ�ַ���ļ����ص�save_asָ��ı����ļ�*/  
	};
}

#endif