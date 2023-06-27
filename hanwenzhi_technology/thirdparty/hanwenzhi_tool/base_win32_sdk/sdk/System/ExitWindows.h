/**********************************************************************************
/* File Name		:	ExitWindows.h
/*																				   
/* Author			:	Jais T Mathew (jaistmathew@yahoo.com.com)							   
/*																				   
/* Project			:	NetWork developement Toolkit
/*																				   
/* Module			:	Node Manager
/*																				   
/* Purpose			:	Declaration of the CExitWindows class
/*						Abstract functions for system management. Implements the 
/*						all of mixed enviroument.
/*																				   
/* Copy Right		:	Copyright ?ktssoftwares.Com
/*																				   
/* Notes			:															   
/*																				   
/* History			:															   
/*		Created		:   14 Dec 2002
/*		Version		:	1.0.0.0													   
/*																				   
/*		Updated #1	:	6 May 2002															   
/*																				   
/**********************************************************************************/


#ifndef	__EXITWINDOWS_H__
#define	__EXITWINDOWS_H__




namespace sdk
{
	namespace exit_windows
	{
		#define WINNT							0x11
		#define WIN9X							0x12
		#define EXITWINDOWS_FAILED				0x13
		#define EXITWINDOWS_SUCESS				0x14
		#define ADJUST_TOCKEN_SUCESS			0x15
		#define ADJUST_TOCKEN_FAILED			0x15
		#define ADJUST_PRIVILEGE_FAILED			0x16
		#define OPENING_PROCESS_TOKEN_FAILED	0x100

		class AFX_EXT_CLASS CExitWindows  
		{
			UINT			m_nVersionType;
			OSVERSIONINFO	m_osvi;

		public:
			static	BOOL			SetItAsLastShutDownProcess();
			BOOL			LogOff();
			BOOL			Restart();
			BOOL			ShutDown();
			OSVERSIONINFO	GetOsVersionInfo()const;
			UINT			GetOsVersion();
			BOOL			ExitWindowsExt(UINT nFlag,DWORD dwType);
			BOOL			ForceShutDown();
			BOOL			ForceLogOff();
			BOOL			ForceReStart();
			CExitWindows();
			virtual					~CExitWindows();

		protected:
			BOOL			AdjustProcessTokenPrivilege();


			void EnableShutdownPrivileges();
			void DisableShutdownPrivileges();
		};


		AFX_EXT_API BOOL RestartComputer (void);





	}
}


#endif 
