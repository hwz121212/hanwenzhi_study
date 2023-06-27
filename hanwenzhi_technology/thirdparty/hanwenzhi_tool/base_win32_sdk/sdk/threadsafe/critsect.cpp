#include "stdafx.h"
#include "critsect.h"



namespace sdk
{
	namespace threadsafe
	{

		//*****************************************************************
		void	CWizCriticalSection::Init()
		{
			ASSERT(m_bInited == FALSE);
			::InitializeCriticalSection(&m_cCriticalSection);
			m_bInited = TRUE;
		}
		//*****************************************************************
		// Default Constructor
		CWizCriticalSection::CWizCriticalSection(BOOL bInit)
			: m_bInited (FALSE)
		{
			if (bInit)
				Init();
		}
		//*****************************************************************
		// Destructor
		CWizCriticalSection::~CWizCriticalSection()
		{
			::DeleteCriticalSection(&m_cCriticalSection);
		}
		//*****************************************************************

	}
}
