#include "stdafx.h"
#include "ServiceUtil.h"





namespace sdk
{
	namespace service
	{



		BOOL InstallService(CString strName,
			CString strDisplayName,
			CString strImagePath,
			CString strDesc,
			DWORD dwServiceType,
			DWORD dwStartType)
		{
			SC_HANDLE hSCM = NULL;				// SCM DataBase ���
			SC_HANDLE hService = NULL;			// ��������ľ��
			BOOL bReturn = FALSE;

			hSCM = OpenSCManager(NULL, NULL, SC_MANAGER_ALL_ACCESS);
			if (hSCM != NULL)
			{
				hService = CreateService(
					hSCM,						// SCM���ݿ�(Database)��� 
					strName,					// SCM Database�б���ķ�������(��������ݿ���ע�������)
					strDisplayName,				// �û������������������ʾ�ķ�������
					SERVICE_ALL_ACCESS,			// ����ķ���Ȩ�� 
					dwServiceType,				// �������ͣ�Ĭ���ṩ SERVICE_WIN32_OWN_PROCESS �������Լ��Ľ�����
					dwStartType,				// �������ͣ�Ĭ���ṩ SERVICE_AUTO_START��SCM�������Զ��������� 
					SERVICE_ERROR_NORMAL,		// �������Ĵ���ʽ���ṩSERVICE_ERROR_NORMAL �д�����֣�������¼����־��
					strImagePath,				// ��ִ��·��
					NULL,						// ���� 
					NULL,						// ��ǩֵ 
					NULL,						// �������� 
					NULL,						// LocalSystem �ʻ� 
					NULL);						// ����

				if (hService != NULL)
				{
					if (!strDesc.IsEmpty())		// Ϊ������ӷ��������� �ı����Ŀ�ѡ����
					{
						SERVICE_DESCRIPTION sdBuf;
						sdBuf.lpDescription = (char *)(LPCTSTR)strDesc;
						ChangeServiceConfig2(hService, SERVICE_CONFIG_DESCRIPTION, &sdBuf);
					}

					bReturn = TRUE;
				}
			}

			if (hService != NULL)
			{
				CloseServiceHandle(hService);
				hService = NULL;
			}

			if (hSCM != NULL)
			{
				CloseServiceHandle(hSCM);
				hSCM = NULL;
			}

			return bReturn;
		}



		void Demo_InstallService()
		{
			const CString strExeToBeInstalled = _T("winvnc");
			TCHAR szFilePath[MAX_PATH + 1] = { 0 };
			GetModuleFileName(NULL, szFilePath, MAX_PATH);
			(_tcsrchr(szFilePath, _T('\\')))[1] = 0;
			CString strVncPath = szFilePath;
			strVncPath += strExeToBeInstalled + _T(".exe");
			strVncPath += _T(" -service");

			BOOL bInstalled = FALSE;

			CString strRegiserName = _T("winvnc");
			CString strDisplayName = strExeToBeInstalled;

			CString strExePath = strVncPath;
			CString strServerDescription = _T("UltraVNC Desprition");
			DWORD dwServiceType = SERVICE_WIN32_OWN_PROCESS;
			DWORD dwStartType = SERVICE_DEMAND_START;

			bInstalled = InstallService(strRegiserName, strDisplayName, strExePath,
				strServerDescription, dwServiceType, dwStartType);

			CString strInfo;
			if (bInstalled)
			{
				strInfo.Format(_T("Install %s service succeed!"), (LPCTSTR)strExeToBeInstalled);
			}
			else
			{
				strInfo.Format(_T("Install %s service failed!"), (LPCTSTR)strExeToBeInstalled);
			}

		}





		BOOL DeleteService(CString strService, BOOL bStop)
		{
			SC_HANDLE hSCM = NULL;
			SC_HANDLE hService = NULL;
			BOOL bReturn = FALSE;
			DWORD dwError = 0;

			hSCM = ::OpenSCManager(NULL, NULL, SC_MANAGER_ALL_ACCESS);
			if (hSCM != NULL)
			{
				hService = ::OpenService(hSCM, strService, SERVICE_ALL_ACCESS);
				if (hService != NULL)
				{
					if (bStop)
					{
						dwError = StopServiceDepends(hSCM, hService, FALSE, INFINITE);
						if (dwError == ERROR_SUCCESS)
						{
							if (::DeleteService(hService))
							{
								bReturn = TRUE;
							}
						}
					}
					else {
						if (::DeleteService(hService))
						{
							bReturn = TRUE;
						}
					}
				}
			}

			if (hService != NULL)
			{
				CloseServiceHandle(hService);
				hService = NULL;
			}

			if (hSCM != NULL)
			{
				CloseServiceHandle(hSCM);
				hService = NULL;
			}

			return bReturn;
		}

		DWORD StopServiceDepends(SC_HANDLE hSCM, SC_HANDLE hService, BOOL fStopDependencies, DWORD dwTimeout)
		{
			SERVICE_STATUS_PROCESS ss;
			DWORD dwStartTime = GetTickCount();
			DWORD dwBytesNeeded = 0;

			// ��֤�÷���û�б�ֹͣ
			if (!QueryServiceStatusEx(hService, SC_STATUS_PROCESS_INFO,
				(LPBYTE)&ss, sizeof(SERVICE_STATUS_PROCESS), &dwBytesNeeded))
				return GetLastError();

			if (ss.dwCurrentState == SERVICE_STOPPED)
				return ERROR_SUCCESS;

			// �������ֹͣ����ȴ�ֹͣ�ɹ�
			while (ss.dwCurrentState == SERVICE_STOP_PENDING)
			{
				Sleep(2000);
				if (!QueryServiceStatusEx(hService, SC_STATUS_PROCESS_INFO, (LPBYTE)&ss, sizeof(SERVICE_STATUS_PROCESS), &dwBytesNeeded))
					return GetLastError();

				if (ss.dwCurrentState == SERVICE_STOPPED)
					return ERROR_SUCCESS;

				if (GetTickCount() - dwStartTime > dwTimeout)
					return ERROR_TIMEOUT;
			}

			// ���������������, �������ķ����������ֹͣ
			if (fStopDependencies)
			{
				DWORD i;
				DWORD dwBytesNeeded;
				DWORD dwCount;
				LPENUM_SERVICE_STATUS lpDependencies = NULL;
				ENUM_SERVICE_STATUS ess;
				SC_HANDLE hDepService;

				// ��ȡ��Ҫ�����ڴ�Ĵ�С
				if (EnumDependentServices(hService, SERVICE_ACTIVE, lpDependencies, 0, &dwBytesNeeded, &dwCount))
				{
					// ������óɹ�����û�������ķ���
				}
				else
				{
					if (GetLastError() != ERROR_MORE_DATA)
						return GetLastError();

					lpDependencies = (LPENUM_SERVICE_STATUS)HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, dwBytesNeeded);
					if (!lpDependencies)
						return GetLastError();

					__try
					{
						// ö�������ķ���
						if (!EnumDependentServices(hService,
							SERVICE_ACTIVE,
							lpDependencies,
							dwBytesNeeded,
							&dwBytesNeeded,
							&dwCount))
							return GetLastError();

						for (i = 0; i < dwCount; i++)
						{
							ess = *(lpDependencies + i);
							hDepService = OpenService(hSCM,
								ess.lpServiceName,
								SERVICE_STOP | SERVICE_QUERY_STATUS);
							if (!hDepService)
								return GetLastError();

							__try
							{
								// ����ֹͣ��
								if (!ControlService(hDepService, SERVICE_CONTROL_STOP, (LPSERVICE_STATUS)&ss))
									return GetLastError();

								// �ȴ�����ֹͣ
								while (ss.dwCurrentState != SERVICE_STOPPED)
								{
									Sleep(2000);
									if (!QueryServiceStatusEx(hDepService,
										SC_STATUS_PROCESS_INFO,
										(LPBYTE)&ss,
										sizeof(SERVICE_STATUS_PROCESS),
										&dwBytesNeeded))
										return GetLastError();

									if (ss.dwCurrentState == SERVICE_STOPPED)
										break;

									if (GetTickCount() - dwStartTime > dwTimeout)
										return ERROR_TIMEOUT;
								}
							}
							__finally
							{
								// �رմ򿪵ķ�����
								CloseServiceHandle(hDepService);
							}
						}
					}
					__finally
					{
						//�ͷŵ�������ڴ�
						HeapFree(GetProcessHeap(), 0, lpDependencies);
					}
				}
			}

			// ����ֹͣ������������
			if (!ControlService(hService, SERVICE_CONTROL_STOP, (LPSERVICE_STATUS)&ss))
				return GetLastError();

			// �ȴ�����ֹͣ
			while (ss.dwCurrentState != SERVICE_STOPPED)
			{
				Sleep(2000);
				if (!QueryServiceStatusEx(hService,
					SC_STATUS_PROCESS_INFO,
					(LPBYTE)&ss,
					sizeof(SERVICE_STATUS_PROCESS),
					&dwBytesNeeded))
					return GetLastError();

				if (ss.dwCurrentState == SERVICE_STOPPED)
					break;

				if (GetTickCount() - dwStartTime > dwTimeout)
					return ERROR_TIMEOUT;
			}

			// ���سɹ���־
			return ERROR_SUCCESS;
		}



		void Demo_DeleteService()
		{
			BOOL bUnload = FALSE;

			const CString strExeToBeUnload = _T("winvnc");
			bUnload = DeleteService(strExeToBeUnload, TRUE);


			CString strInfo = "";
			if (bUnload)
			{
				strInfo.Format(_T("Unload %s service succeed!"), (LPCTSTR)strExeToBeUnload);
			}
			else
			{
				strInfo.Format(_T("Unload %s service failed!"), (LPCTSTR)strExeToBeUnload);
			}

			cout << (LPCTSTR)strInfo << endl;
		}




	}
}