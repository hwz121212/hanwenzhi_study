#pragma once


void Vcxproj_Process_ALL(CString& strFileContent);
void Vcxproj_Process_unknown(CString& strFileContent);		//ÃÊªª.vcxproj.filtersµƒ≈‰÷√

void Vcxproj_Process_Common(CString& strFileContent);
void Vcxproj_Process_dll(CString& strFileContent);
void Vcxproj_Process_exe(CString& strFileContent);
void Vcxproj_Process_lib(CString& strFileContent);
void Vcxproj_Process_Utility(CString& strFileContent);

bool IsLib(const CString& strFilePathName);

void Vcxproj_Remove_Utility(const CString& strFilePathName);
void Vcxproj_Remove_ProjectName(const CString& strFilePathName);
void Vcxproj_Remove_Resourcecompile(const CString& strFilePathName);
void Vcxproj_Remove_Midl(const CString& strFilePathName);
void Vcxproj_Remove_Resource(const CString& strFilePathName);
void Vcxproj_Remove_Forcedincludefiles(const CString& strFilePathName);
void Vcxproj_Remove_DebugInformationFormat(const CString& strFilePathName);
void Vcxproj_Remove_Bscmake(const CString& strFilePathName);
void Vcxproj_Remove_Afxdll(const CString& strFilePathName);
void Vcxproj_Remove_Postbuildevent(const CString& strFilePathName);







//<PreferredToolArchitecture>x64</PreferredToolArchitecture>
void Vcxproj_PreferredToolArchitecture(const CString& strFilePathName);





void Vcxproj_Replace(CString& strFileContent);



void Delete_ProjectConfiguration(const CString& strFilePathName, const CString& strConfiguration);
void Delete_SlnConfiguration(const CString& strFilePathName, const CString& strConfiguration);
void Delete_SlnX86(const CString& strFilePathName);

void ProjectConfiguration_win32_to_x64(const CString& strFilePath);
void SlnConfiguration_win32_to_x64(const CString& strFilePath);

void ProjectConfiguration_x64_to_win32(const CString& strFilePath);
void SlnConfiguration_x64_to_win32(const CString& strFilePath);


std::string GuidToString();

