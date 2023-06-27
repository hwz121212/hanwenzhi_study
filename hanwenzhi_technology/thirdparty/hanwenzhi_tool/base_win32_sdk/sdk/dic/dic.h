#pragma once


typedef struct _DIC_KEY_VALUE
{
	CString strKey;
	CString strValue;
}DIC_KEY_VALUE;

namespace sdk
{
	namespace dic
	{
		class CDicKeyValue
		{
		public:
			CDicKeyValue();
			~CDicKeyValue();


		public:
			CString Convert(const CString& str);

		private:
			vector<DIC_KEY_VALUE> m_vecDic;

		};
	}
}

