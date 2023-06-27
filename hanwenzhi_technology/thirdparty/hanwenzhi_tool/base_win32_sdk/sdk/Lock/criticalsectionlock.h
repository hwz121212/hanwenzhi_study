#ifndef _H_CRITICALSECTIONUTIL_9A1C55DC_1CC1_4544_A812_07110396D9E3
#define _H_CRITICALSECTIONUTIL_9A1C55DC_1CC1_4544_A812_07110396D9E3


namespace sdk
{
	namespace util
	{
		namespace system
		{
			namespace lock
			{
				class InstanceLockBase
				{
				public:		
					InstanceLockBase();
					~InstanceLockBase();

				public:
					void Lock();	
					void Unlock();		
				} ;



				class InstanceLock
				{		
				public :
					InstanceLock(InstanceLockBase * pObj);	
					~InstanceLock();		

				private:
					InstanceLockBase * m_pObj;
				} ; 
			}
		}
	}
}

#endif

