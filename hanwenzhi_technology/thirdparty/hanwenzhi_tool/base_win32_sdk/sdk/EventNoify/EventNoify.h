#ifndef _H_EVENT_NOTIFY_5A8B906F_83DA_40AB_97C3_A78F23BE3350
#define _H_EVENT_NOTIFY_5A8B906F_83DA_40AB_97C3_A78F23BE3350


namespace sdk
{
	typedef  struct tagEventNotifyInfo
	{
		char chEventType[32];
		POINT ptMouse;
		//add more information according to your need
		tagEventNotifyInfo()
		{
			memset(chEventType, 0, sizeof(chEventType));					
		}
	} EventNotifyInfo;


	class AFX_EXT_CLASS IEventNotify
	{
	public:
		virtual void EventNotify(EventNotifyInfo* info) = 0;
	};


	class AFX_EXT_CLASS CEventNotifyManager
	{
	public:
		CEventNotifyManager();
		~CEventNotifyManager();

		static bool AddNotifier(IEventNotify* pObject);
		static bool RemoveNotifier(IEventNotify* pObject);   
		static void SendNotify(EventNotifyInfo* pObject);

	private:
		static list<IEventNotify*> m_listObjects;				
	};




	
}

#endif