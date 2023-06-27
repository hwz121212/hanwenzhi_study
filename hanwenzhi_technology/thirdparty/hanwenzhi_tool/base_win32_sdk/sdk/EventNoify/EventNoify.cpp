#include "stdafx.h"
#include "EventNoify.h"
#include <Windows.h>




list<IEventNotify*> CEventNotifyManager::m_listObjects ;

CEventNotifyManager::CEventNotifyManager()
{

}

CEventNotifyManager::~CEventNotifyManager()
{

}

bool CEventNotifyManager::AddNotifier(IEventNotify* pObject)
{
	if (pObject != NULL )
	{
		list<IEventNotify*>::iterator ite = find(m_listObjects.begin(), m_listObjects.end(), pObject);
		if (ite == m_listObjects.end())
		{
			m_listObjects.push_back(pObject);
		}
		return true;
	}
	return false;
}

bool CEventNotifyManager::RemoveNotifier(IEventNotify* pObject)
{
	if (pObject != NULL )
	{
		list<IEventNotify*>::iterator ite = find(m_listObjects.begin(), m_listObjects.end(), pObject);
		if (ite != m_listObjects.end())
		{
			m_listObjects.remove(pObject);
		}
		return true;
	}
	return false;
}

void CEventNotifyManager::SendNotify(EventNotifyInfo* pObject)
{
	list<IEventNotify*>::iterator ite = m_listObjects.begin();
	for (; ite!= m_listObjects.end(); ite++)
	{
		(*ite)->EventNotify((EventNotifyInfo*)pObject);
	}
}
		

