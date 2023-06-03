#pragma once


//获取配置类型【dll、exe、lib】
enum enumConfigurationType
{
	enumConfigurationType_unknown = 0,
	enumConfigurationType_lib,
	enumConfigurationType_dll,
	enumConfigurationType_exe,
	enumConfigurationType_Utility	
};

enumConfigurationType GetConfigurationType(const CString& strFileContent);


//<OutDir Condition="'$(Configuration)|$(Platform)'=='Release|x64'">$(SolutionDir)bin\$(Configuration)\</OutDir>
void SetValue_WithAttribute(CString& strFileContent, const CString& strTagBegin, const CString& strTagEnd, const CString& strValue);


void SetValueEmptyIfFindStr(CString& strFileContent, const CString& strTagBegin, const CString& strTagEnd, const CString& strFindValue);

void OutDir_dll_exe(CString& strFileContent);
void OutDir_lib(CString& strFileContent);
void IntDir(CString& strFileContent);
void TargetName(CString& strFileContent);
void TargetExt(CString& strFileContent);
void OutputDirectory(CString& strFileContent);

void IntermediateDirectory(CString& strFileContent);
void PrimaryOutput(CString& strFileContent);



void PlatformToolset_v141(CString& strFileContent);
void WindowsTargetPlatformVersion_10_0_17763_0(CString& strFileContent);
void RandomizedBaseAddress(CString& strFileContent);
void TreatWarningAsError(CString& strFileContent);


