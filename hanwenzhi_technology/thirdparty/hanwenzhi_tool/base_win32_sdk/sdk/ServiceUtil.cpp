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
			SC_HANDLE hSCM = NULL;				// SCM DataBase 句柄
			SC_HANDLE hService = NULL;			// 操作服务的句柄
			BOOL bReturn = FALSE;

			hSCM = OpenSCManager(NULL, NULL, SC_MANAGER_ALL_ACCESS);
			if (hSCM != NULL)
			{
				hService = CreateService(
					hSCM,						// SCM数据库(Database)句柄 
					strName,					// SCM Database中保存的服务名称(服务的数据库中注册的名字)
					strDisplayName,				// 用户界面或服务管理器重显示的服务名称
					SERVICE_ALL_ACCESS,			// 服务的访问权限 
					dwServiceType,				// 服务类型，默认提供 SERVICE_WIN32_OWN_PROCESS 运行在自己的进程下
					dwStartType,				// 启动类型，默认提供 SERVICE_AUTO_START在SCM启动后自动启动类型 
					SERVICE_ERROR_NORMAL,		// 服务错误的处理方式，提供SERVICE_ERROR_NORMAL 有错误出现，仅仅记录到日志中
					strImagePath,				// 可执行路径
					NULL,						// 组序 
					NULL,						// 标签值 
					NULL,						// 依赖服务 
					NULL,						// LocalSystem 帐户 
					NULL);						// 密码

				if (hService != NULL)
				{
					if (!strDesc.IsEmpty())		// 为服务添加服务描述， 改变服务的可选配置
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

			// 保证该服务没有被停止
			if (!QueryServiceStatusEx(hService, SC_STATUS_PROCESS_INFO,
				(LPBYTE)&ss, sizeof(SERVICE_STATUS_PROCESS), &dwBytesNeeded))
				return GetLastError();

			if (ss.dwCurrentState == SERVICE_STOPPED)
				return ERROR_SUCCESS;

			// 如果正在停止，则等待停止成功
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

			// 如果服务正在运行, 依赖它的服务必须首先停止
			if (fStopDependencies)
			{
				DWORD i;
				DWORD dwBytesNeeded;
				DWORD dwCount;
				LPENUM_SERVICE_STATUS lpDependencies = NULL;
				ENUM_SERVICE_STATUS ess;
				SC_HANDLE hDepService;

				// 获取需要分配内存的大小
				if (EnumDependentServices(hService, SERVICE_ACTIVE, lpDependencies, 0, &dwBytesNeeded, &dwCount))
				{
					// 如果调用成功，则没有依赖的服务
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
						// 枚举依赖的服务
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
								// 发送停止码
								if (!ControlService(hDepService, SERVICE_CONTROL_STOP, (LPSERVICE_STATUS)&ss))
									return GetLastError();

								// 等待服务停止
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
								// 关闭打开的服务句柄
								CloseServiceHandle(hDepService);
							}
						}
					}
					__finally
					{
						//释放掉分配的内存
						HeapFree(GetProcessHeap(), 0, lpDependencies);
					}
				}
			}

			// 发送停止命令到服务控制区
			if (!ControlService(hService, SERVICE_CONTROL_STOP, (LPSERVICE_STATUS)&ss))
				return GetLastError();

			// 等待服务停止
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

			// 返回成功标志
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