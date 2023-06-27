#if !defined(_DiskInfo_H__FF310990_FA82_421A_94CD_1F696F3AB948__INCLUDED_)
#define _DiskInfo_H__FF310990_FA82_421A_94CD_1F696F3AB948__INCLUDED_


namespace sdk
{
	class AFX_EXT_CLASS CDiskInfo  
	{
	public:
		CDiskInfo();

		int GetDiskInfo(int driver=0);
		char szModelNumber[64];
		char szSerialNumber[64];

	};

	class AFX_EXT_CLASS CDiskUtil
	{
	public:
		static BOOL IsDiskReadError (DWORD error);
		static BOOL IsDiskWriteError (DWORD error);
		static BOOL IsDiskError (DWORD error);
		static BOOL IsDiskError ();
	
		static void OpenVolumeExplorerWindow (int driveNo);	//在资源管理器中打开



		static int GetFirstAvailableDrive ();		
		static int GetLastAvailableDrive ();
		static BOOL IsDriveAvailable (int driveNo);
	

		static char GetSystemDriveLetter (void);	//获取系统所在的盘符

	};


	
		
	
}

#endif
