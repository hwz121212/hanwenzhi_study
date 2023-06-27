#include "stdafx.h"
#include "TimeUtil.h"




void CTimeUtil::FileTimeToTime_t( FILETIME ft, time_t *t )
{
	LONGLONG ll; 
	ULARGE_INTEGER ui; 
	ui.LowPart  = ft.dwLowDateTime; 
	ui.HighPart = ft.dwHighDateTime; 

	ll = ft.dwHighDateTime << 32 + ft.dwLowDateTime; 

	*t = ((LONGLONG)(ui.QuadPart - 116444736000000000) / 10000000); 
}


CString CTimeUtil::GetCurrentDateTime_withline()		//sample: 2015-06-24 13_48_03
{
	CTime time;
	time = CTime::GetCurrentTime();		
	CString strDateTime = time.Format("%Y-%m-%d %H_%M_%S");		
	return strDateTime;
}

CString CTimeUtil::GetCurrentDate()
{
	CTime time;
	time = CTime::GetCurrentTime();						
	CString strDate = time.Format("%x");				
	return strDate;
}

CString CTimeUtil::GetCurrentTime()
{
	CTime time;
	time = CTime::GetCurrentTime();						
	CString strTime = time.Format("%X");				
	return strTime;
}


time_t CTimeUtil::GetCurrentTimeHw()
{
	SYSTEMTIME stm;
	GetLocalTime ( &stm );
	CTime tNow ( stm );
	return (time_t)tNow.GetTime ();
}

DWORD CTimeUtil::GetCurTimeString(char *buf)
{
	struct tm *tt;
	time_t now = time(NULL);
	tt = localtime(&now);
	return (DWORD)strftime(buf, 22, "%y-%m-%d %H:%M:%S", tt);
}



CString CTimeUtil::GetCurrentDateTime()
{
	CTime time;
	time = CTime::GetCurrentTime();						
	//CString strDateTime = time.Format("%Y-%m-%d %H:%M:%S");				
	CString strDateTime = time.Format("%Y-%m-%d %H:%M:%S ��%W��-%A");		
	return strDateTime;
}

CString CTimeUtil::GetYearMonthDayHourMinuteSecond()
{
	CTime time = CTime::GetCurrentTime();							
	CString strDateTime = time.Format("%Y��%m��%d�� %Hʱ%M��%S��");
	return strDateTime;	
}

CTimeSpan GetTimeDifference(CTime time)	
{
	CTime time1 = CTime::GetCurrentTime();
	CTimeSpan timespan = time - time1;
	return timespan;

	// 		timespan.GetDays();//����
	// 		timespan.GetHours();//Сʱ��
	// 		timespan.GetMinutes();//������
	// 		timespan.GetSeconds();//����
	// 		timespan.GetTotalHours();//�ϼ�Сʱ��
	// 		timespan.GetTotalMinutes();//�ϼƷ�����
}

CString CTimeUtil::GetDayOfWeekByString(const CString& str, int & iIndex)
{
	CString strReturn;
	COleDateTime	time;
	time.ParseDateTime(str);
	iIndex = time.GetDayOfWeek();

	switch(iIndex)
	{
	case 1:
		strReturn = "������";
		break;
	case 2:
		strReturn = "����һ";
		break;
	case 3:
		strReturn = "���ڶ�";
		break;
	case 4:
		strReturn = "������";
		break;
	case 5:
		strReturn = "������";
		break;
	case 6:
		strReturn = "������";
		break;
	case 7:
		strReturn = "������";
		break;
	}
	return strReturn;
}

int CTimeUtil::GetDayOfYear()
{
	COleDateTime datetime;
	datetime = COleDateTime::GetCurrentTime();
	return datetime.GetDayOfYear();
}


CString CTimeUtil::CTime2CString(CTime & inValue)
{
	return inValue.Format("%Y-%m-%d %H:%M:%S");
}

CTime CTimeUtil::CString2CTime(CString inVlaue)
{
	int nYear;
	int nMonth;
	int nDate;
	int nHour;
	int nMin;
	int nSec; 

	sscanf(inVlaue,"%d-%d-%d %d:%d:%d",&nYear,&nMonth,&nDate,&nHour,&nMin,&nSec);   

	return (CTime(nYear,nMonth,nDate,nHour,nMin,nSec));
}




CString CTimeUtil::COleDateTime2CString(COleDateTime & inValue)
{
	return inValue.Format("%Y-%m-%d %H:%M:%S");
}

COleDateTime CTimeUtil::CString2COleDateTime(CString inValue)
{
	int nYear   =   1900;
	int nMonth  =   1;
	int nDate   =   1;
	int nHour   =   0;
	int nMin    =   0;
	int nSec    =   0; 

	sscanf(inValue,"%d-%d-%d %d:%d:%d",&nYear,&nMonth,&nDate,&nHour,&nMin,&nSec);   

	return (COleDateTime(nYear,nMonth,nDate,nHour,nMin,nSec));
}