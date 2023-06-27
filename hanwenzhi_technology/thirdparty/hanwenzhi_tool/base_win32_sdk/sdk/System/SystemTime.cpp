#include "stdafx.h"
#include "SystemTime.h"






CString CSystemTimeUtil::GetSystemStartTime()
{
	typedef struct _tag_SYSTEM_TIME_INFORMATION
	{
		LARGE_INTEGER liKeBootTime;
		LARGE_INTEGER liKeSystemTime;
		LARGE_INTEGER liExpTimeZoneBias;
		ULONG uCurrentTimeZoneId;
		DWORD dwReserved;
	} SYSTEM_TIME_INFORMATION;

#define SystemTimeInformation 3

	typedef LONG (WINAPI *PROCNTQSI)(UINT,PVOID,ULONG,PULONG);
	PROCNTQSI NtQuerySystemInformation;

	CString strStartTime;
	SYSTEM_TIME_INFORMATION Sti;
	LONG		status;
	FILETIME	ftSystemBoot;
	SYSTEMTIME	stSystemBoot;

	NtQuerySystemInformation = (PROCNTQSI)GetProcAddress(GetModuleHandle("NTDLL"),"NtQuerySystemInformation");

	if (!NtQuerySystemInformation)
		return strStartTime;

	status = NtQuerySystemInformation(SystemTimeInformation,&Sti,sizeof(Sti),0);

	if (status!=NO_ERROR)
		return strStartTime;

	ftSystemBoot = *(FILETIME *)&(Sti.liKeBootTime);

	FileTimeToLocalFileTime(&ftSystemBoot,&ftSystemBoot);
	FileTimeToSystemTime(&ftSystemBoot,&stSystemBoot);

	strStartTime.Format("%04d-%02d-%02d %02d:%02d:%02d",stSystemBoot.wYear,stSystemBoot.wMonth,stSystemBoot.wDay,stSystemBoot.wHour,stSystemBoot.wMinute,stSystemBoot.wSecond);
	return strStartTime;
}

CString CSystemTimeUtil::GetSystemStopTime()
{
	HKEY hKey = NULL;
	if(RegOpenKeyEx(HKEY_LOCAL_MACHINE, "System\\CurrentControlSet\\Control\\Windows", 0, KEY_READ, &hKey) == ERROR_SUCCESS)
	{
		FILETIME ft;
		DWORD dwType = REG_BINARY;
		DWORD dwData = sizeof(FILETIME);

		if(RegQueryValueEx(hKey, "ShutdownTime", NULL, &dwType, (LPBYTE)&ft, &dwData) == ERROR_SUCCESS)
		{
			RegCloseKey(hKey);
			CTime stopTime(ft);
			return stopTime.Format("%Y-%m-%d %H:%M:%S");
		}
		RegCloseKey(hKey); 
	}
	return "";
}

