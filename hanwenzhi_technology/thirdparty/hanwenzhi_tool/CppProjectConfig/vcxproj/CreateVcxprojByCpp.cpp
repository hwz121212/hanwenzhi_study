#include "stdafx.h"
#include "CreateVcxprojByCpp.h"


void CreateVcxprojByCpp(const CString& strFilePath)
{
	CString strFileName = sdk::processutil::GetNameWithoutSuffixByPath(strFilePath);
	CString strFileNameWithExt = sdk::processutil::GetNameByPath(strFilePath);
	CString strPath = sdk::processutil::GetPathByFullPath(strFilePath);

	CString strNewFileName11 = strFileName;
	//strNewFileName11.Replace("test", "");

	CString strNewDir = strPath + strNewFileName11;
	sdk::fileutil::CreateMultiDirectory(strNewDir);
	CString strNewFile = strNewDir + "\\" + strFileName + ".cpp";
	sdk::fileutil::CopyFileA(strFilePath, strNewFile);

	//CString  strVcxproj = sdk::CProcessUtil::GetExeDir();
	CString  strVcxproj = strPath + "\\test_aggregator.vcxproj";
	CString  strVcxprojNew = strNewDir + "\\" + strFileName + ".vcxproj";
	//CString  strVcxprojNew = strPath + "\\" + strFileName + ".vcxproj";
	sdk::fileutil::CopyFileA(strVcxproj, strVcxprojNew);

	CString strFileContent;
	strFileContent = sdk::fileutil::GetStringFromFile(strVcxprojNew);
	strFileContent.Replace("test_aggregator.cpp", strFileNameWithExt);

	CString strOld_00 = "<ProjectName>test_aggregator</ProjectName>";
	CString strNew_00 = "<ProjectName>" + strFileName + "</ProjectName>";
	strFileContent.Replace(strOld_00, strNew_00);

	sdk::fileutil::SaveStringToFile(strVcxprojNew, strFileContent);	
}