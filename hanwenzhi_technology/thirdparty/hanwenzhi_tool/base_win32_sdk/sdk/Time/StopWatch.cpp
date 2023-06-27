#include "stdafx.h"
#include "StopWatch.h"



//用于精确计时
//定义变量，调用开始函数，结束函数，总共时间，返回的是经过的时间
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

