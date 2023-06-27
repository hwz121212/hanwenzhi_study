
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
	ASSET_FDC,             //软盘控制器,
	ASSET_FLOPPYDISK,      //软盘驱动器,
	ASSET_INFRARED,        //红外线设备,
	ASSET_PCMCIA,          //PCMCIA 卡,
	ASSET_MULTIFUNCTION,   //多功能卡,
	ASSET_MULTIPORTSERIAL, //多串口卡,
	ASSET_PNPPRINTERS,     //IEEE 1394 和 SCSI 打印机,
	ASSET_SCSIADAPTER,     //SCSI 和 RAID 控制器,
	ASSET_TAPEDRIVER,      //磁带驱动器,
	ASSET_DOT4,            //IEEE 1284.4 设备,
	ASSET_DOT4PRINT,       //IEEE 1284.4 兼容打印机,
	ASSET_WCEUSBS,         //Windows CE USB 设备,
	ASSET_HDC,             //IDE ATA/ATAPI 控制器
	ASSET_MTD,             //Memory technology driver
	ASSET_NETCLIENT,       //网络客户
	ASSET_NETSERVICE,      //网络服务
	ASSET_NETTRANS,        //网络协议
	ASSET_SMARTCARDREADER, //SMART CARD READERS
	ASSET_VOLUMESNAPSHOT,  //存储卷影复制
	ASSET_1394DEBUG,       //1394 DEBUGGER DEVICE"
	ASSET_VOLUME,          //存储卷
	ASSET_HIDCLASS,        //人体学输入设备"        
	ASSET_61883,           //61883 设备类"        
	ASSET_VMKBD,           //VMKBD"
	ASSET_SDHOST,          //"SECURE DIGITAL HOST CONTROLLERS"
	ASSET_AVC,             //AVC 设备类"        
	ASSET_ENUM1394,        //IEEE 1394 IP 网络计数器"        
	ASSET_MEDIUMCHANGER,   //介质变换器"        
	ASSET_NTAPM,           //NT APM/LEGACY 支持"        
	ASSET_SBP2,            //SBP2 IEEE 1394 设备"        
	ASSET_WPD,             //WINDOWS 便携设备"
	ASSET_UNKNOWN = 10000, //未知设备
};


//CPU信息
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

	string strVersion;         //规格
	string strType;            //类型
	string strManufacturer;    //制造商
	string strSocket;          //插座\\插槽
	WORD wMaxSpeed;             //主板支持的最高CPU主频
	WORD wCurrentSpeed;         //主频
	WORD wExternalClock;        //外频
	WORD wL1CacheSize;          //L1缓存
	WORD wL2CacheSize;          //L2缓存
	double dVoltage;            //电压
}CPU_INFO_ST;

//BIOS信息
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

	string strVendor;          //制造商
	string strVersion;         //版本
	string strReleaseData;     //日期
	string strSMBIOS;          //SMBIOS/DMI
	int iBIOSROMSize;           //大小
}BIOS_INFO_ST;

//主板信息
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

	string strManufacturer;    //制造商
	string strProducName;      //产品
	string strType;            //类型
	string strVersion;         //版本
	string strSerialNumber;    //序列号
}BASEBOARD_INFO_ST;


//系统信息
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

	string strManufacturer;    //制造商
	string strProductName;     //产品
	string strVersion;         //版本
	string strSerialNumber;    //序列号
	string strUUID;            //全局唯一识别ID
	string strWakeUpType;      //唤醒方式
}SYSTEM_INFO_ST;



//系统摘要信息
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

	string strCaption;         //操作系统
	string strCSName;          //主机名
	string strManufacturer;    //制造商
	string strInstallData;     //安装时间
	string strLastBootUpTime;  //上次启动时间
	string strOrganization;    //组织
	string strSerialNumber;    //序列号
	string strSystemDirectory; //系统目录
	string strVersion;         //版本
	string strWindowsDirectory;//Windows目录
	string strBootDevice;      //启动设备
	string strSysName;         //系统名称
	string strSysManufacturer; //系统制造商
	string strSysModel;        //系统模式
	string strSysType;         // 系统类型
	string strCPU;             // CPU
	string strBios;            // Bios
	string strSMBios;          // SMBIOS
	string strIEVer;           // IE版本
	string strOfficeVersion;   // office版本
	int iTotalVirtualMemorySize;     //虚拟内存总计
	int iTotalVisibleMemorySize;     //物理内存总计
	int iSizeStoredInPagingFiles;    //页面文件大小
	int iDiskSize;                   //硬盘大小
	int iCPUSpeed;                   //CPU主频
}SYS_SUM_INFO_ST;


//内存信息
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

	int iTotalVirtualMemorySize;     //虚拟内存总计
	int iTotalVisibleMemorySize;     //物理内存总计
	int iFreePhysicalMemory;         //物理内存剩余
	int iFreeSpaceInPagingFiles;     //页面文件剩余
	int iFreeVirtualMemory;          //虚拟内存剩余
	string strMemorySlotInfo;          //内存插槽信息
	string strMemoryFac;               //内存制造厂商
	int iSlotNumber;                    //内存插槽数目
}MEMORY_INFO_ST;


//硬盘信息
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
	string strCaption;      //描述
	string strManufacturer; //制造商
	string strDeviceID;
	int iBytesPerSector;     //每扇区字节数
	int iIndex;              //序列号
	int iSectorsPerTrack;    //每簇的扇区数
	int iTotalHeads;         //磁头总计
	int iTrackPerCylinder;   //每柱面的簇数
	int iSize;               //大小
	int iTotalCylinders;     //柱面总计
	int iTotalSectors;       //扇区总计
	int iTotalTracks;        //簇总计

	string strSerialNumber; // 物理序列号
}DISK_INFO_ST;



//逻辑分区信息
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

	string strVolumeSerialNumber; //序列号
	string strCaption;            //逻辑分区
	string strDescription;        //描述
	string strFileSystem;         //文件系统
	string strVolumeName;         //卷标
	int iFreeSpace;             //可用空间
	int iSize;                  //大小
}LOGICALDISK_INFO_ST;

//光驱信息
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

	string strCaption;         //名称
	string strDrive;           //卷标
	string strManufacturer;    //制造商
	string strMediaType;       //类型
	string strPNPDeviceID;     //排除虚拟设备
}CDROM_INFO_ST;



//网卡信息
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

	string strAdapterType;     //协议
	string strName;            //名称
	string strMACAddress;      //MAC
	string strManufacturer;    //制造商
	string strNetConnectionID; //网络连接类型
	string strPNPDeviceID;     //排除虚拟设备
	int iSpeed;
}NETADAPTER_INFO_ST;



//显卡信息
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

	string strCaption;             //名称
	string strAdapterDACType;      //DAC类型
	string strDriverVersion;       //驱动版本
	string strVideoModeDescription;//显卡模式描述
	string strPNPDeviceID;
	string strManufacturer;        //制造商
	int iAdapterRAM;                //显存
	int iCurrentRefreshRate;        //当前刷新率
	int iCurrentBitsPerPixel;       //判断是否为可用的显示设备
}VIDEO_INFO_ST;


//声卡信息
typedef struct _SOUND_INFO  
{
	_SOUND_INFO()
	{
		strCaption = "";     
		strManufacturer = "";  
		strDeviceID = "";    
	}

	string strCaption;         //名称
	string strManufacturer;    //制造商
	string strDeviceID;        //设备ID
}SOUND_INFO_ST;

//键盘信息
typedef struct _KEYBOARD_INFO  
{
	_KEYBOARD_INFO()
	{
		strDeviceID = "";
		strDescription = ""; 
		strManufacturer = "标准键盘";
		iNumberOfFunctionKeys = 0;
	}

	string strDeviceID;
	string strDescription;     //描述
	string strManufacturer;    //生产厂商
	int iNumberOfFunctionKeys;  //功能键数目
}KEYBOARD_INFO_ST;


//鼠标信息
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
	string strCaption;         //描述
	string strManufacturer;    //制造商
	int cNumberOfButtons;      //功能键数
}MOUSE_INFO_ST;



//显示器信息
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

	string strCaption;              //名称
	string strDeviceID;             //产品ID
	string strMonitorManufacturer;  //生产厂商
	string strMonitorType;          //显示器类型
	int iPixelsPerXLogicalInch;      //X轴每英寸像素
	int iPixelsPerYLogicalInch;      //Y轴每英寸像素
	int iScreenHeight;               //屏幕高度
	int iScreenWidth;                //屏幕宽度
}MONITOR_INFO_ST;

//打印机信息
typedef struct _PRINTER_INFO  
{
	_PRINTER_INFO()
	{
		strDeviceID = "";
		strCaption = ""; 
	}

	string strDeviceID;
	string strCaption;        //设备名称
}PRINTER_INFO_ST;

//电池信息
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

	string strCaption;             //型号
	string strName;                //设备名称
	string strDeviceID;            //唯一标识
	int iEstimatedChargeRemaining;  //剩余放电百分比
	int iEstimatedRunTime;          //剩余时间
	double dDesignVoltage;          //电压
}BATTERY_INFO_ST;


// 调制解调器
typedef struct _MODEM_INFO
{
	_MODEM_INFO()
	{
		strCaption = "";   
		strDeviceID = "";    
		strProviderName = "";    
	}

	string strCaption;             //标题
	string strDeviceID;            //设备ID
	string strProviderName;        //制造商
}MODEM_INFO_ST;

// 蓝牙设备
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

// 摄像头
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


//软件信息
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

	string strDisplayName;     //软件名称
	string strDisplayVersion;  //版本
	string strPublisher;       //制造厂商
	string strInstallDate;     //安装时间
	string strInstallLocation; //安装位置
	string strURLInfoAbout;    //网址
	string strUninstallString; //卸载
	string strProductID;      
}SOFTWARE_INFO_ST;

//1394信息
typedef struct _1394_INFO 
{
	_1394_INFO()
	{
		strCaption = "";    
		strDeviceID = "";  
		strManufacturer = "";
	}

	string strCaption;         //1394名称
	string strDeviceID;        //设备名称
	string strManufacturer;    //制造厂商
}ASSET_1394_INFO_ST;

//USB信息
typedef struct _USB_INFO 
{
	_USB_INFO()
	{
		strCaption = "";    
		strDeviceID = "";  
		strManufacturer = "";
	}

	string strCaption;         //USB名称
	string strDeviceID;        //设备名称
	string strManufacturer;    //制造厂商
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

//其他的设备,
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
        获得系统的硬件和软件信息类
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
            从内存中获得数据.
        Parameters:
            pByte - 获得的数据.
            dwMemAddr - 数据的内存地址.
            dwLength - 数据的长度.
        Returns:
            TRUE: 获得的数据成功.
            FALSE: 获得的数据失败.
    *********************************************************************/
    int GetBufferFromMem(BYTE* pBuffer,DWORD dwBaseAddress, DWORD dwLength);

  
    BOOL GetSMBIOSDataByWMI();    

    /********************************************************************
        Summary:
            获得制定的字符串.
        Parameters:
            pbData - 开始查找的地址.
            byIndex - 字符串的位置.
        Returns:
            返回找到的字符串.
    *********************************************************************/
    char* GetString(BYTE* pbData,BYTE byIndex);

    /********************************************************************
        Summary:
            获得指定类型的表数据.
        Parameters:
            pbData - 总数据.
            dwTatalTableSize - 总数据的长度.
            byTableType -  要获取的数据类型.
            dwTableIndex - 要获取的数据的位置.
            dwTableSize - 要获取的数据的大小.
        Returns:
            TRUE: 获得指定类型的表数据成功.
            FALSE: 获得指定类型的表数据失败.
    *********************************************************************/
    BOOL GetTableByType(BYTE* const pbData, DWORD dwTatalTableSize, BYTE byTableType, DWORD& dwTableIndex, DWORD& dwTableSize);
    
    /********************************************************************
        Summary:
            获得指定Handle的表数据.
        Parameters:
            pbData - 总数据.
            dwTatalTableSize - 总数据的长度.
            wTableHandle - 要获取的数据的Handle.
            dwTableIndex - 要获取的数据的位置.
            dwTableSize - 要获取的数据的大小.
        Returns:
            TRUE: 获得指定类型的表数据成功.
            FALSE: 获得指定类型的表数据失败.
    *********************************************************************/
    BOOL GetTableByHandle(BYTE* const pbData, DWORD dwTatalTableSize, WORD wTableHandle, DWORD& dwTableIndex, DWORD& dwTableSize);

    /********************************************************************
        Summary:
            获得表数据.
        Parameters:
            pbData - 总数据.
            stSMBiosType0 - 要获取的数据.
        Returns:
            TRUE: 获得指定类型的表数据成功.
            FALSE: 获得指定类型的表数据失败.
    *********************************************************************/
    int GetData(BYTE* pbData, SMBios_TYPE0& stSMBiosType0);

    /********************************************************************
        Summary:
            获得表数据.
        Parameters:
            pbData - 总数据.
            stSMBiosType1 - 要获取的数据.
        Returns:
            TRUE: 获得指定类型的表数据成功.
            FALSE: 获得指定类型的表数据失败.
    *********************************************************************/
    int GetData(BYTE* pbData, SMBios_TYPE1& stSMBiosType1);

    /********************************************************************
        Summary:
            获得表数据.
        Parameters:
            pbData - 总数据.
            stSMBiosType2 - 要获取的数据.
        Returns:
            TRUE: 获得指定类型的表数据成功.
            FALSE: 获得指定类型的表数据失败.
    *********************************************************************/
    int GetData(BYTE* pbData, SMBios_TYPE2& stSMBiosType2);

    /********************************************************************
        Summary:
            获得表数据.
        Parameters:
            pbData - 总数据.
            stSMBiosType3 - 要获取的数据.
        Returns:
            TRUE: 获得指定类型的表数据成功.
            FALSE: 获得指定类型的表数据失败.
    *********************************************************************/
    int GetData(BYTE* pbData, SMBios_TYPE3& stSMBiosType3);

    /********************************************************************
        Summary:
            获得表数据.
        Parameters:
            pbData - 总数据.
            stSMBiosType4 - 要获取的数据.
        Returns:
            TRUE: 获得指定类型的表数据成功.
            FALSE: 获得指定类型的表数据失败.
    *********************************************************************/
    int GetData(BYTE* pbData, SMBios_TYPE4& stSMBiosType4);

    /********************************************************************
        Summary:
            获得表数据.
        Parameters:
            pbData - 总数据.
            stSMBiosType7 - 要获取的数据.
        Returns:
            TRUE: 获得指定类型的表数据成功.
            FALSE: 获得指定类型的表数据失败.
    *********************************************************************/
    int GetData(BYTE* pbData, SMBios_TYPE7& stSMBiosType7);

    /********************************************************************
        Summary:
            获得表数据.
        Parameters:
            pbData - 总数据.
            stSMBiosType16 - 要获取的数据.
        Returns:
            TRUE: 获得指定类型的表数据成功.
            FALSE: 获得指定类型的表数据失败.
    *********************************************************************/
    int GetData(BYTE* pbData, SMBios_TYPE16& stSMBiosType16);

    /********************************************************************
        Summary:
            获得表数据.
        Parameters:
            pbData - 总数据.
            stSMBiosType17 - 要获取的数据.
        Returns:
            TRUE: 获得指定类型的表数据成功.
            FALSE: 获得指定类型的表数据失败.
    *********************************************************************/
    int GetData(BYTE* pbData, SMBios_TYPE17& stSMBiosType17);

    /********************************************************************
        Summary:
            获得设备的属性.
        Parameters:
            hDevInfo - 
            DeviceInfoData - 
            dwProperty - 属性
            strResult - 得到的数据.
        Returns:
            TRUE: 获得设备的属性成功.
            FALSE: 获得设备的属性失败.
    *********************************************************************/
    BOOL GetDevSingleProperty(HDEVINFO hDevInfo, SP_DEVINFO_DATA DeviceInfoData, 
                                DWORD dwProperty, string & strResult);

    /********************************************************************
        Summary:
            获得设备的属性.
        Parameters:
            hDevInfo - 
            DeviceInfoData - 
            strResult - 得到的数据.
        Returns:
            TRUE: 获得设备的属性成功.
            FALSE: 获得设备的属性失败.
    *********************************************************************/
    BOOL GetDevInstanceID(HDEVINFO hDevInfo, SP_DEVINFO_DATA DeviceInfoData, string & strResult);

private:
    BYTE* m_pbBIOSData;        //BIOS数据
    DWORD m_SMBiosLen;         //SMBIOS长度
    BYTE m_byMajorVersion;     //BIOS的大版本
    BYTE m_byMinorVersion;     //BIOS的小版本
    BOOL bIsWindows2000;       //是否是Windows 2000操作系统
    IWbemLocator* pLocator;    //locator指针


    IWbemServices* m_pWbemServices;  //Services指针
	bool ExecuteSQLQuery(char* strSQL, IEnumWbemClassObject** pEnumerator);
	bool ExecuteSQLQueryNext(IEnumWbemClassObject* pEnumerator,  IWbemClassObject **pclsObj);
	bool ExecuteGetStringValue( IWbemClassObject *pObj, LPCWSTR pwName, VARIANT var, string & str);
	bool ExecuteGetStringValueToInt( IWbemClassObject *pObj, LPCWSTR pwName, VARIANT var, int & iInfo, int iNum);
	bool ExecuteGetIntValue( IWbemClassObject *pObj, LPCWSTR pwName, VARIANT var, int & iVal);




    ZWOPENSEC ZwOpenSec;       //ZwOpenSection 函数指针
    ZWMAPVIEW ZwMapView;       //ZwMapViewOfSection函数指针
    ZWUMAPVIEW ZwUMapView;     //ZwUnmapViewOfSection函数指针
    ZWCLOSESEC ZWCloseSec;     //ZWClose函数指针
};

	}
}


#endif 