#include "stdafx.h"
#include "Cpu.h"


const DWORD STR_ARRAY_SIZE = 256;


int	CCpu::GetCPUInfo(char v_szCpuIdentifier[], char v_szCpuVendor[], LONG &v_lCpuFrequency, LONG &v_lCpuCount )
{
	char	szIdentifier[STR_ARRAY_SIZE] = {0};
	char	szVendor[STR_ARRAY_SIZE] = {0};   
	DWORD   dwFrequency = 0; 
	DWORD   IdentifierSize = STR_ARRAY_SIZE;
	DWORD	VendorSize = STR_ARRAY_SIZE;
	DWORD   FrequencySize = sizeof(DWORD);
	DWORD	QueryTypeSz = REG_SZ;
	DWORD	QueryTypeDword = REG_DWORD;   
	HKEY    hUser;   
	if (ERROR_SUCCESS == ::RegOpenKeyEx(HKEY_LOCAL_MACHINE, 
		"HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0",   
		0,
		KEY_READ, 
		&hUser)
		)
	{
		::RegQueryValueEx(hUser, "VendorIdentifier", NULL, &QueryTypeSz, (BYTE*)szVendor, &VendorSize);
		::RegQueryValueEx(hUser, "Identifier", NULL, &QueryTypeSz, (BYTE*)szIdentifier, &IdentifierSize);
		::RegQueryValueEx(hUser, "~MHz", NULL, &QueryTypeDword, (BYTE*)&dwFrequency, &FrequencySize);   
		::RegCloseKey(hUser);

		sprintf(v_szCpuIdentifier, "%s", szIdentifier);//cpu类型
		sprintf(v_szCpuVendor, "%s", szVendor);//cpu厂商
		v_lCpuFrequency = (LONG)dwFrequency;//cpu频率		

		v_lCpuCount = GetCPUCount();
		return 0;
	}
	return -1;		
}

int CCpu::GetCPUCount()
{
	typedef void (WINAPI *PGNSI)(LPSYSTEM_INFO);
	SYSTEM_INFO si;
	PGNSI pfnGNSI = (PGNSI)GetProcAddress(GetModuleHandle(("kernel32.dll")), "GetNativeSystemInfo");
	pfnGNSI ? pfnGNSI(&si) : GetSystemInfo(&si);
	return si.dwNumberOfProcessors;
}

string CCpu::GetSystemArch() 
{
	typedef DWORD (WINAPI *SystemInfoFunc)(LPSYSTEM_INFO lpSystemInfo);
	SYSTEM_INFO sysInfo;

	HINSTANCE hInst = ::GetModuleHandleA("KERNEL32.DLL");

	if (NULL == hInst) {
		return string("");
	}

	SystemInfoFunc pfVersion = reinterpret_cast<SystemInfoFunc>(GetProcAddress(hInst, "GetSystemInfo"));

	if (NULL == pfVersion) {
		return string("");
	}

	(*pfVersion)(&sysInfo);

	if (PROCESSOR_ARCHITECTURE_AMD64 == sysInfo.wProcessorArchitecture) {
		return string("amd64");
	}
	else if (PROCESSOR_ARCHITECTURE_IA64 == sysInfo.wProcessorArchitecture) {
		return string("ia64");
	}
	else if (PROCESSOR_ARCHITECTURE_INTEL == sysInfo.wProcessorArchitecture) {
		return string("x86");
	}
	else {
		return string("unknow");
	}
}









