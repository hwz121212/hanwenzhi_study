#include "stdafx.h"
#include "FileCopy.h"


// #ifndef in
// #	define in
// #endif
// 
// #ifndef out
// #	define out
// #endif
// 
// #ifndef for
// #	define for if(0); else for
// #endif



namespace sdk
{
	namespace filecopy
	{


		typedef LONG NTSTATUS;

		//typedef unsigned long* ULONG_PTR;

#define STATUS_INFO_LENGTH_MISMATCH 0xC0000004L

#define NT_SUCCESS(Status) ((LONG)(Status) >= 0)

		typedef enum _SYSTEM_INFORMATION_CLASS
		{
			SystemHandleInformation = 16
		}	SYSTEM_INFORMATION_CLASS;

		typedef enum _FILE_INFORMATION_CLASS
		{
			FileNameInformation = 9
		}	FILE_INFORMATION_CLASS;

		typedef enum _OBJECT_INFORMATION_CLASS 
		{
			ObjectBasicInformation    = 0,	// 0    Y       N
			ObjectNameInformation     = 1,	// 1    Y       N
			ObjectTypeInformation     = 2,	// 2    Y       N
			ObjectAllTypesInformation = 3,	// 3    Y       N
			ObjectHandleInformation   = 4	// 4    Y       Y
		}	OBJECT_INFORMATION_CLASS;

		typedef struct _IO_STATUS_BLOCK
		{
			union
			{
				NTSTATUS Status;
				PVOID Pointer;
			};
			unsigned long* Information;
		}	IO_STATUS_BLOCK, *PIO_STATUS_BLOCK;

		typedef struct _SYSTEM_HANDLE_INFORMATION
		{
			ULONG       ProcessId;
			UCHAR       ObjectTypeNumber;
			UCHAR       Flags;
			USHORT      Handle;
			PVOID       Object;
			ACCESS_MASK GrantedAccess;
		}	SYSTEM_HANDLE_INFORMATION, *PSYSTEM_HANDLE_INFORMATION;

		//	NTSTATUS WINAPI ZwQuerySystemInformation(
		//	SYSTEM_INFORMATION_CLASS SystemInformationClass,
		//	PVOID SystemInformation,
		//	ULONG SystemInformationLength,
		//	PULONG ReturnLength
		//	);

		typedef NTSTATUS (WINAPI *PZwQuerySystemInformation)(SYSTEM_INFORMATION_CLASS, PVOID, ULONG, PULONG);

		//	NTSTATUS WINAPI  ZwQueryInformationFile(
		//	IN HANDLE  FileHandle,
		//	OUT PIO_STATUS_BLOCK  IoStatusBlock,
		//	OUT PVOID  FileInformation,
		//	IN ULONG  Length,
		//	IN FILE_INFORMATION_CLASS  FileInformationClass
		//	);

		typedef NTSTATUS (WINAPI *PZwQueryInformationFile)(HANDLE, PIO_STATUS_BLOCK, PVOID, ULONG, FILE_INFORMATION_CLASS);

		//	NTSTATUS WINAPI ZwNtQueryObject(
		//	HANDLE Handle,
		//	OBJECT_INFORMATION_CLASS ObjectInformationClass,
		//	PVOID ObjectInformation,
		//	ULONG ObjectInformationLength,
		//	PULONG ReturnLength
		//	);

		typedef NTSTATUS (WINAPI *PZwQueryObject)(HANDLE, OBJECT_INFORMATION_CLASS, PVOID, ULONG, PULONG);

		BOOL Init();

		vector<SYSTEM_HANDLE_INFORMATION> ListHandle();

		BOOL GetFileHandleType(UCHAR& uType);

		BOOL GetFileNameByHandle(HANDLE hFile, WCHAR Name[MAX_PATH]);

		BOOL GetFileName(HANDLE hFile, WCHAR Name[MAX_PATH]);








		// Ansi字符转换为Unicode
		int AnsiToUnicode(/*in*/ const char* szSrc, /*out*/ WCHAR* wcDst, /*in*/ DWORD dwDstLen)
		{
			return MultiByteToWideChar(CP_ACP, 0, szSrc, strlen(szSrc), wcDst, dwDstLen);
		}

		// Unicode字符转换为Ansi
		int UnicodeToAnsi(/*in*/ WCHAR* wcSrc, /*out*/ char* szDst, /*in*/ DWORD dwDstLen)
		{
			return WideCharToMultiByte(CP_ACP, 0, wcSrc, wcslen(wcSrc), szDst, dwDstLen, NULL, NULL);
		}

		// 提升进程权限
		BOOL SePrivilege(LPCTSTR PrivilegeName)
		{
			HANDLE hToken;

			if (!OpenProcessToken(GetCurrentProcess(), 
				TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &hToken)) 
				return FALSE;

			LUID luid;

			if (!LookupPrivilegeValue(NULL, PrivilegeName, &luid))
			{
				CloseHandle( hToken );

				return FALSE;
			}

			TOKEN_PRIVILEGES tkp;

			tkp.PrivilegeCount = 1;

			tkp.Privileges[0].Luid = luid;

			tkp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;

			if (!AdjustTokenPrivileges(hToken, FALSE, &tkp, sizeof tkp, NULL, NULL))
			{
				CloseHandle( hToken );

				return FALSE;
			}

			return TRUE;
		}

		// 文件拷贝
		// hInFile 输入文件句柄
		// szOutFile 输出文件的名称
		BOOL FileCopy(HANDLE hInFile, const char* szOutFile)
		{
			// 验证源句柄

			if(INVALID_HANDLE_VALUE == hInFile) return FALSE;

			// 取源文件大小

			DWORD dwHigh = 0;

			DWORD dwLow = GetFileSize(hInFile, &dwHigh);

			__int64 nFileSize = dwLow | ((__int64)dwHigh << 32);

			// 创建源文件的映射对像

			HANDLE hInMapping = ::CreateFileMapping(hInFile, NULL, PAGE_READONLY, 0, 0, NULL );

			if(NULL == hInMapping) return FALSE;

			// 创建目标文件

			HANDLE hOutFile = CreateFile(szOutFile, GENERIC_READ | GENERIC_WRITE, NULL, NULL, CREATE_ALWAYS, NULL, NULL);

			if(INVALID_HANDLE_VALUE == hOutFile) 
			{
				CloseHandle(hInMapping); // 关闭源映射对像

				return FALSE;
			}

			// 创建目标文件的映射对像

			HANDLE hOutMapping = ::CreateFileMapping(hOutFile, NULL, 
				PAGE_READWRITE, (DWORD)(nFileSize >> 32), (DWORD)nFileSize, NULL );

			if(NULL == hOutMapping) 
			{
				CloseHandle(hInMapping); // 关闭源映射对像

				CloseHandle(hOutFile);   // 关闭目的文件句柄

				return FALSE;
			}

			CloseHandle(hOutFile);

			// 获取系统粒度

			SYSTEM_INFO si;

			GetSystemInfo(&si);    

			DWORD dwSysGranularity = si.dwAllocationGranularity;

			//if(!addr.IsNull()) OnFileProcessing(0, addr);

			__int64 nFileOffset = 0;

			DWORD dwBytesInBlock = dwSysGranularity; // 默认块大小

			while(nFileOffset < nFileSize)
			{
				if(nFileSize - nFileOffset < dwSysGranularity)
					dwBytesInBlock =(DWORD) (nFileSize - nFileOffset);

				PBYTE pInFile = (PBYTE) MapViewOfFile(hInMapping, FILE_MAP_READ,
					(DWORD)(nFileOffset >> 32),        // 映射基址, 高字节
					(DWORD)(nFileOffset & 0xFFFFFFFF), // 映射基址, 低字节
					dwBytesInBlock);

				if(NULL == pInFile) 
				{
					CloseHandle(hInMapping); // 关闭源映射对像

					CloseHandle(hOutMapping); // 关闭目的映射对像

					CloseHandle(hOutFile);   // 关闭目的文件句柄

					return FALSE;
				}

				PBYTE pOutFile = (PBYTE) MapViewOfFile(hOutMapping, FILE_MAP_READ | FILE_MAP_WRITE,
					(DWORD)(nFileOffset >> 32),        // 映射基址, 高字节
					(DWORD)(nFileOffset & 0xFFFFFFFF), // 映射基址, 低字节
					dwBytesInBlock);

				if(NULL == pOutFile) 
				{
					CloseHandle(hInMapping); // 关闭源映射对像

					CloseHandle(hOutMapping); // 关闭目的映射对像

					CloseHandle(hOutFile);   // 关闭目的文件句柄

					return FALSE;
				}

				memcpy(pOutFile, pInFile, dwBytesInBlock);

				UnmapViewOfFile(pInFile);

				UnmapViewOfFile(pOutFile);

				//		if(!addr.IsNull())
				//		{
				//			if(((int)(nFileSize / 100)) > 0)
				//				OnFileProcessing((int)(nFileOffset / (nFileSize / 100)), addr);
				//		}

				nFileOffset += dwBytesInBlock;

			}

			CloseHandle(hInMapping); // 关闭源映射对像

			CloseHandle(hOutMapping); // 关闭目的映射对像

			CloseHandle(hOutFile);   // 关闭目的文件句柄

			// if(!addr.IsNull()) OnFileProcessing(100, addr);

			return TRUE;
		}








		PZwQuerySystemInformation ZwQuerySystemInformation = NULL;

		PZwQueryInformationFile ZwQueryInformationFile = NULL;

		PZwQueryObject ZwQueryObject = NULL;

		BOOL Init()
		{
			HMODULE hInstNtDll = GetModuleHandle("ntdll.dll");

			ZwQuerySystemInformation = 
				(PZwQuerySystemInformation)GetProcAddress(hInstNtDll, "ZwQuerySystemInformation");

			ZwQueryInformationFile = 
				(PZwQueryInformationFile)GetProcAddress(hInstNtDll, "ZwQueryInformationFile");

			ZwQueryObject = 
				(PZwQueryObject)GetProcAddress(hInstNtDll, "ZwQueryObject");

			return  ZwQuerySystemInformation == NULL || 
				ZwQueryInformationFile == NULL ||
				ZwQueryObject == NULL ? FALSE : TRUE;
		}

		vector<SYSTEM_HANDLE_INFORMATION> ListHandle()
		{
			vector<SYSTEM_HANDLE_INFORMATION> List;

			ULONG n = 0x1000;

			PULONG pBuf = new ULONG[n];

			while (ZwQuerySystemInformation(SystemHandleInformation, pBuf, n * sizeof(pBuf), 0)
				== STATUS_INFO_LENGTH_MISMATCH)
				delete[] pBuf, pBuf = new ULONG[n *= 2];

			PSYSTEM_HANDLE_INFORMATION pSystemHandleInformation = PSYSTEM_HANDLE_INFORMATION(pBuf + 1);

			for (ULONG i = 0; i < *pBuf; i++)
			{
				SYSTEM_HANDLE_INFORMATION System_Handle_Information = { 0 };

				memcpy(&System_Handle_Information, 
					(PSYSTEM_HANDLE_INFORMATION)(&(pSystemHandleInformation[i])), 
					sizeof(SYSTEM_HANDLE_INFORMATION));

				List.push_back(System_Handle_Information);
			}

			delete[] pBuf;

			return List;
		}

		BOOL GetFileHandleType(UCHAR& uType)
		{
			HANDLE hFile = CreateFile("NUL", GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE, NULL, OPEN_EXISTING, 0, 0);

			if (hFile == INVALID_HANDLE_VALUE) return FALSE;

			vector<SYSTEM_HANDLE_INFORMATION> list = ListHandle();

			ULONG pid = GetCurrentProcessId();

			for (ULONG i = 0; i < list.size(); i++)
			{
				if(((SYSTEM_HANDLE_INFORMATION)list[i]).ProcessId == pid && 
					((SYSTEM_HANDLE_INFORMATION)list[i]).Handle == (USHORT)hFile)
				{
					uType = ((SYSTEM_HANDLE_INFORMATION)list[i]).ObjectTypeNumber;

					break;
				}
			}

			CloseHandle(hFile);

			return TRUE;
		}

		BOOL GetFileNameByHandle(HANDLE hFile, WCHAR Name[MAX_PATH])
		{
			memset(Name, 0, sizeof(WCHAR) * MAX_PATH);

			WCHAR lpFullName[MAX_PATH + 4] = { 0 }; 

			NTSTATUS status = ZwQueryObject(hFile, ObjectNameInformation, lpFullName, MAX_PATH + 4, 0);

			if(!NT_SUCCESS(status)) return FALSE;

			// wprintf(L"%ws\n", lpFullName + 4);

			WCHAR lpDrive[MAX_PATH] = { 0 };

			if(0 == ::GetLogicalDriveStringsW(MAX_PATH, lpDrive)) return FALSE;

			WCHAR *p = lpDrive;

			while(*p)
			{
				int len = wcslen(p);

				p[len - 1] = L'\0';

				// wprintf(L"%ws\n", p);

				WCHAR lpDevice[MAX_PATH] = { 0 };

				if(0 == QueryDosDeviceW(p, lpDevice, MAX_PATH)) return FALSE;

				// wprintf(L"%ws\n", lpDevice);

				if (!wcsnicmp(lpFullName + 4, lpDevice, wcslen(lpDevice))) 
				{
					wcsncpy(Name, p, wcslen(p));

					wcsncpy(Name + wcslen(p), L"\\", 1);

					wcsncpy(Name + wcslen(p) + 1, 
						lpFullName +  wcslen(lpDevice) + 1 + 4,
						wcslen(lpFullName) - (wcslen(lpDevice) + 1 + 4) > MAX_PATH - (wcslen(p) + 1) ? MAX_PATH - (wcslen(p) + 1) : 
						wcslen(lpFullName) - (wcslen(lpDevice) + 1 + 4)
						);

					// wprintf(L"%ws\r\n", Name);

					return TRUE;
				}

				p += 3; while(*(p++));
			}

			return FALSE;
		}

		// ------------------------------------------------------------------------------------------------------

		typedef struct _NAME_INFO
		{
			HANDLE hFile;         /* in  */
			WCHAR Name[MAX_PATH]; /* out */
			BOOL bReturn;
		}	NAME_INFO, *PNAME_INFO;

		DWORD WINAPI ThreadProc(LPVOID lpParameter)
		{
			PNAME_INFO pName_Info = (PNAME_INFO)lpParameter;

			if(GetFileNameByHandle(pName_Info->hFile, pName_Info->Name)) 
			{
				pName_Info->bReturn = TRUE;

				return TRUE;
			}

			return FALSE;
		}

		// 在对打开的句柄调用ZwQueryInformationFile时,调用线程会等待PIPE中的消息
		// 如果PIPE中没有消息时,线程可能会永久挂起,所以使用一个等待超时来打开句柄
		BOOL GetFileName(HANDLE hFile, WCHAR Name[MAX_PATH])
		{
			NAME_INFO Name_Info = { 0 };

			Name_Info.hFile = hFile;

			HANDLE hThread = CreateThread(NULL, 0, ThreadProc, &Name_Info, 0, NULL);

			if (WaitForSingleObject(hThread, WAIT_TIMEOUT) == 100) TerminateThread(hThread, 0);

			CloseHandle(hThread);

			if(Name_Info.bReturn)
			{
				wcsncpy(Name, Name_Info.Name, wcslen(Name_Info.Name));

				return TRUE;
			}

			return FALSE;
		}



		BOOL FileCopy(const char* szInFile, const char* szOutFile)
		{
			if(!Init()) return FALSE;

			if(!SePrivilege(SE_DEBUG_NAME)) return FALSE;

			UCHAR uFileHandleType;

			if(!GetFileHandleType(uFileHandleType)) return FALSE;

			vector<SYSTEM_HANDLE_INFORMATION> list = ListHandle();

			for (int i = 0; i < list.size(); i++)
			{
				SYSTEM_HANDLE_INFORMATION System_Handle_Information = list[i];
				if(System_Handle_Information.ObjectTypeNumber != uFileHandleType) continue;
				HANDLE hProcess = OpenProcess(PROCESS_DUP_HANDLE, FALSE, System_Handle_Information.ProcessId);
				HANDLE hFile;
				if(!DuplicateHandle(hProcess, (HANDLE)(System_Handle_Information.Handle),
					GetCurrentProcess(), &hFile, 0, FALSE, DUPLICATE_SAME_ACCESS)) continue;

				WCHAR Name[MAX_PATH] = { 0 };
				if(FALSE == GetFileName(hFile, Name)) 
				{
					CloseHandle(hFile);
					continue;
				}

				char NameBuf[MAX_PATH] = { 0 };
				UnicodeToAnsi(Name, NameBuf, MAX_PATH);
				memcpy(NameBuf, CharUpper(NameBuf), MAX_PATH);

				printf("%s\r\n", NameBuf);
				if(stricmp(NameBuf, szInFile) == 0)
				{
					//			DWORD dwFileSizeH = 0;
					//			__int64 qwFileSize = ::GetFileSize(hFile, &dwFileSizeH);
					//			qwFileSize |= (((__int64)dwFileSizeH) << 32);
					//
					//
					//			UnlockFile(hFile,
					//			(DWORD)qwFileSize,
					//			(DWORD)(qwFileSize >> 32),
					//			(DWORD)qwFileSize,
					//			(DWORD)(qwFileSize >> 32)
					//			);

					FileCopy(hFile, szOutFile);
				}

				//		wprintf(L"%08X \t %08X \t %ws\n", 
				//			System_Handle_Information.ProcessId, 
				//			hFile,
				//			Name);
			}
		}







		// System CopyFile() copies source file attributes (like FILE_ATTRIBUTE_ENCRYPTED)
		// so we need to use our own copy function
		BOOL TCCopyFile (char *sourceFileName, char *destinationFile)
		{
			__int8 *buffer;
			HANDLE src, dst;
			FILETIME fileTime;
			DWORD bytesRead, bytesWritten;
			BOOL res;

			src = CreateFile (sourceFileName,
				GENERIC_READ,
				FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, NULL);

			if (src == INVALID_HANDLE_VALUE)
				return FALSE;

			dst = CreateFile (destinationFile,
				GENERIC_WRITE,
				0, NULL, CREATE_ALWAYS, 0, NULL);

			if (dst == INVALID_HANDLE_VALUE)
			{
				CloseHandle (src);
				return FALSE;
			}

			buffer = (char *) malloc (64 * 1024);
			if (!buffer)
			{
				CloseHandle (src);
				CloseHandle (dst);
				return FALSE;
			}

			while (res = ReadFile (src, buffer, 64 * 1024, &bytesRead, NULL))
			{
				if (bytesRead == 0)
				{
					res = 1;
					break;
				}

				if (!WriteFile (dst, buffer, bytesRead, &bytesWritten, NULL)
					|| bytesRead != bytesWritten)
				{
					res = 0;
					break;
				}
			}

			GetFileTime (src, NULL, NULL, &fileTime);
			SetFileTime (dst, NULL, NULL, &fileTime);

			CloseHandle (src);
			CloseHandle (dst);

			free (buffer);
			return res != 0;
		}






	}




}

