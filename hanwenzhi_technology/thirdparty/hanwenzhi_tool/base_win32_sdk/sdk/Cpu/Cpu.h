#ifndef _H_CPU_ED0C1B8D_CE09_4B97_A9FD_898BD7F57BDD
#define _H_CPU_ED0C1B8D_CE09_4B97_A9FD_898BD7F57BDD

namespace sdk
{

	class AFX_EXT_CLASS CCpu
	{
	public:
		CCpu(){};

	
			/*
		* �������ܣ���ȡ����cpu����Ϣ�������ͺţ�Ʒ�ƣ���Ƶ������
		* �����������
		* ���������v_szCpuIdentifier-�ͺţ�v_szCpuVendor-Ʒ�ƣ�v_lCpuFrequency-��Ƶ��v_lCpuCount-����
		* ����ֵ  �����󷵻�-1����ȷ����0
		*/
		static int	GetCPUInfo( char v_szCpuIdentifier[], 
								char v_szCpuVendor[], 
								LONG &v_lCpuFrequency, 
								LONG &v_lCpuCount
								);
		/*
		* �������ܣ���ȡ����cpu�ĸ���
		* �����������
		* �����������
		* ����ֵ  �����󷵻�-1����ȷ���ش���0����
		*/
		static int  GetCPUCount();

		static string GetSystemArch();

	};


}


#endif