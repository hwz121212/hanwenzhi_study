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
				// ������ʵ��API�Ĺҽ�(HOOK),ͨ����дAPI����ǰ��5���ֽڴ���ʵ����ת��inlinehook
				//
				// ʹ�÷���		
				//	
				//		�������-���� .h
				//		int WINAPI Hook_MessageBoxA(HWND hWnd , PCSTR pszText , LPCSTR pszCaption,UINT uType);
				//
				//		Ҫ���صĺ��� .cpp
				//		InLineHook g_MessageBoxA(GetModuleHandle("user32.dll"),"MessageBoxA",(PROC)&Hook_MessageBoxA);
				//
				//		����������� .cpp
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
					// �������޸�ҪHOOK��API��ǰ��5���ֽڵĴ��롣
					//		 �ú������������Ҫ����ԭ����֮ǰ���á��Ǳ���ģ�����һ��������쳣��
					//		 ʹ�÷�����ο���������ӣ�
					//
					void PrepareInvoke() 
					{
						memcpy(m_pfnHookFunction , m_byteEnterCode , 5 ) ;
						FlushInstructionCache( GetCurrentProcess() , (LPVOID)m_pfnHookFunction , 5 );
					}

					//
					// ��������дҪHOOK��API��ǰ��5���ֽڴ��룬ʹ���õ���APIʱ����������ĺ���
					//		 �ú������������Ҫ��������ʱ���á��Ǳ���ģ�����һ��������쳣��
					//		 ʹ�÷�����ο���������ӣ�
					//
					void LeaveInvoke()
					{
						memcpy( m_pfnHookFunction , m_byteJmpCode , 5 ) ;
						FlushInstructionCache( GetCurrentProcess() , (LPVOID)m_pfnHookFunction , 5 );
					}

				public:
					PROC m_pfnHookFunction ;			// ҪHOOK��API�ĺ�����ַ
					BYTE m_byteEnterCode[5];			// ����API������ǰ5���ֽڴ���
					BYTE m_byteJmpCode[5];				// ����������ת����������Ĵ���
				};

			}
		}
	}


}

#endif
