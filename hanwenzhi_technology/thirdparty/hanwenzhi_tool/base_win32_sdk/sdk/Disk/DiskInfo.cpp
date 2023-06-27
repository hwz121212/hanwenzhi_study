#include "stdafx.h"
#include "DiskInfo.h"
#include "winioctl.h"

namespace sdk
{


	const WORD IDE_ATAPI_IDENTIFY = 0xA1;   // ��ȡATAPI�豸������
	const WORD IDE_ATA_IDENTIFY   = 0xEC;   // ��ȡATA�豸������

	CDiskInfo::CDiskInfo()
	{

	}


	BOOL __fastcall DoIdentify( HANDLE hPhysicalDriveIOCTL, 
		PSENDCMDINPARAMS pSCIP,
		PSENDCMDOUTPARAMS pSCOP, 
		BYTE btIDCmd, 
		BYTE btDriveNum,
		PDWORD pdwBytesReturned)
	{
		pSCIP->cBufferSize = IDENTIFY_BUFFER_SIZE;
		pSCIP->irDriveRegs.bFeaturesReg = 0;
		pSCIP->irDriveRegs.bSectorCountReg  = 1;
		pSCIP->irDriveRegs.bSectorNumberReg = 1;
		pSCIP->irDriveRegs.bCylLowReg  = 0;
		pSCIP->irDriveRegs.bCylHighReg = 0;

		pSCIP->irDriveRegs.bDriveHeadReg = (btDriveNum & 1) ? 0xB0 : 0xA0;
		pSCIP->irDriveRegs.bCommandReg = btIDCmd;
		pSCIP->bDriveNumber = btDriveNum;
		pSCIP->cBufferSize = IDENTIFY_BUFFER_SIZE;

		return DeviceIoControl(	hPhysicalDriveIOCTL, 
			SMART_RCV_DRIVE_DATA,
			(LPVOID)pSCIP,
			sizeof(SENDCMDINPARAMS) - 1,
			(LPVOID)pSCOP,
			sizeof(SENDCMDOUTPARAMS) + IDENTIFY_BUFFER_SIZE - 1,
			pdwBytesReturned, NULL);
	}

	char *__fastcall ConvertToString(DWORD dwDiskData[256], int nFirstIndex, int nLastIndex)
	{
		static char szResBuf[1024];
		char ss[256];
		int nIndex = 0;
		int nPosition = 0;

		for(nIndex = nFirstIndex; nIndex <= nLastIndex; nIndex++)
		{
			ss[nPosition] = (char)(dwDiskData[nIndex] / 256);
			nPosition++;

			// Get low BYTE for 2nd character
			ss[nPosition] = (char)(dwDiskData[nIndex] % 256);
			nPosition++;
		}

		// End the string
		ss[nPosition] = '\0';

		int i, index=0;
		for(i=0; i<nPosition; i++)
		{
			if(ss[i]==0 || ss[i]==32)	continue;
			szResBuf[index]=ss[i];
			index++;
		}
		szResBuf[index]=0;

		return szResBuf;
	}

	int CDiskInfo::GetDiskInfo(int driver)
	{
		CString sFilePath;
		sFilePath.Format("\\\\.\\PHYSICALDRIVE%d", driver);

		HANDLE hFile = INVALID_HANDLE_VALUE;
		hFile = ::CreateFile(sFilePath, 
			GENERIC_READ | GENERIC_WRITE, 
			FILE_SHARE_READ | FILE_SHARE_WRITE, 
			NULL, OPEN_EXISTING,
			0, NULL);
		if (hFile == INVALID_HANDLE_VALUE)	return -1;

		DWORD dwBytesReturned;
		GETVERSIONINPARAMS gvopVersionParams;
		DeviceIoControl(hFile, 
			SMART_GET_VERSION,
			NULL, 
			0, 
			&gvopVersionParams,
			sizeof(gvopVersionParams),
			&dwBytesReturned, NULL);

		if(gvopVersionParams.bIDEDeviceMap <= 0)	return -2;

		// IDE or ATAPI IDENTIFY cmd
		int btIDCmd = 0;
		SENDCMDINPARAMS InParams;
		int nDrive =0;
		btIDCmd = (gvopVersionParams.bIDEDeviceMap >> nDrive & 0x10) ? IDE_ATAPI_IDENTIFY : IDE_ATA_IDENTIFY;


		// �������
		BYTE btIDOutCmd[sizeof(SENDCMDOUTPARAMS) + IDENTIFY_BUFFER_SIZE - 1];

		if(DoIdentify(hFile,
			&InParams, 
			(PSENDCMDOUTPARAMS)btIDOutCmd,
			(BYTE)btIDCmd, 
			(BYTE)nDrive, &dwBytesReturned) == FALSE)	return -3;
		::CloseHandle(hFile);

		DWORD dwDiskData[256];
		USHORT *pIDSector; // ��Ӧ�ṹIDSECTOR����ͷ�ļ�

		pIDSector = (USHORT*)((SENDCMDOUTPARAMS*)btIDOutCmd)->bBuffer;
		for(int i=0; i < 256; i++)	dwDiskData[i] = pIDSector[i];

		// ȡϵ�к�
		ZeroMemory(szSerialNumber, sizeof(szSerialNumber));
		strcpy_s(szSerialNumber, ConvertToString(dwDiskData, 10, 19));

		// ȡģ�ͺ�
		ZeroMemory(szModelNumber, sizeof(szModelNumber));
		strcpy_s(szModelNumber, ConvertToString(dwDiskData, 27, 46));

		return 0;
	}












	BOOL CDiskUtil::IsDiskReadError (DWORD error)
	{
		return (error == ERROR_CRC
			|| error == ERROR_IO_DEVICE
			|| error == ERROR_BAD_CLUSTERS
			|| error == ERROR_SECTOR_NOT_FOUND
			|| error == ERROR_READ_FAULT
			|| error == ERROR_INVALID_FUNCTION // I/O error may be reported as ERROR_INVALID_FUNCTION by buggy chipset drivers
			|| error == ERROR_SEM_TIMEOUT);	// I/O operation timeout may be reported as ERROR_SEM_TIMEOUT
	}


	BOOL CDiskUtil::IsDiskWriteError (DWORD error)
	{
		return (error == ERROR_IO_DEVICE
			|| error == ERROR_BAD_CLUSTERS
			|| error == ERROR_SECTOR_NOT_FOUND
			|| error == ERROR_WRITE_FAULT
			|| error == ERROR_INVALID_FUNCTION // I/O error may be reported as ERROR_INVALID_FUNCTION by buggy chipset drivers
			|| error == ERROR_SEM_TIMEOUT);	// I/O operation timeout may be reported as ERROR_SEM_TIMEOUT
	}


	BOOL CDiskUtil::IsDiskError (DWORD error)
	{
		return IsDiskReadError (error) || IsDiskWriteError (error);
	}

	BOOL CDiskUtil::IsDiskError ()
	{
		DWORD dwError = GetLastError ();
		return IsDiskError(dwError);
	}



	void CDiskUtil::OpenVolumeExplorerWindow (int driveNo)
	{
		char dosName[5];
		SHFILEINFO fInfo;

		sprintf (dosName, "%c:\\", (char) driveNo + 'A');

		// Force explorer to discover the drive
		SHGetFileInfo (dosName, 0, &fInfo, sizeof (fInfo), 0);

		ShellExecute (NULL, "open", dosName, NULL, NULL, SW_SHOWNORMAL);
	}




	int CDiskUtil::GetFirstAvailableDrive ()
	{
		DWORD dwUsedDrives = GetLogicalDrives();
		int i;

		for (i = 3; i < 26; i++)
		{
			if (!(dwUsedDrives & 1 << i))
				return i;
		}

		return -1;
	}


	int CDiskUtil::GetLastAvailableDrive ()
	{
		DWORD dwUsedDrives = GetLogicalDrives();
		int i;

		for (i = 25; i > 2; i--)
		{
			if (!(dwUsedDrives & 1 << i))
				return i;
		}

		return -1;
	}


	BOOL CDiskUtil::IsDriveAvailable (int driveNo)
	{
		return (GetLogicalDrives() & (1 << driveNo)) == 0;
	}

	// Returns 0 if an error occurs or the drive letter (as an upper-case char) of the system partition (e.g. 'C');
	char CDiskUtil::GetSystemDriveLetter (void)
	{
		char systemDir [MAX_PATH];

		if (GetSystemDirectory (systemDir, sizeof (systemDir)))
			return (char) (toupper (systemDir [0]));
		else
			return 0;
	}
	
}
