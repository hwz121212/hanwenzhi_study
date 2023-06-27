
#ifndef _H_COMPUTER_INFOS
#define _H_COMPUTER_INFOS


#include <Wbemidl.h>
#include <setupapi.h>

#include <Windows.h>
#include <string>
#include <vector>
#include <map>
using namespace std;



namespace sdk
{
	namespace assert_info
	{
		
enum _ASSET_INDEX
{
	ASSET_CPU,
	ASSET_BIOS,
	ASSET_BASEBOARD,
	ASSET_SYSTEM,
	ASSET_MEMORY,
	ASSET_DISK,
	ASSET_LOGICDISK,
	ASSET_CDROM,
	ASSET_NET,
	ASSET_VIDEO,
	ASSET_SOUND,
	ASSET_KEYBOARD,
	ASSET_MOUSE,
	ASSET_MONITOR,
	ASSET_PRINTER,
	ASSET_BATTERY,
	ASSET_MODEM,
	ASSET_BLUE_TOOTH,
	ASSET_CAMERA,
	ASSET_SOFTWARE,
	ASSET_1394,
	ASSET_USB,
	ASSET_PORT,
	ASSET_FDC,             //���̿�����,
	ASSET_FLOPPYDISK,      //����������,
	ASSET_INFRARED,        //�������豸,
	ASSET_PCMCIA,          //PCMCIA ��,
	ASSET_MULTIFUNCTION,   //�๦�ܿ�,
	ASSET_MULTIPORTSERIAL, //�മ�ڿ�,
	ASSET_PNPPRINTERS,     //IEEE 1394 �� SCSI ��ӡ��,
	ASSET_SCSIADAPTER,     //SCSI �� RAID ������,
	ASSET_TAPEDRIVER,      //�Ŵ�������,
	ASSET_DOT4,            //IEEE 1284.4 �豸,
	ASSET_DOT4PRINT,       //IEEE 1284.4 ���ݴ�ӡ��,
	ASSET_WCEUSBS,         //Windows CE USB �豸,
	ASSET_HDC,             //IDE ATA/ATAPI ������
	ASSET_MTD,             //Memory technology driver
	ASSET_NETCLIENT,       //����ͻ�
	ASSET_NETSERVICE,      //�������
	ASSET_NETTRANS,        //����Э��
	ASSET_SMARTCARDREADER, //SMART CARD READERS
	ASSET_VOLUMESNAPSHOT,  //�洢��Ӱ����
	ASSET_1394DEBUG,       //1394 DEBUGGER DEVICE"
	ASSET_VOLUME,          //�洢��
	ASSET_HIDCLASS,        //����ѧ�����豸"        
	ASSET_61883,           //61883 �豸��"        
	ASSET_VMKBD,           //VMKBD"
	ASSET_SDHOST,          //"SECURE DIGITAL HOST CONTROLLERS"
	ASSET_AVC,             //AVC �豸��"        
	ASSET_ENUM1394,        //IEEE 1394 IP ���������"        
	ASSET_MEDIUMCHANGER,   //���ʱ任��"        
	ASSET_NTAPM,           //NT APM/LEGACY ֧��"        
	ASSET_SBP2,            //SBP2 IEEE 1394 �豸"        
	ASSET_WPD,             //WINDOWS ��Я�豸"
	ASSET_UNKNOWN = 10000, //δ֪�豸
};


//CPU��Ϣ
typedef struct _CPU_INFO 
{
	_CPU_INFO()
	{
		strVersion = ""; 
		strType = ""; 
		strManufacturer = ""; 
		wMaxSpeed = 0;   
		wCurrentSpeed = 0;  
		wExternalClock = 0; 
		wL1CacheSize = 0;  
		wL2CacheSize = 0; 
		strSocket = ""; 
		dVoltage = 0.0;           
	};

	string strVersion;         //���
	string strType;            //����
	string strManufacturer;    //������
	string strSocket;          //����\\���
	WORD wMaxSpeed;             //����֧�ֵ����CPU��Ƶ
	WORD wCurrentSpeed;         //��Ƶ
	WORD wExternalClock;        //��Ƶ
	WORD wL1CacheSize;          //L1����
	WORD wL2CacheSize;          //L2����
	double dVoltage;            //��ѹ
}CPU_INFO_ST;

//BIOS��Ϣ
typedef struct _BIOS_INFO
{
	_BIOS_INFO()
	{
		strVendor = "";  
		strVersion = ""; 
		strReleaseData = ""; 
		iBIOSROMSize = 0;
		strSMBIOS = ""; 
	};

	string strVendor;          //������
	string strVersion;         //�汾
	string strReleaseData;     //����
	string strSMBIOS;          //SMBIOS/DMI
	int iBIOSROMSize;           //��С
}BIOS_INFO_ST;

//������Ϣ
typedef struct _BASEBOARD_INFO 
{
	_BASEBOARD_INFO()
	{
		strManufacturer = ""; 
		strProducName = ""; 
		strType = ""; 
		strVersion = ""; 
		strSerialNumber = ""; 
	};

	string strManufacturer;    //������
	string strProducName;      //��Ʒ
	string strType;            //����
	string strVersion;         //�汾
	string strSerialNumber;    //���к�
}BASEBOARD_INFO_ST;


//ϵͳ��Ϣ
typedef struct _SYS_INFO 
{
	_SYS_INFO()
	{
		strManufacturer = "";
		strProductName = ""; 
		strVersion = ""; 
		strSerialNumber = ""; 
		strUUID = ""; 
		strWakeUpType = "";
	}

	string strManufacturer;    //������
	string strProductName;     //��Ʒ
	string strVersion;         //�汾
	string strSerialNumber;    //���к�
	string strUUID;            //ȫ��Ψһʶ��ID
	string strWakeUpType;      //���ѷ�ʽ
}SYSTEM_INFO_ST;



//ϵͳժҪ��Ϣ
typedef struct _SYS_SUM_INFO  
{
	_SYS_SUM_INFO()
	{
		strCaption = "";
		strCSName = ""; 
		strManufacturer = ""; 
		strInstallData = "";
		strLastBootUpTime = "";
		strOrganization = "";
		strSerialNumber = ""; 
		strSystemDirectory = "";
		strVersion = ""; 
		strWindowsDirectory = "";
		strBootDevice = ""; 
		strSysName = ""; 
		strSysManufacturer = ""; 
		strSysModel = ""; 
		strSysType = ""; 
		strCPU = ""; 
		strBios = ""; 
		strSMBios = ""; 
		strIEVer = "";
		string strOfficeVersion = "";
		iTotalVirtualMemorySize = 0; 
		iTotalVisibleMemorySize = 0; 
		iSizeStoredInPagingFiles = 0; 
		iDiskSize = 0;
		iCPUSpeed = 0;
	}

	string strCaption;         //����ϵͳ
	string strCSName;          //������
	string strManufacturer;    //������
	string strInstallData;     //��װʱ��
	string strLastBootUpTime;  //�ϴ�����ʱ��
	string strOrganization;    //��֯
	string strSerialNumber;    //���к�
	string strSystemDirectory; //ϵͳĿ¼
	string strVersion;         //�汾
	string strWindowsDirectory;//WindowsĿ¼
	string strBootDevice;      //�����豸
	string strSysName;         //ϵͳ����
	string strSysManufacturer; //ϵͳ������
	string strSysModel;        //ϵͳģʽ
	string strSysType;         // ϵͳ����
	string strCPU;             // CPU
	string strBios;            // Bios
	string strSMBios;          // SMBIOS
	string strIEVer;           // IE�汾
	string strOfficeVersion;   // office�汾
	int iTotalVirtualMemorySize;     //�����ڴ��ܼ�
	int iTotalVisibleMemorySize;     //�����ڴ��ܼ�
	int iSizeStoredInPagingFiles;    //ҳ���ļ���С
	int iDiskSize;                   //Ӳ�̴�С
	int iCPUSpeed;                   //CPU��Ƶ
}SYS_SUM_INFO_ST;


//�ڴ���Ϣ
typedef struct _MEMORY_INFO  
{
	_MEMORY_INFO()
	{
		iTotalVirtualMemorySize = 0; 
		iTotalVisibleMemorySize = 0; 
		iFreePhysicalMemory = 0;   
		iFreeSpaceInPagingFiles = 0; 
		iFreeVirtualMemory = 0;  
		iSlotNumber = 0;   
		strMemorySlotInfo = "";
		strMemoryFac = "";
	}

	int iTotalVirtualMemorySize;     //�����ڴ��ܼ�
	int iTotalVisibleMemorySize;     //�����ڴ��ܼ�
	int iFreePhysicalMemory;         //�����ڴ�ʣ��
	int iFreeSpaceInPagingFiles;     //ҳ���ļ�ʣ��
	int iFreeVirtualMemory;          //�����ڴ�ʣ��
	string strMemorySlotInfo;          //�ڴ�����Ϣ
	string strMemoryFac;               //�ڴ����쳧��
	int iSlotNumber;                    //�ڴ�����Ŀ
}MEMORY_INFO_ST;


//Ӳ����Ϣ
typedef struct _DISK_INFO  
{
	_DISK_INFO()
	{
		strPNPDeviceID = "";
		strDeviceID = "";
		strCaption = ""; 
		strManufacturer = ""; 
		iTotalCylinders = 0; 
		iSize = 0;  
		iTotalSectors = 0; 
		iTotalTracks = 0;  
		iBytesPerSector = 0;  
		iIndex = 0;   
		iSectorsPerTrack = 0;  
		iTotalHeads = 0;  
		iTrackPerCylinder = 0; 

		strSerialNumber = "";
	}

	string strPNPDeviceID;
	string strCaption;      //����
	string strManufacturer; //������
	string strDeviceID;
	int iBytesPerSector;     //ÿ�����ֽ���
	int iIndex;              //���к�
	int iSectorsPerTrack;    //ÿ�ص�������
	int iTotalHeads;         //��ͷ�ܼ�
	int iTrackPerCylinder;   //ÿ����Ĵ���
	int iSize;               //��С
	int iTotalCylinders;     //�����ܼ�
	int iTotalSectors;       //�����ܼ�
	int iTotalTracks;        //���ܼ�

	string strSerialNumber; // �������к�
}DISK_INFO_ST;



//�߼�������Ϣ
typedef struct _LOGICALDISK_INFO  
{
	_LOGICALDISK_INFO()
	{
		strCaption = "";       
		strDescription = "";    
		strFileSystem = "";    
		strVolumeName = "";     
		strVolumeSerialNumber = ""; 
		iFreeSpace = 0;    
		iSize = 0;
	}

	string strVolumeSerialNumber; //���к�
	string strCaption;            //�߼�����
	string strDescription;        //����
	string strFileSystem;         //�ļ�ϵͳ
	string strVolumeName;         //���
	int iFreeSpace;             //���ÿռ�
	int iSize;                  //��С
}LOGICALDISK_INFO_ST;

//������Ϣ
typedef struct _CDROM_INFO  
{
	_CDROM_INFO()
	{
		strCaption = "";  
		strDrive = "";  
		strManufacturer = ""; 
		strMediaType = ""; 
		strPNPDeviceID = ""; 
	}

	string strCaption;         //����
	string strDrive;           //���
	string strManufacturer;    //������
	string strMediaType;       //����
	string strPNPDeviceID;     //�ų������豸
}CDROM_INFO_ST;



//������Ϣ
typedef struct _NETADAPTER_INFO  
{
	_NETADAPTER_INFO()
	{
		strAdapterType = "";  
		strName = "";     
		strMACAddress = ""; 
		strManufacturer = ""; 
		strNetConnectionID = ""; 
		strPNPDeviceID = "";  
		iSpeed = 0;
	}

	string strAdapterType;     //Э��
	string strName;            //����
	string strMACAddress;      //MAC
	string strManufacturer;    //������
	string strNetConnectionID; //������������
	string strPNPDeviceID;     //�ų������豸
	int iSpeed;
}NETADAPTER_INFO_ST;



//�Կ���Ϣ
typedef struct _VIDEO_INFO  
{
	_VIDEO_INFO()
	{
		strCaption = "";    
		strAdapterDACType = "";  
		strDriverVersion = "";  
		strVideoModeDescription = "";
		strManufacturer = "";  
		iAdapterRAM = 0;    
		iCurrentRefreshRate = 0;  
		iCurrentBitsPerPixel = 0;  
	}

	string strCaption;             //����
	string strAdapterDACType;      //DAC����
	string strDriverVersion;       //�����汾
	string strVideoModeDescription;//�Կ�ģʽ����
	string strPNPDeviceID;
	string strManufacturer;        //������
	int iAdapterRAM;                //�Դ�
	int iCurrentRefreshRate;        //��ǰˢ����
	int iCurrentBitsPerPixel;       //�ж��Ƿ�Ϊ���õ���ʾ�豸
}VIDEO_INFO_ST;


//������Ϣ
typedef struct _SOUND_INFO  
{
	_SOUND_INFO()
	{
		strCaption = "";     
		strManufacturer = "";  
		strDeviceID = "";    
	}

	string strCaption;         //����
	string strManufacturer;    //������
	string strDeviceID;        //�豸ID
}SOUND_INFO_ST;

//������Ϣ
typedef struct _KEYBOARD_INFO  
{
	_KEYBOARD_INFO()
	{
		strDeviceID = "";
		strDescription = ""; 
		strManufacturer = "��׼����";
		iNumberOfFunctionKeys = 0;
	}

	string strDeviceID;
	string strDescription;     //����
	string strManufacturer;    //��������
	int iNumberOfFunctionKeys;  //���ܼ���Ŀ
}KEYBOARD_INFO_ST;


//�����Ϣ
typedef struct _MOUSE_INFO  
{
	_MOUSE_INFO()
	{
		strDeviceID = "";
		strCaption = "";    
		strManufacturer = "";  
		cNumberOfButtons = 0;   
	}

	string strDeviceID;
	string strCaption;         //����
	string strManufacturer;    //������
	int cNumberOfButtons;      //���ܼ���
}MOUSE_INFO_ST;



//��ʾ����Ϣ
typedef struct _MONITOR_INFO  
{
	_MONITOR_INFO()
	{
		strCaption = "";     
		strDeviceID = "";       
		strMonitorManufacturer = "";  
		strMonitorType = "";    
		iPixelsPerXLogicalInch = 0;  
		iPixelsPerYLogicalInch = 0; 
		iScreenHeight = 0;       
		iScreenWidth = 0;      
	}

	string strCaption;              //����
	string strDeviceID;             //��ƷID
	string strMonitorManufacturer;  //��������
	string strMonitorType;          //��ʾ������
	int iPixelsPerXLogicalInch;      //X��ÿӢ������
	int iPixelsPerYLogicalInch;      //Y��ÿӢ������
	int iScreenHeight;               //��Ļ�߶�
	int iScreenWidth;                //��Ļ���
}MONITOR_INFO_ST;

//��ӡ����Ϣ
typedef struct _PRINTER_INFO  
{
	_PRINTER_INFO()
	{
		strDeviceID = "";
		strCaption = ""; 
	}

	string strDeviceID;
	string strCaption;        //�豸����
}PRINTER_INFO_ST;

//�����Ϣ
typedef struct _BATTERY_INFO  
{
	_BATTERY_INFO()
	{
		strCaption = "";    
		strName = "";        
		strDeviceID = "";      
		iEstimatedChargeRemaining = 0;  
		iEstimatedRunTime = 0;    
		dDesignVoltage = 0.0; 
	}

	string strCaption;             //�ͺ�
	string strName;                //�豸����
	string strDeviceID;            //Ψһ��ʶ
	int iEstimatedChargeRemaining;  //ʣ��ŵ�ٷֱ�
	int iEstimatedRunTime;          //ʣ��ʱ��
	double dDesignVoltage;          //��ѹ
}BATTERY_INFO_ST;


// ���ƽ����
typedef struct _MODEM_INFO
{
	_MODEM_INFO()
	{
		strCaption = "";   
		strDeviceID = "";    
		strProviderName = "";    
	}

	string strCaption;             //����
	string strDeviceID;            //�豸ID
	string strProviderName;        //������
}MODEM_INFO_ST;

// �����豸
typedef struct _BLUE_TOOTH
{
	_BLUE_TOOTH()
	{
		strDeviceID = "";
		strCaption = "";
		strManufacturer = "";
	}

	string strDeviceID;
	string strCaption;
	string strManufacturer;
}BLUE_TOOTH_ST;

// ����ͷ
typedef struct _CAMERA_INFO
{
	_CAMERA_INFO()
	{
		strDeviceID = "";
		strCaption = "";
		strManufacturer = "";
	}

	string strDeviceID;
	string strCaption;
	string strManufacturer;
}CAMERA_INFO_ST;


//�����Ϣ
typedef struct _SOFTWARE_INFO 
{
	_SOFTWARE_INFO()
	{
		strDisplayName = "";    
		strDisplayVersion = "";  
		strPublisher = "";      
		strInstallDate = "";   
		strInstallLocation = ""; 
		strURLInfoAbout = ""; 
		strUninstallString = ""; 
		strProductID = "";
	}

	string strDisplayName;     //�������
	string strDisplayVersion;  //�汾
	string strPublisher;       //���쳧��
	string strInstallDate;     //��װʱ��
	string strInstallLocation; //��װλ��
	string strURLInfoAbout;    //��ַ
	string strUninstallString; //ж��
	string strProductID;      
}SOFTWARE_INFO_ST;

//1394��Ϣ
typedef struct _1394_INFO 
{
	_1394_INFO()
	{
		strCaption = "";    
		strDeviceID = "";  
		strManufacturer = "";
	}

	string strCaption;         //1394����
	string strDeviceID;        //�豸����
	string strManufacturer;    //���쳧��
}ASSET_1394_INFO_ST;

//USB��Ϣ
typedef struct _USB_INFO 
{
	_USB_INFO()
	{
		strCaption = "";    
		strDeviceID = "";  
		strManufacturer = "";
	}

	string strCaption;         //USB����
	string strDeviceID;        //�豸����
	string strManufacturer;    //���쳧��
}USB_INFO_ST;

// Port
typedef struct _PORT_INFO
{
	_PORT_INFO()
	{
		strDeviceID = "";
		strCaption = "";
		strManufacturer = "";
	}

	string strDeviceID;
	string strCaption;
	string strManufacturer;
}PORT_INFO_ST;

//�������豸,
typedef struct _OTHER_INFO
{
	_OTHER_INFO()
	{
		iType = 0;
		strDeviceID = "";
		strCaption = "";
		strManufacturer = "";
	}

	string strDeviceID;
	string strCaption;
	string strManufacturer;
	int iType; 
}OTHER_INFO_ST;




typedef vector<DISK_INFO_ST>  DISK_INFO_VECTOR;
typedef vector<LOGICALDISK_INFO_ST> LOGICALDISK_INFO_VECTOR;
typedef vector<CDROM_INFO_ST>  CDROM_INFO_VECTOR;
typedef vector<NETADAPTER_INFO_ST> NETADAPTER_INFO_VECTOR;
typedef vector<VIDEO_INFO_ST> VIDEO_INFO_VECTOR;
typedef vector<SOUND_INFO_ST> SOUND_INFO_VECTOR;
typedef vector<MONITOR_INFO_ST> MONITOR_INFO_VECTOR;
typedef vector<PRINTER_INFO_ST> PRINTER_INFO_VECTOR;
typedef vector<SOFTWARE_INFO_ST> SOFTWARE_INFO_VECTOR;
typedef vector<MODEM_INFO_ST> MODEM_INFO_VECTOR;
typedef vector<KEYBOARD_INFO_ST> KEYBOARD_INFO_VECTOR;
typedef vector<MOUSE_INFO_ST> MOUSE_INFO_VECTOR;
typedef vector<ASSET_1394_INFO_ST> ASSET_1394_INFO_VECTOR;
typedef vector<USB_INFO_ST> USB_INFO_VECTOR;
typedef vector<PORT_INFO_ST> PORT_INFO_VECTOR;
typedef vector<BLUE_TOOTH_ST> BLUE_TOOTH_VECTOR;
typedef vector<OTHER_INFO_ST> OTHER_INFO_VECTOR;

typedef vector<string>              ASSET_INFO_VEC;
typedef map<string,ASSET_INFO_VEC>  ASSET_INFO_MAP;



//SMBios Structure
typedef struct _SM_STRUCT_TABLE_ENTRY
{
	BYTE bAnchorStr[4];
	BYTE bEntryChksum;
	BYTE bEntryLen;
	BYTE bSMMajorVer;
	BYTE bSMMinVer;
	WORD wMaxStructSize;
	BYTE bEntryPointRev;
	BYTE bFormattedArea[5];
	BYTE bIntermediateAnchorStr[5];
	BYTE bIntermediateChksum;
	WORD wStructTableLen;
	DWORD dStructTableAddress;
	WORD wNumOfSMStruct;
	BYTE bSMBCDRev;
} SM_STRUCT_TABLE_ENTRY;


struct SMBiosHeader
{
	BYTE bySection;
	BYTE byLength;    
	WORD wHandle;
};

struct SMBios_TypeBase
{
	SMBiosHeader stHeader;
};

struct SMBios_TYPE0 : public SMBios_TypeBase
{
	BYTE byVendor;
	BYTE byBiosVersion;
	WORD wBIOSStartingSegment;
	BYTE byBIOSReleaseDate;
	BYTE byBIOSROMSize;
	BYTE qwBIOSCharacteristics[8];
	BYTE byExtensionByte1;
	BYTE byExtensionByte2;
	BYTE bySystemBIOSMajorRelease;
	BYTE bySystemBIOSMinorRelease;
	BYTE byEmbeddedFirmwareMajorRelease;
	BYTE byEmbeddedFirmwareMinorRelease;
	char* szVendor;
	char* szBIOSVersion;
	char* szBIOSReleaseDate;
};


struct SMBios_TYPE1 : public SMBios_TypeBase
{
	BYTE byManufacturer;
	BYTE byProductName;
	BYTE byVersion;
	BYTE bySerialNumber;
	BYTE byUUID[16];
	BYTE byWakeupType;
	char* szManufacturer;
	char* szProductName;
	char* szVersion;
	char* szSerialNumber;
};

struct SMBios_TYPE2 : public SMBios_TypeBase
{
	BYTE byManufacturer;
	BYTE byProductName;
	BYTE byVersion;
	BYTE bySerialNumber;
	BYTE byAssetTag;
	BYTE byFeatureFlags;
	BYTE byLocationInChassis;
	WORD wChassisHandle;
	BYTE byBoardType;
	BYTE byNumOfContainedObjectHandles;
	WORD* ContainedObjectHandles[255];
	char* szManufacturer;
	char* szProductName;
	char* szVersion;
	char* szSerialNumber;
	char* szAssetTag;
	char* szLocationInChassis;
};

struct SMBios_TYPE3 : public SMBios_TypeBase
{
	BYTE byManufacturer;
	BYTE byType;
	BYTE byVersion;
	BYTE bySerialNumber;
	BYTE byAssetTag;
	BYTE byBootupState;
	BYTE byPowerSupplyState;
	BYTE byThermalState;
	BYTE bySecurityStatus;
	DWORD dwOEMdefined;
	BYTE byHeight;
	BYTE byNumberOfPowerCords;
	BYTE byContainedElementCount;
	BYTE byContainedElementRecordLength;
	char* szManufacturer;
	char* szVersion;
	char* szSerialNumber;
	char* szAssetTag;
};

struct SMBios_TYPE4 : public SMBios_TypeBase
{
	BYTE bySocketDesignation;
	BYTE byProcessorType;
	BYTE byProcessorFamily;
	BYTE byProcessorManufacturer;
	BYTE qwProcessorID[8];
	BYTE byProcessorVersion;
	BYTE byVoltage;
	WORD wExternalClock;
	WORD wMaxSpeed;
	WORD wCurrentSpeed;
	BYTE byStatus;
	BYTE byProcessorUpgrade;
	WORD wL1CacheHandle;
	WORD wL2CacheHandle;
	WORD wL3CacheHandle;
	BYTE bySerialNumber;
	BYTE byAssetTagNumber;
	BYTE byPartNumber;
	char* szSocketDesignation;
	char* szProcessorManufacturer;
	char* szProcessorVersion;
	char* szSerialNumber;
	char* szAssetTagNumber;
	char* szPartNumber;
};

struct SMBios_TYPE7 : public SMBios_TypeBase 
{
	BYTE bySocketDesignation;
	WORD wCacheConfiguration;
	WORD wMaxmumCacheSize;
	WORD wInstalledSize;
	WORD wSupportedSRAMType;
	WORD wCurrentSRAMType;
	BYTE byCacheSpeed;
	BYTE byErrorCorrectionType;
	BYTE bySystemCacheType;
	BYTE byAssociativity;
	char* szSocketDesignation;
};

struct SMBios_TYPE16 : public SMBios_TypeBase 
{
	BYTE byLocation;
	BYTE byUser;
	BYTE byMemoryErrorCorrection;
	DWORD dwMaximumCapacity;
	WORD wMemoryErrorInformationHandle;
	WORD wNumberofMemoryDevices;
};

struct SMBios_TYPE17 : public SMBios_TypeBase 
{
	WORD wMemoryArrayHandle;
	WORD wMemoryHandle;
	WORD wTotalWidth;
	WORD wDataWidth;
	WORD wSize;
	BYTE byFactor;
	BYTE byDeviceSet;
	BYTE byDeviceLocator;
	BYTE byBankLocator;
	BYTE byMemoryType;
	WORD wTypdeDetail;
	WORD wSpeed;
	BYTE byManufacturer;
	BYTE bySerialNumber;
	BYTE byAssetTag;
	BYTE byPartNumber;
};



//DMI
typedef struct _UNICODE_STRING 
{
	USHORT Length;
	USHORT MaximumLength;
	PWSTR  Buffer;
} UNICODE_STRING,*PUNICODE_STRING;


typedef struct _OBJECT_ATTRIBUTES 
{
	ULONG Length;
	HANDLE RootDirectory;
	PUNICODE_STRING ObjectName;
	ULONG Attributes;
	PVOID SecurityDescriptor;        
	PVOID SecurityQualityOfService;  
} OBJECT_ATTRIBUTES, *POBJECT_ATTRIBUTES;

//DMI
typedef DWORD  (__stdcall *ZWOPENSEC)(PHANDLE,ACCESS_MASK,POBJECT_ATTRIBUTES);
typedef DWORD  (__stdcall *ZWMAPVIEW)(HANDLE,HANDLE,PVOID,ULONG,ULONG,PLARGE_INTEGER,PSIZE_T,DWORD,ULONG,ULONG);
typedef DWORD  (__stdcall *ZWUMAPVIEW)(HANDLE,PVOID);
typedef DWORD  (__stdcall *ZWCLOSESEC)(HANDLE);



/********************************************************************
    Summary:
        ���ϵͳ��Ӳ���������Ϣ��
*********************************************************************/
class AFX_EXT_CLASS CSystemAssetInfo 
{
public:
   
    CSystemAssetInfo();
    virtual ~CSystemAssetInfo();

    BOOL InitializeCom();
    BOOL Initialize(); 
    BOOL IsInitialize();
    void UnInitialize();

    BOOL GetSysSummaryInfo(SYS_SUM_INFO_ST& stSysSumInfo);  
    BOOL GetMemoryInfo(MEMORY_INFO_ST& stMemoryInfo );    

    BOOL GetDiskInfo(DISK_INFO_VECTOR& vDiskInfo); 
    BOOL GetLogicalDiskInfo(LOGICALDISK_INFO_VECTOR& vLogicDiskInfo); 
    BOOL GetCDROMInfo(CDROM_INFO_VECTOR& vCDROMInfo);
    BOOL GetNetAdapterInfo(NETADAPTER_INFO_VECTOR& vNetAdapterInfo); 
	BOOL GetVideoInfo(VIDEO_INFO_VECTOR& vVideoInfo); 
    BOOL GetSoundInfo(SOUND_INFO_VECTOR& vSoundInfo);   
    BOOL GetKeyBoardInfo(KEYBOARD_INFO_VECTOR& vKeyBoardInfo); 
    BOOL GetMouseInfo(MOUSE_INFO_VECTOR& vMouseInfo); 
    BOOL GetMonitorInfo(MONITOR_INFO_VECTOR& vMonitorInfo); 
    BOOL GetPrinterInfo(PRINTER_INFO_VECTOR& vPrinterInfo); 
    BOOL GetBatteryInfo(BATTERY_INFO_ST& stBatteryInfo); 
    BOOL GetCPUInfo(CPU_INFO_ST& stCPUInfo);
    BOOL GetBIOSInfo(BIOS_INFO_ST& stBIOSInfo);
    BOOL GetBaseBoardInfo(BASEBOARD_INFO_ST& stBaseBoardInfo);
    BOOL GetSystemInfo(SYSTEM_INFO_ST& stSysInfo);
    BOOL GetModemInfo(MODEM_INFO_VECTOR & vModemInfo);
    BOOL GetSoftwareInfo(SOFTWARE_INFO_VECTOR & vSoftwareInfo);  
    BOOL Get1394Info(ASSET_1394_INFO_VECTOR& v1394Info);
    BOOL GetUSBInfo(USB_INFO_VECTOR& vUSBInfo);
    BOOL GetALLHardwareInfo(ASSET_INFO_MAP& mAssetInfo);
    BOOL GetAllHardwareInfoByWMI(ASSET_INFO_MAP& mAssetInfo); 
    BOOL GetALLHardwareInfoBySetUp(ASSET_INFO_MAP& mAssetInfo);

private:
   
    BOOL GetSMBIOSData();
    BOOL GetSMBIOSDataByDMI();
    int GetSMTableEntryPoint(SM_STRUCT_TABLE_ENTRY* pEntry);   
    int GetSMTable(BYTE* pByte, DWORD dwMemAddr, DWORD dwLength);

    /********************************************************************
        Summary:
            ���ڴ��л������.
        Parameters:
            pByte - ��õ�����.
            dwMemAddr - ���ݵ��ڴ��ַ.
            dwLength - ���ݵĳ���.
        Returns:
            TRUE: ��õ����ݳɹ�.
            FALSE: ��õ�����ʧ��.
    *********************************************************************/
    int GetBufferFromMem(BYTE* pBuffer,DWORD dwBaseAddress, DWORD dwLength);

  
    BOOL GetSMBIOSDataByWMI();    

    /********************************************************************
        Summary:
            ����ƶ����ַ���.
        Parameters:
            pbData - ��ʼ���ҵĵ�ַ.
            byIndex - �ַ�����λ��.
        Returns:
            �����ҵ����ַ���.
    *********************************************************************/
    char* GetString(BYTE* pbData,BYTE byIndex);

    /********************************************************************
        Summary:
            ���ָ�����͵ı�����.
        Parameters:
            pbData - ������.
            dwTatalTableSize - �����ݵĳ���.
            byTableType -  Ҫ��ȡ����������.
            dwTableIndex - Ҫ��ȡ�����ݵ�λ��.
            dwTableSize - Ҫ��ȡ�����ݵĴ�С.
        Returns:
            TRUE: ���ָ�����͵ı����ݳɹ�.
            FALSE: ���ָ�����͵ı�����ʧ��.
    *********************************************************************/
    BOOL GetTableByType(BYTE* const pbData, DWORD dwTatalTableSize, BYTE byTableType, DWORD& dwTableIndex, DWORD& dwTableSize);
    
    /********************************************************************
        Summary:
            ���ָ��Handle�ı�����.
        Parameters:
            pbData - ������.
            dwTatalTableSize - �����ݵĳ���.
            wTableHandle - Ҫ��ȡ�����ݵ�Handle.
            dwTableIndex - Ҫ��ȡ�����ݵ�λ��.
            dwTableSize - Ҫ��ȡ�����ݵĴ�С.
        Returns:
            TRUE: ���ָ�����͵ı����ݳɹ�.
            FALSE: ���ָ�����͵ı�����ʧ��.
    *********************************************************************/
    BOOL GetTableByHandle(BYTE* const pbData, DWORD dwTatalTableSize, WORD wTableHandle, DWORD& dwTableIndex, DWORD& dwTableSize);

    /********************************************************************
        Summary:
            ��ñ�����.
        Parameters:
            pbData - ������.
            stSMBiosType0 - Ҫ��ȡ������.
        Returns:
            TRUE: ���ָ�����͵ı����ݳɹ�.
            FALSE: ���ָ�����͵ı�����ʧ��.
    *********************************************************************/
    int GetData(BYTE* pbData, SMBios_TYPE0& stSMBiosType0);

    /********************************************************************
        Summary:
            ��ñ�����.
        Parameters:
            pbData - ������.
            stSMBiosType1 - Ҫ��ȡ������.
        Returns:
            TRUE: ���ָ�����͵ı����ݳɹ�.
            FALSE: ���ָ�����͵ı�����ʧ��.
    *********************************************************************/
    int GetData(BYTE* pbData, SMBios_TYPE1& stSMBiosType1);

    /********************************************************************
        Summary:
            ��ñ�����.
        Parameters:
            pbData - ������.
            stSMBiosType2 - Ҫ��ȡ������.
        Returns:
            TRUE: ���ָ�����͵ı����ݳɹ�.
            FALSE: ���ָ�����͵ı�����ʧ��.
    *********************************************************************/
    int GetData(BYTE* pbData, SMBios_TYPE2& stSMBiosType2);

    /********************************************************************
        Summary:
            ��ñ�����.
        Parameters:
            pbData - ������.
            stSMBiosType3 - Ҫ��ȡ������.
        Returns:
            TRUE: ���ָ�����͵ı����ݳɹ�.
            FALSE: ���ָ�����͵ı�����ʧ��.
    *********************************************************************/
    int GetData(BYTE* pbData, SMBios_TYPE3& stSMBiosType3);

    /********************************************************************
        Summary:
            ��ñ�����.
        Parameters:
            pbData - ������.
            stSMBiosType4 - Ҫ��ȡ������.
        Returns:
            TRUE: ���ָ�����͵ı����ݳɹ�.
            FALSE: ���ָ�����͵ı�����ʧ��.
    *********************************************************************/
    int GetData(BYTE* pbData, SMBios_TYPE4& stSMBiosType4);

    /********************************************************************
        Summary:
            ��ñ�����.
        Parameters:
            pbData - ������.
            stSMBiosType7 - Ҫ��ȡ������.
        Returns:
            TRUE: ���ָ�����͵ı����ݳɹ�.
            FALSE: ���ָ�����͵ı�����ʧ��.
    *********************************************************************/
    int GetData(BYTE* pbData, SMBios_TYPE7& stSMBiosType7);

    /********************************************************************
        Summary:
            ��ñ�����.
        Parameters:
            pbData - ������.
            stSMBiosType16 - Ҫ��ȡ������.
        Returns:
            TRUE: ���ָ�����͵ı����ݳɹ�.
            FALSE: ���ָ�����͵ı�����ʧ��.
    *********************************************************************/
    int GetData(BYTE* pbData, SMBios_TYPE16& stSMBiosType16);

    /********************************************************************
        Summary:
            ��ñ�����.
        Parameters:
            pbData - ������.
            stSMBiosType17 - Ҫ��ȡ������.
        Returns:
            TRUE: ���ָ�����͵ı����ݳɹ�.
            FALSE: ���ָ�����͵ı�����ʧ��.
    *********************************************************************/
    int GetData(BYTE* pbData, SMBios_TYPE17& stSMBiosType17);

    /********************************************************************
        Summary:
            ����豸������.
        Parameters:
            hDevInfo - 
            DeviceInfoData - 
            dwProperty - ����
            strResult - �õ�������.
        Returns:
            TRUE: ����豸�����Գɹ�.
            FALSE: ����豸������ʧ��.
    *********************************************************************/
    BOOL GetDevSingleProperty(HDEVINFO hDevInfo, SP_DEVINFO_DATA DeviceInfoData, 
                                DWORD dwProperty, string & strResult);

    /********************************************************************
        Summary:
            ����豸������.
        Parameters:
            hDevInfo - 
            DeviceInfoData - 
            strResult - �õ�������.
        Returns:
            TRUE: ����豸�����Գɹ�.
            FALSE: ����豸������ʧ��.
    *********************************************************************/
    BOOL GetDevInstanceID(HDEVINFO hDevInfo, SP_DEVINFO_DATA DeviceInfoData, string & strResult);

private:
    BYTE* m_pbBIOSData;        //BIOS����
    DWORD m_SMBiosLen;         //SMBIOS����
    BYTE m_byMajorVersion;     //BIOS�Ĵ�汾
    BYTE m_byMinorVersion;     //BIOS��С�汾
    BOOL bIsWindows2000;       //�Ƿ���Windows 2000����ϵͳ
    IWbemLocator* pLocator;    //locatorָ��


    IWbemServices* m_pWbemServices;  //Servicesָ��
	bool ExecuteSQLQuery(char* strSQL, IEnumWbemClassObject** pEnumerator);
	bool ExecuteSQLQueryNext(IEnumWbemClassObject* pEnumerator,  IWbemClassObject **pclsObj);
	bool ExecuteGetStringValue( IWbemClassObject *pObj, LPCWSTR pwName, VARIANT var, string & str);
	bool ExecuteGetStringValueToInt( IWbemClassObject *pObj, LPCWSTR pwName, VARIANT var, int & iInfo, int iNum);
	bool ExecuteGetIntValue( IWbemClassObject *pObj, LPCWSTR pwName, VARIANT var, int & iVal);




    ZWOPENSEC ZwOpenSec;       //ZwOpenSection ����ָ��
    ZWMAPVIEW ZwMapView;       //ZwMapViewOfSection����ָ��
    ZWUMAPVIEW ZwUMapView;     //ZwUnmapViewOfSection����ָ��
    ZWCLOSESEC ZWCloseSec;     //ZWClose����ָ��
};

	}
}


#endif 