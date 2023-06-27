#include "stdafx.h"
#include "StopWatch.h"



//���ھ�ȷ��ʱ
//������������ÿ�ʼ�����������������ܹ�ʱ�䣬���ص��Ǿ�����ʱ��
namespace sdk
{

	double CStopWatch::LIToSecs( LARGE_INTEGER & L) 
	{
		return ((double)L.QuadPart /(double)frequency.QuadPart);
	}

	CStopWatch::CStopWatch()
	{
		timer.start.QuadPart=0;
		timer.stop.QuadPart=0;	
		QueryPerformanceFrequency( &frequency );
	}

	void CStopWatch::startTimer( ) 
	{
		QueryPerformanceCounter(&timer.start);
	}

	void CStopWatch::stopTimer( ) 
	{
		QueryPerformanceCounter(&timer.stop);
	}


	double CStopWatch::getElapsedTime_doubleSecond() 
	{
		LARGE_INTEGER time;
		time.QuadPart = timer.stop.QuadPart - timer.start.QuadPart;
		return LIToSecs( time) ;
	}

	LONGLONG CStopWatch::getElapsedTime_dwordmicrosecond()
	{
		LARGE_INTEGER time;
		time.QuadPart = timer.stop.QuadPart - timer.start.QuadPart;
		LONGLONG r =  ((double)time.QuadPart /(double)(frequency.QuadPart / 1000000));
		return r;
	}



	CAutoMegBox_StopWatch::CAutoMegBox_StopWatch()
	{
		m_strFunName = "";
		m_StopWatch.startTimer();
	}

	CAutoMegBox_StopWatch::CAutoMegBox_StopWatch(const CString& str)
	{
		m_strFunName = str;
		m_StopWatch.startTimer();
	}

	CAutoMegBox_StopWatch::~CAutoMegBox_StopWatch()
	{
		m_StopWatch.stopTimer();
		double fTime = m_StopWatch.getElapsedTime_doubleSecond();			
	}


	
}

