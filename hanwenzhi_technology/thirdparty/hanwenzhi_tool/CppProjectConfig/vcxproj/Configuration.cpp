#include "stdafx.h"
#include "Configuration.h"



void Delete_ProjectConfiguration(CString& strFileContent, const CString& strTagBegin, const CString& strTagEnd, const CString& strConfiguration)
{
	CStringArray arrReturn;
	sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin, strTagEnd, arrReturn);
	for (int index = 0; index < arrReturn.GetCount(); index++)
	{
		CString strTemp = arrReturn.GetAt(index);
		int iIndex = strTemp.Find(strConfiguration);
		int iIndex1 = strTemp.Find(">");
		if (iIndex != -1 && iIndex < iIndex1)
		{
			strFileContent.Replace(strTemp, "");
		}
	}
}

void Delete_ItemGroup_ProjectConfiguration(CString& strFileContent, const CString& strConfiguration)
{
	CString strTagBegin = "<ProjectConfiguration";
	CString strTagEnd = "</ProjectConfiguration>";
	Delete_ProjectConfiguration(strFileContent, strTagBegin, strTagEnd, strConfiguration);
}

void Delete_PropertyGroup(CString& strFileContent, const CString& strConfiguration)
{
	CString strTagBegin = "<PropertyGroup";
	CString strTagEnd = "</PropertyGroup>";
	Delete_ProjectConfiguration(strFileContent, strTagBegin, strTagEnd, strConfiguration);
}

void Delete_PropertyGroup_Child(CString& strFileContent, const CString& strConfiguration)
{
	Delete_ProjectConfiguration(strFileContent, "<OutDir", "</OutDir>", strConfiguration);
	Delete_ProjectConfiguration(strFileContent, "<IntDir", "</IntDir>", strConfiguration);
	Delete_ProjectConfiguration(strFileContent, "<TargetName", "</TargetName>", strConfiguration);
	Delete_ProjectConfiguration(strFileContent, "<LinkIncremental", "</LinkIncremental>", strConfiguration);
	Delete_ProjectConfiguration(strFileContent, "<GenerateManifest", "</GenerateManifest>", strConfiguration);

	Delete_ProjectConfiguration(strFileContent, "<LocalDebuggerCommandArguments", "</LocalDebuggerCommandArguments>", strConfiguration);
	Delete_ProjectConfiguration(strFileContent, "<LocalDebuggerWorkingDirectory", "</LocalDebuggerWorkingDirectory>", strConfiguration);
	Delete_ProjectConfiguration(strFileContent, "<CodeAnalysisRuleSet", "</CodeAnalysisRuleSet>", strConfiguration);
	Delete_ProjectConfiguration(strFileContent, "<CodeAnalysisRules", "/>", strConfiguration);
	Delete_ProjectConfiguration(strFileContent, "<CodeAnalysisRuleAssemblies", "/>", strConfiguration);

	Delete_ProjectConfiguration(strFileContent, "<IncludePath", "</IncludePath>", strConfiguration);
	Delete_ProjectConfiguration(strFileContent, "<LibraryPath", "</LibraryPath>", strConfiguration);	

	Delete_ProjectConfiguration(strFileContent, "<PrecompiledHeader", "</PrecompiledHeader>", strConfiguration);
	Delete_ProjectConfiguration(strFileContent, "<ExtensionsToDeleteOnClean", "</ExtensionsToDeleteOnClean>", strConfiguration);
	Delete_ProjectConfiguration(strFileContent, "<EmbedManifest", "</EmbedManifest>", strConfiguration);

	Delete_ProjectConfiguration(strFileContent, "<ObjectFileName", "</ObjectFileName>", strConfiguration);
	Delete_ProjectConfiguration(strFileContent, "<XMLDocumentationFileName", "</XMLDocumentationFileName>", strConfiguration);
	
}

void Delete_ImportGroup(CString& strFileContent, const CString& strConfiguration)
{
	CString strTagBegin = "<ImportGroup";
	CString strTagEnd = "</ImportGroup>";
	Delete_ProjectConfiguration(strFileContent, strTagBegin, strTagEnd, strConfiguration);
}

void Delete_ItemDefinitionGroup(CString& strFileContent, const CString& strConfiguration)
{
	CString strTagBegin = "<ItemDefinitionGroup";
	CString strTagEnd = "</ItemDefinitionGroup>";
	Delete_ProjectConfiguration(strFileContent, strTagBegin, strTagEnd, strConfiguration);
}

void Delete_ImportGroup_ClCompile_ExcludedFromBuild(CString& strFileContent, const CString& strConfiguration)
{
	CString strTagBegin = "<ExcludedFromBuild";
	CString strTagEnd = "</ExcludedFromBuild>";
	Delete_ProjectConfiguration(strFileContent, strTagBegin, strTagEnd, strConfiguration);
}

void Delete_CustomBuild(CString& strFileContent, const CString& strConfiguration)
{
	CString strTagBegin = "<CustomBuild";
	CString strTagEnd = "</CustomBuild>";
	Delete_ProjectConfiguration(strFileContent, strTagBegin, strTagEnd, strConfiguration);
}

void Delete_Command(CString& strFileContent, const CString& strConfiguration)
{
	strFileContent.Replace("<Command />", "");
	CString strTagBegin = "<Command";
	CString strTagEnd = "</Command>";
	Delete_ProjectConfiguration(strFileContent, strTagBegin, strTagEnd, strConfiguration);
}

void Delete_Message(CString& strFileContent, const CString& strConfiguration)
{
	strFileContent.Replace("<Message />", "");
	CString strTagBegin = "<Message";
	CString strTagEnd = "</Message>";
	Delete_ProjectConfiguration(strFileContent, strTagBegin, strTagEnd, strConfiguration);
}

void Delete_Outputs(CString& strFileContent, const CString& strConfiguration)
{
	CString strTagBegin = "<Outputs";
	CString strTagEnd = "</Outputs>";
	Delete_ProjectConfiguration(strFileContent, strTagBegin, strTagEnd, strConfiguration);
}

void Delete_AdditionalIncludeDirectories(CString& strFileContent, const CString& strConfiguration)
{
	CString strTagBegin = "<AdditionalIncludeDirectories";
	CString strTagEnd = "</AdditionalIncludeDirectories>";
	Delete_ProjectConfiguration(strFileContent, strTagBegin, strTagEnd, strConfiguration);
}

void Delete_AdditionalInputs(CString& strFileContent, const CString& strConfiguration)
{
	CString strTagBegin = "<AdditionalInputs";
	CString strTagEnd = "</AdditionalInputs>";
	Delete_ProjectConfiguration(strFileContent, strTagBegin, strTagEnd, strConfiguration);
}

void Delete_PreprocessorDefinitions(CString& strFileContent, const CString& strConfiguration)
{
	CString strTagBegin = "<PreprocessorDefinitions";
	CString strTagEnd = "</PreprocessorDefinitions>";
	Delete_ProjectConfiguration(strFileContent, strTagBegin, strTagEnd, strConfiguration);
}

void Delete_WarningLevel(CString& strFileContent, const CString& strConfiguration)
{
	CString strTagBegin = "<WarningLevel";
	CString strTagEnd = "</WarningLevel>";
	Delete_ProjectConfiguration(strFileContent, strTagBegin, strTagEnd, strConfiguration);
}

void Delete_AdditionalOptions(CString& strFileContent, const CString& strConfiguration)
{
	CString strTagBegin = "<AdditionalOptions";
	CString strTagEnd = "</AdditionalOptions>";
	Delete_ProjectConfiguration(strFileContent, strTagBegin, strTagEnd, strConfiguration);
}


void Delete_TypeLibraryName(CString& strFileContent, const CString& strConfiguration)
{
	CString strTagBegin = "<TypeLibraryName";
	CString strTagEnd = "</TypeLibraryName>";
	Delete_ProjectConfiguration(strFileContent, strTagBegin, strTagEnd, strConfiguration);
}

void Delete_HeaderFileName(CString& strFileContent, const CString& strConfiguration)
{
	CString strTagBegin = "<HeaderFileName";
	CString strTagEnd = "</HeaderFileName>";
	Delete_ProjectConfiguration(strFileContent, strTagBegin, strTagEnd, strConfiguration);
}
void Delete_InterfaceIdentifierFileName(CString& strFileContent, const CString& strConfiguration)
{
	CString strTagBegin = "<InterfaceIdentifierFileName";
	CString strTagEnd = "</InterfaceIdentifierFileName>";
	Delete_ProjectConfiguration(strFileContent, strTagBegin, strTagEnd, strConfiguration);
}
void Delete_GenerateStublessProxies(CString& strFileContent, const CString& strConfiguration)
{
	CString strTagBegin = "<GenerateStublessProxies";
	CString strTagEnd = "</GenerateStublessProxies>";
	Delete_ProjectConfiguration(strFileContent, strTagBegin, strTagEnd, strConfiguration);
}
void Delete_TargetEnvironment(CString& strFileContent, const CString& strConfiguration)
{
	CString strTagBegin = "<TargetEnvironment";
	CString strTagEnd = "</TargetEnvironment>";
	Delete_ProjectConfiguration(strFileContent, strTagBegin, strTagEnd, strConfiguration);
}
void Delete_PrecompiledHeader(CString& strFileContent, const CString& strConfiguration)
{
	CString strTagBegin = "<PrecompiledHeader";
	CString strTagEnd = "</PrecompiledHeader>";
	Delete_ProjectConfiguration(strFileContent, strTagBegin, strTagEnd, strConfiguration);
}
void Delete_PrecompiledHeaderFile(CString& strFileContent, const CString& strConfiguration)
{
	CString strTagBegin = "<PrecompiledHeaderFile";
	CString strTagEnd = "</PrecompiledHeaderFile>";
	Delete_ProjectConfiguration(strFileContent, strTagBegin, strTagEnd, strConfiguration);

}