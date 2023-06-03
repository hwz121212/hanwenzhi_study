#include "stdafx.h"
#include "PropertyGroup.h"


enumConfigurationType GetConfigurationType(const CString& strFileContent)
{
	enumConfigurationType enumReturn = enumConfigurationType_unknown;
	CString strTagBegin = "<ConfigurationType>";
	CString strTagEnd = "</ConfigurationType>";
	CString strConfigurationType = sdk::stringutil::GetStringIn(strFileContent, strTagBegin, strTagEnd);
	if (strConfigurationType.Compare("DynamicLibrary") == 0)
	{
		enumReturn = enumConfigurationType_dll;
	}
	else if (strConfigurationType.Compare("Application") == 0)
	{
		enumReturn = enumConfigurationType_exe;
	}
	else if (strConfigurationType.Compare("StaticLibrary") == 0)
	{
		enumReturn = enumConfigurationType_lib;
	}
	else if (strConfigurationType.Compare("Utility") == 0)
	{
		enumReturn = enumConfigurationType_Utility;
	}
	return enumReturn;
}

void SetValue_WithAttribute(CString& strFileContent, const CString& strTagBegin, const CString& strTagEnd, const CString& strValue)
{
	CStringArray arrReturn;
	sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin, strTagEnd, arrReturn);
	for (int index = 0; index < arrReturn.GetCount(); index++)
	{
		CString strTemp = arrReturn.GetAt(index);		
		CString strTag1 = sdk::stringutil::GetStringInWithTag(strTemp, strTagBegin, ">");
		if (strValue.IsEmpty())
		{
			strFileContent.Replace(strTemp, "");
		}
		else
		{
			CString strTempNew = strTag1 + strValue + strTagEnd;
			strFileContent.Replace(strTemp, strTempNew);
		}		
	}
}

void SetValueEmptyIfFindStr(CString& strFileContent, const CString& strTagBegin, const CString& strTagEnd, const CString& strFindValue)
{
	CString strOld_000 = "<PropertyGroup Label=\"UserMacros\" />";
	CString strNew_000 = "strNew_000";
	strFileContent.Replace(strOld_000, strNew_000);

	CStringArray arrReturn;
	sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin, strTagEnd, arrReturn);
	for (int index = 0; index < arrReturn.GetCount(); index++)
	{
		CString strTemp = arrReturn.GetAt(index);
		CString strTag1 = sdk::stringutil::GetStringInWithTag(strTemp, strTagBegin, ">");
		if (strTag1.Find(strFindValue) != -1)
		{
			strFileContent.Replace(strTemp, "");
		}
	}

	strFileContent.Replace(strNew_000, strOld_000);
}

//<OutDir Condition="'$(Configuration)|$(Platform)'=='Release|x64'">$(SolutionDir)bin\$(Configuration)\</OutDir>
void OutDir_dll_exe(CString& strFileContent)
{
	SetValue_WithAttribute(strFileContent, "<OutDir", "</OutDir>", "$(SolutionDir)bin\\$(Configuration)\\");
}

//<OutDir>$(SolutionDir)lib\$(Configuration)\</OutDir>
void OutDir_lib(CString& strFileContent)
{	
	SetValue_WithAttribute(strFileContent, "<OutDir", "</OutDir>", "$(SolutionDir)lib\\$(Configuration)\\");
}

//<IntDir>$(SolutionDir)..\Temp\$(SolutionName)\$(ProjectName)\$(Configuration)\</IntDir>
void IntDir(CString& strFileContent)
{
	SetValue_WithAttribute(strFileContent, "<IntDir", "</IntDir>", "$(SolutionDir)..\\Temp\\$(SolutionName)\\$(ProjectName)\\$(Configuration)\\");
}

//<TargetName Condition="'$(Configuration)|$(Platform)'=='Debug|x64'">zlibd</TargetName>
void TargetName(CString& strFileContent)
{
	SetValue_WithAttribute(strFileContent, "<TargetName", "</TargetName>", "");
}

//<TargetExt Condition="'$(Configuration)|$(Platform)'=='Debug|x64'">.dll</TargetExt>
void TargetExt(CString& strFileContent)
{
	SetValue_WithAttribute(strFileContent, "<TargetExt", "</TargetExt>", "");
}

void OutputDirectory(CString& strFileContent)
{
	SetValue_WithAttribute(strFileContent, "<OutputDirectory", "</OutputDirectory>", "");
}

void IntermediateDirectory(CString& strFileContent)
{
	SetValue_WithAttribute(strFileContent, "<IntermediateDirectory", "</IntermediateDirectory>", "");
}

void PrimaryOutput(CString& strFileContent)
{
	SetValue_WithAttribute(strFileContent, "<PrimaryOutput", "</PrimaryOutput>", "");
}


//<PlatformToolset>v141</PlatformToolset>
void PlatformToolset_v141(CString& strFileContent)
{
	SetValue_WithAttribute(strFileContent, "<PlatformToolset", "</PlatformToolset>", "v141");
}

void WindowsTargetPlatformVersion_10_0_17763_0(CString& strFileContent)
{
	SetValue_WithAttribute(strFileContent, "<WindowsTargetPlatformVersion", "</WindowsTargetPlatformVersion>", "10.0.17763.0");
}

void RandomizedBaseAddress(CString& strFileContent)
{
	SetValue_WithAttribute(strFileContent, "<RandomizedBaseAddress", "</RandomizedBaseAddress>", "true");
	SetValue_WithAttribute(strFileContent, "<BaseAddress", "</BaseAddress>", "");
}

void TreatWarningAsError(CString& strFileContent)
{
	SetValue_WithAttribute(strFileContent, "<TreatWarningAsError", "</TreatWarningAsError>", "false");
}