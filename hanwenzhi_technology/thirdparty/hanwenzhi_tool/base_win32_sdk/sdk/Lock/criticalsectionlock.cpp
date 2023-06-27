#include "stdafx.h"
#include "criticalsectionlock.h"


namespace sdk
{
	namespace util
	{
		namespace system
		{
			namespace lock
			{
				CRITICAL_SECTION cs;

				InstanceLockBase::InstanceLockBase()
				{
					::InitializeCriticalSection( & cs);
				}

				InstanceLockBase::~InstanceLockBase()
				{
					::DeleteCriticalSection( & cs);
				}

				void InstanceLockBase::Lock()
				{
					::EnterCriticalSection( & cs);
				}

				void InstanceLockBase::Unlock()
				{
					::LeaveCriticalSection( & cs);
				}



				InstanceLock::InstanceLock(InstanceLockBase * pObj)
				{
					m_pObj = pObj;
					if (NULL != m_pObj)
						m_pObj -> Lock();
				}

				InstanceLock::~InstanceLock()
				{
					if (NULL != m_pObj)
						m_pObj -> Unlock();
				}

			}

		}
	}
}