#include "pch.h"
#include "svn_method.h"


void GetFileInfoToArrayFromFile(CStringArray& arr, const CString& strFileName)
{
	CString strExeDir = sdk::CProcessUtil::GetExeDir();
	CString strFileFullPath = strExeDir + "\\" + strFileName;
	CString strFileContent = sdk::fileutil::GetStringFromFile(strFileFullPath);
	sdk::stringutil::SplitStringWithEx(strFileContent, arr, "\r\n");





}

void git_tool_process()
{
	//读取svn_tool.txt内容，按行解析关键字
	CStringArray arrReturn;
	CString strExeDir = sdk::CProcessUtil::GetExeDir();
	CString strFileFullPath = strExeDir + "\\" + FILE_NAME;
	CString strFileContent = sdk::fileutil::GetStringFromFile(strFileFullPath);
	sdk::stringutil::SplitStringWithEx(strFileContent, arrReturn, "\r\n");

	
	CString strFile_Checkout = "hanwenzhi_code_checkout.bat";
	strFile_Checkout = strExeDir + "\\" + strFile_Checkout;
	CString strCheckoutContent;
	CString strFile_Cleanup = "hanwenzhi_code_cleanup.bat";
	strFile_Cleanup = strExeDir + "\\" + strFile_Cleanup;
	CString strCleanupContent;

	CString strCheckoutTemplate = "\"./svn_tool/svn.exe\" checkout https://127.0.0.1:8443/svn/XXXXXX/ ../XXXXXX/ --username hanwenzhi --password 123456";
	CString strCleanupTemplate = "\"./svn_tool/svn.exe\" cleanup ../XXXXXX/ --username hanwenzhi --password 123456";

	//"./svn_tool/svn.exe" checkout https://127.0.0.1:8443/svn/ace/ ../ace/ --username hanwenzhi --password 123456
	//svn清理
	for (int index = 0; index < arrReturn.GetCount(); index++)
	{
		CString strTemp = arrReturn.GetAt(index);
		strTemp.Trim();
		CString strCheckoutTemplate_ = strCheckoutTemplate;
		strCheckoutTemplate_.Replace("XXXXXX", strTemp);
		strCheckoutContent = strCheckoutContent + strCheckoutTemplate_ + "\r\n";

		CString strCleanupTemplate_ = strCleanupTemplate;
		strCleanupTemplate_.Replace("XXXXXX", strTemp);
		strCleanupContent = strCleanupContent + strCleanupTemplate_ + "\r\n";
	}

	strCheckoutContent += "pause";
	strCleanupContent += "pause";

	sdk::fileutil::SaveStringToFile(strFile_Checkout, strCheckoutContent);
	sdk::fileutil::SaveStringToFile(strFile_Cleanup, strCleanupContent);
	//svn更新

	//sdk::processutil::RunExeAndWaitEnd(strFile_Cleanup);
	//sdk::processutil::RunExeAndWaitEnd(strFile_Checkout);
}