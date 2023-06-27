#include "stdafx.h"
#include "logutil.h"

#include <stdio.h>
#include <stdarg.h>


namespace sdk
{
	namespace logutil
	{

		CEasyLog::CEasyLog()
		{


		}
		CEasyLog::~CEasyLog()
		{


		}

		//CTime::GetCurrentTime().Format("%Y%m%d")
		void CEasyLog::Init(const CString& strLogFullPath)
		{
			m_strFileFullPath = strLogFullPath;
			CString strPath = strLogFullPath;			
			int position = strPath.ReverseFind('\\'); //反向查找"\"所在的位置
			strPath = strPath.Left(position+1); 		
			sdk::fileutil::CreatMultiDir(strPath);

			LARGE_INTEGER litmp;
			QueryPerformanceFrequency(&litmp);
			m_dfFreq = (double)litmp.QuadPart;

			QueryPerformanceCounter(&litmp);
			m_StartCounter = litmp.QuadPart;

			/*CString strDir;	
			sdk::fileutil::DeleteFilesOld(strDir, "*.log", 30);*/

		}

		bool CEasyLog::WriteLog(const CString & str)
		{	
			FILE * pFile=fopen((LPTSTR)(LPCTSTR)m_strFileFullPath,"a+");	
			if(pFile==NULL) return false;	

			fseek(pFile, 0L, SEEK_END);	
			CString strTime = GetTimeOut();
			fprintf(pFile,"[%s] [%s] %s\n",CTime::GetCurrentTime().Format("%Y-%m-%d %H:%M:%S ") ,strTime, (LPTSTR)(LPCTSTR)str);
			if (pFile!=NULL) fclose(pFile);
			return true;
		}

		CString CEasyLog::GetTimeOut()
		{
			LARGE_INTEGER litmp;
			QueryPerformanceCounter(&litmp);
			LONGLONG EndCounter = litmp.QuadPart;

			double dTimeOut = (double)(EndCounter-m_StartCounter);
			dTimeOut = dTimeOut / m_dfFreq;
			m_StartCounter = EndCounter;

			CString strTimer;
			strTimer.Format("%1f",dTimeOut);	
			return strTimer;
		}




	}
}


