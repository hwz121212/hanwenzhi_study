#ifndef _H_INLINEHOOK_F1DF985B_B39A_40F0_8B56_C32B43AF8B12
#define _H_INLINEHOOK_F1DF985B_B39A_40F0_8B56_C32B43AF8B12


namespace sdk
{
	namespace util
	{
		namespace system
		{
			namespace hook
			{
				//
				// InLineHook
				// 描述：实现API的挂接(HOOK),通过改写API函数前面5个字节代码实现跳转！inlinehook
				//
				// 使用范例		
				//	
				//		替代函数-声明 .h
				//		int WINAPI Hook_MessageBoxA(HWND hWnd , PCSTR pszText , LPCSTR pszCaption,UINT uType);
				//
				//		要拦截的函数 .cpp
				//		InLineHook g_MessageBoxA(GetModuleHandle("user32.dll"),"MessageBoxA",(PROC)&Hook_MessageBoxA);
				//
				//		替代函数定义 .cpp
				//
				//		int WINAPI Hook_MessageBoxA(HWND hWnd , PCSTR pszText , LPCSTR pszCaption,UINT uType)
				//		{
				//			g_MessageBoxA.PrepareInvoke();
				//			int ret = ::MessageBoxA(hWnd,pszText,pszCaption,uType);
				//			g_MessageBoxA.LeaveInvoke();
				//			return ret;
				//		}
				//
				class InLineHook
				{
				public:
					InLineHook( HMODULE hModule , LPCSTR pszFunctinName , PROC pfnMyFunction ) ;
					InLineHook();
					~InLineHook();


					BOOL Hook( HMODULE hModule , LPCSTR pszFunctinName , PROC pfnMyFunction ) ;
					//
					// 描述：修复要HOOK的API的前面5个字节的代码。
					//		 该函数在替代函数要调用原函数之前调用。是必需的！否则一定会产生异常！
					//		 使用方法请参考上面的例子！
					//
					void PrepareInvoke() 
					{
						memcpy(m_pfnHookFunction , m_byteEnterCode , 5 ) ;
						FlushInstructionCache( GetCurrentProcess() , (LPVOID)m_pfnHookFunction , 5 );
					}

					//
					// 描述：改写要HOOK的API的前面5个字节代码，使调用到该API时会跳到替代的函数
					//		 该函数在替代函数要结束返回时调用。是必需的！否则一定会产生异常！
					//		 使用方法请参考上面的例子！
					//
					void LeaveInvoke()
					{
						memcpy( m_pfnHookFunction , m_byteJmpCode , 5 ) ;
						FlushInstructionCache( GetCurrentProcess() , (LPVOID)m_pfnHookFunction , 5 );
					}

				public:
					PROC m_pfnHookFunction ;			// 要HOOK的API的函数地址
					BYTE m_byteEnterCode[5];			// 保存API函数的前5个字节代码
					BYTE m_byteJmpCode[5];				// 保存用来跳转到替代函数的代码
				};

			}
		}
	}


}

#endif
