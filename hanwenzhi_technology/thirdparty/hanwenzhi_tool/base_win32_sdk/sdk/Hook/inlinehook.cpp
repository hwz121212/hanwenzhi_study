#include "stdafx.h"
#include "inlinehook.h"



namespace sdk
{
	namespace util
	{
		namespace system
		{
			namespace hook
			{


				typedef FARPROC (WINAPI *PFN_GetProcAddress2) (    __in HMODULE hModule,    __in LPCSTR lpProcName    );

				PFN_GetProcAddress2 _GetProcAddress2=GetProcAddress;

				InLineHook::InLineHook()
				{	
					m_pfnHookFunction	= NULL ;
					memset( m_byteEnterCode , 0 , 5 ) ;
					memset( m_byteJmpCode , 0 , 5 ) ;
				}


				InLineHook::~InLineHook()
				{
					if (m_byteJmpCode[0]==0xE9)
					{
						PrepareInvoke() ;
					}
				}

				//
				// 构造函数
				// 描述：实现HOOK API
				// 参数：pszModuleName		要HOOK的API的所在模块句柄。该句柄一般是通过GetModuleHandle或LoadLibrary函数获得。
				//		 pszFunctionName	要HOOK的API的名称
				//		 pfnMyFunction		替代的函数指针
				//

				InLineHook::InLineHook(  HMODULE hModule , LPCSTR pszFunctionName , PROC pfnMyFunction  )
				{		
					InLineHook();
					Hook( hModule , pszFunctionName , pfnMyFunction ) ;
				}

				//
				// 描述：实现HOOK API
				// 参数：pszModuleName		要HOOK的API的所在模块句柄。该句柄一般是通过GetModuleHandle或LoadLibrary函数获得。
				//		 pszFunctionName	要HOOK的API的名称
				//		 pfnMyFunction		替代的函数指针
				//
				BOOL InLineHook::Hook( HMODULE hModule , LPCSTR pszFunctionName , PROC pfnMyFunction ) 
				{
					ASSERT( hModule ) ;
					if( hModule )
					{
						//m_pfnHookFunction = ::GetProcAddress( hModule , pszFunctionName ) ;
						m_pfnHookFunction = _GetProcAddress2( hModule , pszFunctionName ) ;
						ASSERT( m_pfnHookFunction ) ;

						if(m_pfnHookFunction )
						{
							memcpy( m_byteEnterCode , (LPVOID)m_pfnHookFunction , 5 ) ;
							DWORD dwOldMode = 0 ;			
							if( ::VirtualProtect( m_pfnHookFunction , 5 , PAGE_EXECUTE_READWRITE, &dwOldMode ) )
							{
								m_byteJmpCode[0] = 0xE9 ;
								*(int*)&m_byteJmpCode[1] = (int)pfnMyFunction - ((int)m_pfnHookFunction + 5 ) ;

								memcpy( m_pfnHookFunction , m_byteJmpCode , 5 ) ;			
								FlushInstructionCache( GetCurrentProcess() , (LPVOID)m_pfnHookFunction , 5 );				

								return TRUE ;
							}
						}

					}
					return FALSE ;
				}


			}
		}
	}
}