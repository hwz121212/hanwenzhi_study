#pragma once




namespace sdk
{
	namespace service
	{

		BOOL InstallService(CString strName,
			CString strDisplayName,
			CString strImagePath,
			CString strDesc,
			DWORD dwServiceType,
			DWORD dwStartType);

		BOOL DeleteService(CString strService, BOOL bStop);
		DWORD StopServiceDepends(SC_HANDLE hSCM, SC_HANDLE hService, BOOL fStopDependencies, DWORD dwTimeout);




		void Demo_InstallService();
		void Demo_DeleteService();

	}

}

