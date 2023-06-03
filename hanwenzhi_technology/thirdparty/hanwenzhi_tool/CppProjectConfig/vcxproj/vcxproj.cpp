#include "stdafx.h"
#include "vcxproj.h"


void Vcxproj_Replace(CString& strFileContent)
{
	strFileContent.Replace("<ProjectReference/>", "");
	strFileContent.Replace("<CustomBuild/>", "");
	strFileContent.Replace("<ItemGroup/>", "");

	strFileContent.Replace(";CMAKE_INTDIR=\\\"Release\\\"", "");
	strFileContent.Replace(";CMAKE_INTDIR=\"Release\"", "");
	strFileContent.Replace(";CMAKE_INTDIR=\\\"Debug\\\"", "");
	strFileContent.Replace(";CMAKE_INTDIR=\"Debug\"", "");		
}

void Delete_ProjectConfiguration(const CString& strFilePathName, const CString& strConfiguration)
{
	CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePathName);

	CString strOld_000 = "<PropertyGroup Label=\"UserMacros\" />";
	CString strNew_000 = "strNew_000";
	strFileContent.Replace(strOld_000, strNew_000);


	Delete_ItemGroup_ProjectConfiguration(strFileContent, strConfiguration);
	Delete_PropertyGroup(strFileContent, strConfiguration);
	Delete_PropertyGroup_Child(strFileContent, strConfiguration);
	Delete_ImportGroup(strFileContent, strConfiguration);	
	Delete_ItemDefinitionGroup(strFileContent, strConfiguration);
	Delete_ImportGroup_ClCompile_ExcludedFromBuild(strFileContent, strConfiguration);
	Delete_CustomBuild(strFileContent, strConfiguration);
	Delete_Command(strFileContent, strConfiguration);
	Delete_Message(strFileContent, strConfiguration);
	Delete_Outputs(strFileContent, strConfiguration);
	Delete_AdditionalIncludeDirectories(strFileContent, strConfiguration);
	Delete_AdditionalInputs(strFileContent, strConfiguration);	

	Delete_PreprocessorDefinitions(strFileContent, strConfiguration);
	Delete_WarningLevel(strFileContent, strConfiguration);

	Delete_AdditionalOptions(strFileContent, strConfiguration);


	Delete_TypeLibraryName(strFileContent, strConfiguration);
	Delete_HeaderFileName(strFileContent, strConfiguration);
	Delete_InterfaceIdentifierFileName(strFileContent, strConfiguration);
	Delete_GenerateStublessProxies(strFileContent, strConfiguration);
	Delete_TargetEnvironment(strFileContent, strConfiguration);
	Delete_PrecompiledHeader(strFileContent, strConfiguration);
	Delete_PrecompiledHeaderFile(strFileContent, strConfiguration);

		
	//"PlatformToolset"
	
	strFileContent.Replace(strNew_000, strOld_000);

	sdk::fileutil::SaveStringToFile(strFilePathName, strFileContent);
}

void Delete_SlnConfiguration(const CString& strFilePathName, const CString& strConfiguration)
{
	if (strFilePathName.IsEmpty())return;
	CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePathName);
	CStringArray arrReturn;
	sdk::stringutil::SplitStringWithEx(strFileContent, arrReturn, "\r\n");
	for (int index = 0; index < arrReturn.GetCount(); index++)
	{
		CString strTemp = arrReturn.GetAt(index);
		int iIndex = strTemp.Find(strConfiguration);
		if (iIndex != -1)
		{
			strFileContent.Replace(strTemp, "");
		}
	}
	sdk::fileutil::SaveStringToFile(strFilePathName, strFileContent);
}

void Delete_SlnX86(const CString& strFilePathName)
{
	if (strFilePathName.IsEmpty())return;
	CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePathName);
	CStringArray arrReturn;
	sdk::stringutil::SplitStringWithEx(strFileContent, arrReturn, "\r\n");
	for (int index = 0; index < arrReturn.GetCount(); index++)
	{
		CString strTemp = arrReturn.GetAt(index);
		if (strTemp.Find("|x86") != -1)
		{
			strFileContent.Replace(strTemp, "");
		}
	}
	sdk::fileutil::SaveStringToFile(strFilePathName, strFileContent);
}

void ProjectConfiguration_win32_to_x64(const CString& strFilePath)
{
	CString strFileContent;
	strFileContent = sdk::fileutil::GetStringFromFile(strFilePath);
	strFileContent.Replace("<Platform>Win32</Platform>", "<Platform>x64</Platform>");
	strFileContent.Replace("|Win32", "|x64");
	strFileContent.Replace("<TargetMachine>MachineX86</TargetMachine>", "<TargetMachine>MachineX64</TargetMachine>");
	sdk::fileutil::SaveStringToFile(strFilePath, strFileContent);	
}

void SlnConfiguration_win32_to_x64(const CString& strFilePath)
{
	if (strFilePath.IsEmpty())return;
	CString strFileContent;
	strFileContent = sdk::fileutil::GetStringFromFile(strFilePath);
	strFileContent.Replace("Debug|x86 = Debug|x86", "Debug|x64 = Debug|x64");
	strFileContent.Replace("Release|x86 = Release|x86", "Release|x64 = Release|x64");
	strFileContent.Replace("Debug|x86.ActiveCfg = Debug|Win32", "Debug|x64.ActiveCfg = Debug|x64");
	strFileContent.Replace("Debug|x86.Build.0 = Debug|Win32", "Debug|x64.Build.0 = Debug|x64");
	strFileContent.Replace("Release|x86.ActiveCfg = Release|Win32", "Release|x64.ActiveCfg = Release|x64");
	strFileContent.Replace("Release|x86.Build.0 = Release|Win32", "Release|x64.Build.0 = Release|x64");
	sdk::fileutil::SaveStringToFile(strFilePath, strFileContent);
}

void ProjectConfiguration_x64_to_win32(const CString& strFilePath)
{
	CString strFileContent;
	strFileContent = sdk::fileutil::GetStringFromFile(strFilePath);
	strFileContent.Replace("<Platform>x64</Platform>", "<Platform>Win32</Platform>");
	strFileContent.Replace("|x64", "|Win32");
	strFileContent.Replace("<TargetMachine>MachineX64</TargetMachine>", "<TargetMachine>MachineX86</TargetMachine>");
	sdk::fileutil::SaveStringToFile(strFilePath, strFileContent);
}

void SlnConfiguration_x64_to_win32(const CString& strFilePath)
{
	if (strFilePath.IsEmpty())return;
	CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePath);
	strFileContent.Replace("Debug|x64 = Debug|x64", "Debug|x86 = Debug|x86");
	strFileContent.Replace("Release|x64 = Release|x64", "Release|x86 = Release|x86");
	strFileContent.Replace("Debug|x64.ActiveCfg = Debug|x64", "Debug|x86.ActiveCfg = Debug|Win32");
	strFileContent.Replace("Debug|x64.Build.0 = Debug|x64", "Debug|x86.Build.0 = Debug|Win32");
	strFileContent.Replace("Release|x64.ActiveCfg = Release|x64", "Release|x86.ActiveCfg = Release|Win32");
	strFileContent.Replace("Release|x64.Build.0 = Release|x64", "Release|x86.Build.0 = Release|Win32");
	sdk::fileutil::SaveStringToFile(strFilePath, strFileContent);
}




void Vcxproj_Process_ALL(CString& strFileContent)
{
	enumConfigurationType enumType = GetConfigurationType(strFileContent);
	switch (enumType)
	{
	case enumConfigurationType_unknown:
		Vcxproj_Process_unknown(strFileContent);
		break;
	case enumConfigurationType_lib:
		Vcxproj_Process_lib(strFileContent);
		break;
	case enumConfigurationType_dll:
		Vcxproj_Process_dll(strFileContent);
		break;
	case enumConfigurationType_exe:
		Vcxproj_Process_exe(strFileContent);
		break;
	case enumConfigurationType_Utility:
		Vcxproj_Process_Utility(strFileContent);
		break;		
	default:
		break;
	}	

	Vcxproj_Replace(strFileContent);	
}

void Vcxproj_Process_unknown(CString& strFileContent)
{
	ItemGroup_Process_CMakeLists(strFileContent);
}

void Vcxproj_Process_Common(CString& strFileContent)
{
	IntDir(strFileContent);
	TargetName(strFileContent);
	TargetExt(strFileContent);
	OutputDirectory(strFileContent);
	IntermediateDirectory(strFileContent);
	PrimaryOutput(strFileContent);

	PlatformToolset_v141(strFileContent);
	WindowsTargetPlatformVersion_10_0_17763_0(strFileContent);
	RandomizedBaseAddress(strFileContent);
	TreatWarningAsError(strFileContent);

	AssemblerListingLocation(strFileContent);
	ObjectFileName(strFileContent);
	OutputFile(strFileContent);
	ProgramDataBaseFileName(strFileContent);
	ProgramDataBaseFile(strFileContent);

	ItemGroup_Process_CMakeLists(strFileContent);
	ItemGroup_ProjectReference(strFileContent);

	PrecompiledHeaderOutputFile(strFileContent);
	TypeLibraryName(strFileContent);

	strFileContent.Replace("%(AdditionalIncludeDirectories);", "");
	strFileContent.Replace("%(AdditionalIncludeDirectories)", "");
	strFileContent.Replace("%(PreprocessorDefinitions);", "");
	strFileContent.Replace("%(PreprocessorDefinitions)", "");
	strFileContent.Replace("%(AdditionalDependencies);", "");
	strFileContent.Replace("%(AdditionalDependencies)", "");
	strFileContent.Replace("%(AdditionalLibraryDirectories);", "");
	strFileContent.Replace("%(AdditionalLibraryDirectories)", "");
	
}

void Vcxproj_Process_dll(CString& strFileContent)
{
	Vcxproj_Process_Common(strFileContent);

	OutDir_dll_exe(strFileContent);
	AdditionalLibraryDirectories_dll_exe(strFileContent);	
	ImportLibrary_dll(strFileContent);
}

void Vcxproj_Process_exe(CString& strFileContent)
{
	Vcxproj_Process_Common(strFileContent);

	OutDir_dll_exe(strFileContent);
	AdditionalLibraryDirectories_dll_exe(strFileContent);
	ImportLibrary_exe(strFileContent);
}

void Vcxproj_Process_Utility(CString& strFileContent)
{
	Vcxproj_Process_Common(strFileContent);

	OutDir_dll_exe(strFileContent);
	AdditionalLibraryDirectories_dll_exe(strFileContent);
	ImportLibrary_exe(strFileContent);
}

bool IsLib(const CString& strFilePathName)
{
	bool bReturn = false;
	CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePathName);
	enumConfigurationType enumType = GetConfigurationType(strFileContent);
	switch (enumType)
	{
	case enumConfigurationType_lib:
		bReturn = true;
		break;
	default:
		break;
	}
	return bReturn;
}

void Vcxproj_Remove_Utility(const CString& strFilePathName)
{
	CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePathName);

	enumConfigurationType enumType = GetConfigurationType(strFileContent);
	switch (enumType)
	{	
	case enumConfigurationType_Utility:
	{
		sdk::fileutil::DeleteFileA(strFilePathName);
		CString strFilter = strFilePathName + ".filters";
		sdk::fileutil::DeleteFileA(strFilter);
	}
		
		break;
	default:
		break;
	}	
}

void Vcxproj_Remove_ProjectName(const CString& strFilePathName)
{
	CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePathName);
	
	CString strTagBegin = "<ProjectName>";
	CString strTagEnd = "</ProjectName>";
	CStringArray arrReturn;
	sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin, strTagEnd, arrReturn);
	for (int index = 0; index < arrReturn.GetCount(); index++)
	{
		CString strTemp = arrReturn.GetAt(index);
		strFileContent.Replace(strTemp, "");
	}

	sdk::fileutil::SaveStringToFile(strFilePathName, strFileContent);
}

void Vcxproj_Remove_Resourcecompile(const CString& strFilePathName)
{
	CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePathName);

	CString strTagBegin = "<ResourceCompile>";
	CString strTagEnd = "</ResourceCompile>";
	CStringArray arrReturn;
	sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin, strTagEnd, arrReturn);
	for (int index = 0; index < arrReturn.GetCount(); index++)
	{
		CString strTemp = arrReturn.GetAt(index);
		strFileContent.Replace(strTemp, "");
	}

	sdk::fileutil::SaveStringToFile(strFilePathName, strFileContent);
}

void Vcxproj_Remove_Midl(const CString& strFilePathName)
{
	CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePathName);

	CString strTagBegin = "<Midl>";
	CString strTagEnd = "</Midl>";
	CStringArray arrReturn;
	sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin, strTagEnd, arrReturn);
	for (int index = 0; index < arrReturn.GetCount(); index++)
	{
		CString strTemp = arrReturn.GetAt(index);
		strFileContent.Replace(strTemp, "");
	}

	sdk::fileutil::SaveStringToFile(strFilePathName, strFileContent);
}

void Vcxproj_Remove_Resource(const CString& strFilePathName)
{
	CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePathName);

	CString strTagBegin = "<ResourceCompile>";
	CString strTagEnd = "</ResourceCompile>";
	CStringArray arrReturn;
	sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin, strTagEnd, arrReturn);
	for (int index = 0; index < arrReturn.GetCount(); index++)
	{
		CString strTemp = arrReturn.GetAt(index);
		strFileContent.Replace(strTemp, "");
	}

	sdk::fileutil::SaveStringToFile(strFilePathName, strFileContent);
}

void Vcxproj_Remove_Forcedincludefiles(const CString& strFilePathName)
{
	CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePathName);

	CString strTagBegin = "<ForcedIncludeFiles";
	CString strTagEnd = "</ForcedIncludeFiles>";
	CStringArray arrReturn;
	sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin, strTagEnd, arrReturn);
	for (int index = 0; index < arrReturn.GetCount(); index++)
	{
		CString strTemp = arrReturn.GetAt(index);
		strFileContent.Replace(strTemp, "");
	}

	sdk::fileutil::SaveStringToFile(strFilePathName, strFileContent);
}

void Vcxproj_Remove_DebugInformationFormat(const CString& strFilePathName)
{
	CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePathName);

	CString strTagBegin = "<DebugInformationFormat";
	CString strTagEnd = "</DebugInformationFormat>";
	CStringArray arrReturn;
	sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin, strTagEnd, arrReturn);
	for (int index = 0; index < arrReturn.GetCount(); index++)
	{
		CString strTemp = arrReturn.GetAt(index);
		strFileContent.Replace(strTemp, "");
	}

	sdk::fileutil::SaveStringToFile(strFilePathName, strFileContent);
}

void Vcxproj_Remove_Bscmake(const CString& strFilePathName)
{
	CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePathName);

	CString strTagBegin = "<Bscmake";
	CString strTagEnd = "</Bscmake>";
	CStringArray arrReturn;
	sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin, strTagEnd, arrReturn);
	for (int index = 0; index < arrReturn.GetCount(); index++)
	{
		CString strTemp = arrReturn.GetAt(index);
		strFileContent.Replace(strTemp, "");
	}

	sdk::fileutil::SaveStringToFile(strFilePathName, strFileContent);
}

void Vcxproj_Remove_Afxdll(const CString& strFilePathName)
{
	CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePathName);

	//<PreprocessorDefinitions>
	CString strTagOld = "<PreprocessorDefinitions>";
	CString strTagNew = "<PreprocessorDefinitions>_AFXDLL;";
	CString strTagNew1 = "<PreprocessorDefinitions>_AFXDLL;_AFXDLL;";
	strFileContent.Replace("<PreprocessorDefinitions>_Afxdll;", "<PreprocessorDefinitions>");
	strFileContent.Replace(strTagOld, strTagNew);
	strFileContent.Replace(strTagNew1, strTagNew);

	sdk::fileutil::SaveStringToFile(strFilePathName, strFileContent);
}

void Vcxproj_Remove_Postbuildevent(const CString& strFilePathName)
{
	CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePathName);

	CString strTagBegin = "<Postbuildevent>";
	CString strTagEnd = "</Postbuildevent>";
	CStringArray arrReturn;
	sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin, strTagEnd, arrReturn);
	for (int index = 0; index < arrReturn.GetCount(); index++)
	{
		CString strTemp = arrReturn.GetAt(index);
		strFileContent.Replace(strTemp, "");
	}

	sdk::fileutil::SaveStringToFile(strFilePathName, strFileContent);
}



void Vcxproj_PreferredToolArchitecture(const CString& strFilePathName)
{
	CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePathName);

	CString strTagBegin = "<PreferredToolArchitecture>";
	CString strTagEnd = "</PreferredToolArchitecture>";
	CStringArray arrReturn;
	sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin, strTagEnd, arrReturn);
	for (int index = 0; index < arrReturn.GetCount(); index++)
	{
		CString strTemp = arrReturn.GetAt(index);
		strFileContent.Replace(strTemp, "");
	}


	CString str_00 = "<PropertyGroup Label=\"Globals\">";
	CString str_01 = "<PropertyGroup Label=\"Globals\">\r\n<PreferredToolArchitecture>x64</PreferredToolArchitecture>";
	strFileContent.Replace(str_00, str_01);

	sdk::fileutil::SaveStringToFile(strFilePathName, strFileContent);
}


void Vcxproj_Process_lib(CString& strFileContent)
{
	Vcxproj_Process_Common(strFileContent);

	OutDir_lib(strFileContent);
}



std::string GuidToString()
{
	GUID guid;
	CoCreateGuid(&guid);	
	char buf[64] = { 0 };
	sprintf_s(buf, sizeof(buf), "{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}",
		guid.Data1, guid.Data2, guid.Data3,
		guid.Data4[0], guid.Data4[1],
		guid.Data4[2], guid.Data4[3],
		guid.Data4[4], guid.Data4[5],
		guid.Data4[6], guid.Data4[7]);
	return std::string(buf);
}