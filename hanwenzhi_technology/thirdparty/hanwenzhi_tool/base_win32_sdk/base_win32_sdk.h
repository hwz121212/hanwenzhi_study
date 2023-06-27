#pragma once


#define WIN32_LEAN_AND_MEAN		
#include <Windows.h>
#include <windowsx.h>
#include <shellapi.h>
#include <shlobj.h>

#include <winsvc.h>

// C 运行时头文件
#include <stdio.h> 
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <list>
#include <algorithm>
using namespace std;



#include "sdk/Assert/AssetInfo.h"
#include "sdk/Balloon/BalloonUtil.h"
#include "sdk/barcode/barcode.h"
#include "sdk/barcode/code128.h"
#include "sdk/barcode/barcodemore.h"
#include "sdk/Base64/Base64.h"
#include "sdk/Base64/Base64_1.h"
#include "sdk/Base64/base64_rc4.h"
#include "sdk/BigInteger/BigIntegerLibrary.h"
#include "sdk/Clipboard/ClipboardUtil.h"
#include "sdk/Compare/Compare.h"
#include "sdk/Cpu/Cpu.h"
#include "sdk/Cursor/cursor.h"
#include "sdk/Disk/DiskInfo.h"
#include "sdk/dlg/dlg.h"
#include "sdk/Dll/DllManager.h"
#include "sdk/dump/MiniDumper.h"
#include "sdk/dic/dic.h"
#include "sdk/Encrypt/Encrypt.h"
#include "sdk/Encrypt/Huffman.h"
#include "sdk/Error/LastError.h"
#include "sdk/EventNoify/EventNoify.h"
#include "sdk/File/CpsFiles.h"
#include "sdk/File/ExeFile.h"
#include "sdk/File/FileCopy.h"
#include "sdk/File/FileUtil.h"
#include "sdk/Ftp/FtpClientUtil.h"
#include "sdk/Ftp/FtpServerUtil.h"
#include "sdk/Hook/apihook.h"
#include "sdk/Hook/inlinehook.h"
#include "sdk/http/HttpUtil.h"
#include "sdk/HWND/HWNDUtil.h"
#include "sdk/IE/IEUtils.h"
#include "sdk/Ini/IniFile.h"
#include "sdk/Ini/Ini.h"
#include "sdk/Keyboard/KeyboardUtil.h"
#include "sdk/Lock/criticalsectionlock.h"
#include "sdk/log/logutil.h"
#include "sdk/md5/md5.h"
#include "sdk/Memory/memorymodule.h"
#include "sdk/Network/NetworkUtil.h"
#include "sdk/OSInfo/MacInfo.h"
#include "sdk/OSInfo/OSInfo.h"
#include "sdk/OSInfo/OsInfo1.h"
#include "sdk/OSInfo/OSUser.h"
#include "sdk/OSInfo/OSVersion.h"
#include "sdk/Process/ProcessUtil.h"
#include "sdk/qrcodeutil/qrcodeutil.h"
#include "sdk/Rand/Rand.h"
#include "sdk/Registry/Registry.h"
#include "sdk/Service/ServiceUtil.h"
#include "sdk/Sound/SoundUtil.h"
#include "sdk/String/StringUtil.h"
#include "sdk/System/ExitWindows.h"
#include "sdk/System/Regedit.h"
#include "sdk/System/SystemTime.h"
#include "sdk/Time/StopWatch.h"
#include "sdk/Time/TimeUtil.h"
#include "sdk/threadsafe/critsect.h"
#include "sdk/UI/RichEdit/MyRichEdit.h"
#include "sdk/UI/UIButton.h"
#include "sdk/UI/UIImagePreview.h"
#include "sdk/URL/url.h"


