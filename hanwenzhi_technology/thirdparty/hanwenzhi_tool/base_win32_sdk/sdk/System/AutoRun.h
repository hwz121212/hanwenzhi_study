#pragma once



namespace sdk
{
	namespace system
	{

		void StartUpWhenUserLogin(char *szRegisterName);			//用户登录时自动启动程序
		void CancelStartUpWhenUserLogin(char *szRegisterName);		//取消用户登录时自动启动程序

		void StartUpWhenPowerOn(char *szName);
		void CancelStartUpWhenPowerOn(char *szName);

	}
}