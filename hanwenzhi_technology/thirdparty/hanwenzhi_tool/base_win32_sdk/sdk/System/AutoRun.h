#pragma once



namespace sdk
{
	namespace system
	{

		void StartUpWhenUserLogin(char *szRegisterName);			//�û���¼ʱ�Զ���������
		void CancelStartUpWhenUserLogin(char *szRegisterName);		//ȡ���û���¼ʱ�Զ���������

		void StartUpWhenPowerOn(char *szName);
		void CancelStartUpWhenPowerOn(char *szName);

	}
}