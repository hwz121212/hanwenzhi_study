#ifndef _H_CSTOPWATCH_C30693AC_8373_4EF7_8476_D141A8C56559
#define _H_CSTOPWATCH_C30693AC_8373_4EF7_8476_D141A8C56559



namespace sdk
{
	#ifdef _DEBUG
		#define STOPWATCH_ONLYDEBUG(module)		sdk::CAutoMegBox_StopWatch watch(module);
	#else
		#define STOPWATCH_ONLYDEBUG(module)
	#endif

	//√Î±Ì
	class AFX_EXT_CLASS CStopWatch 
	{
	private:

		typedef struct {
			LARGE_INTEGER start;
			LARGE_INTEGER stop;
		} stopWatch;

		stopWatch timer;
		LARGE_INTEGER frequency;
		double LIToSecs( LARGE_INTEGER & L);
	public:
		CStopWatch();
		void startTimer( );
		void stopTimer( );
		double getElapsedTime_doubleSecond();
		LONGLONG getElapsedTime_dwordmicrosecond();
	};

	class AFX_EXT_CLASS CAutoMegBox_StopWatch
	{
	public:
		CAutoMegBox_StopWatch();
		CAutoMegBox_StopWatch(const CString& str);
		~CAutoMegBox_StopWatch();

	private:
		CStopWatch m_StopWatch;
		CString m_strFunName;
	};


	
	
}



#endif
