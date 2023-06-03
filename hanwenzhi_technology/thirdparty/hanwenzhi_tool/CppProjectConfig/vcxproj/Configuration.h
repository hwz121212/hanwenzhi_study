#pragma once


void Delete_ProjectConfiguration(CString& strFileContent, const CString& strTagBegin, const CString& strTagEnd, const CString& strConfiguration);

void Delete_ItemGroup_ProjectConfiguration(CString& strFileContent, const CString& strConfiguration);
void Delete_PropertyGroup(CString& strFileContent, const CString& strConfiguration);
void Delete_PropertyGroup_Child(CString& strFileContent, const CString& strConfiguration);
void Delete_ImportGroup(CString& strFileContent, const CString& strConfiguration);
void Delete_ItemDefinitionGroup(CString& strFileContent, const CString& strConfiguration);
void Delete_ImportGroup_ClCompile_ExcludedFromBuild(CString& strFileContent, const CString& strConfiguration);
void Delete_CustomBuild(CString& strFileContent, const CString& strConfiguration);

void Delete_Command(CString& strFileContent, const CString& strConfiguration);
void Delete_Message(CString& strFileContent, const CString& strConfiguration);
void Delete_Outputs(CString& strFileContent, const CString& strConfiguration);
void Delete_AdditionalIncludeDirectories(CString& strFileContent, const CString& strConfiguration);
void Delete_AdditionalInputs(CString& strFileContent, const CString& strConfiguration);
void Delete_PreprocessorDefinitions(CString& strFileContent, const CString& strConfiguration);

void Delete_WarningLevel(CString& strFileContent, const CString& strConfiguration);
void Delete_AdditionalOptions(CString& strFileContent, const CString& strConfiguration);



void Delete_TypeLibraryName(CString& strFileContent, const CString& strConfiguration);
void Delete_HeaderFileName(CString& strFileContent, const CString& strConfiguration);
void Delete_InterfaceIdentifierFileName(CString& strFileContent, const CString& strConfiguration);
void Delete_GenerateStublessProxies(CString& strFileContent, const CString& strConfiguration);
void Delete_TargetEnvironment(CString& strFileContent, const CString& strConfiguration);
void Delete_PrecompiledHeader(CString& strFileContent, const CString& strConfiguration);
void Delete_PrecompiledHeaderFile(CString& strFileContent, const CString& strConfiguration);






