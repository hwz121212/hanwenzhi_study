#ifndef _H_TIME_CONVERT_3B8D3146_FECC_4987_9538_80E858CF4155
#define _H_TIME_CONVERT_3B8D3146_FECC_4987_9538_80E858CF4155


namespace sdk
{	
	class AFX_EXT_CLASS CTimeUtil
	{
	public:
		CTimeUtil(){};


		static void FileTimeToTime_t( FILETIME ft, time_t *t );

		static CString GetCurrentDateTime_withline();		//sample: 2015-06-24 13_48_03

		static CString GetCurrentDate();			//sample: 06/24/15
		static CString GetCurrentTime();			//sample: 13:48:03		
		static CString GetCurrentDateTime();		//sample: 2015-06-24 13:48:03 ��25��-Wednesday
		static CString GetYearMonthDayHourMinuteSecond();	//sample: 2015��06��24�� 14ʱ11��51��

		time_t GetCurrentTimeHw();
		DWORD GetCurTimeString(char *buf);			//sample: 2015-06-24 13:48:03


		static CTimeSpan GetTimeDifference(CTime time);	//����ָ��ʱ��͵�ǰʱ��Ĳ�


		static CString GetDayOfWeekByString(const CString& str, int & iIndex);		//����ĳ��Ϊ���ڼ�
		int GetDayOfYear();		//��ȡһ���е�ĳһ��


		static CString CTime2CString(CTime & inValue);
		static CTime CString2CTime(CString inVlaue);
		static CString COleDateTime2CString(COleDateTime & inValue);
		static COleDateTime CString2COleDateTime(CString inValue);


	};


}



#endif
