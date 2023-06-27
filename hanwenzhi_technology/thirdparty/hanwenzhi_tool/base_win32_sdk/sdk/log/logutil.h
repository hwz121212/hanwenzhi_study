#pragma once

namespace sdk
{
	namespace logutil
	{

		class ILog
		{
		public: 
			virtual bool WriteLog(const CString & str) = 0;
		};

		class CEasyLog : public ILog
		{
		public:
			void Init(const CString& strLogFullPath);
			virtual bool WriteLog(const CString & str);
			CEasyLog();
			virtual ~CEasyLog();

		protected:
			CString GetTimeOut();
			
		private:
			CString m_strFileFullPath;	


			LONGLONG m_StartCounter;//��ʼʱ��
			double m_dfFreq;//��������ʱ��Ƶ��
		
		
		};


	}
}