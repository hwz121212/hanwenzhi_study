#include "pch.h"
#include "git_method.h"



#define FILE_NAME   "git_tool.txt"
#define GITHUB_ADDRESS	"github.com"
#define GITHUB_ADDRESS_IP  "20.205.243.166"




//枚举目录所有的仓库名字,更新"git_tool.txt"
void GenerateGitToolTxt()
{
	CStringArray arrReturn;
	CString strExeDir = sdk::CProcessUtil::GetExeDir();
	CString strFileFullPath = strExeDir + "\\" + FILE_NAME;

	CString strExeDir_Parent_Parent;
	strExeDir_Parent_Parent = strExeDir;
	strExeDir_Parent_Parent = sdk::fileutil::GetParentPath(strExeDir_Parent_Parent);
	strExeDir_Parent_Parent = sdk::fileutil::GetParentPath(strExeDir_Parent_Parent);

	CString strNew;
	CStringArray strDirArray;
	sdk::fileutil::GetAllChildDir_NoRecursion(strExeDir_Parent_Parent, strDirArray);
	for (int iTemp = 0; iTemp < strDirArray.GetSize(); iTemp++)
	{
		CString strTemp1 = strDirArray[iTemp];
		strTemp1.Replace(strExeDir_Parent_Parent + "\\", "");
		strNew = strNew + strTemp1 + "\r\n";
	}

	sdk::fileutil::SaveStringToFile(strFileFullPath, strNew);
}


void GetGitCode_ByGitToolTxt()
{
	//读取git_tool.txt内容，按行解析关键字
	CStringArray arrReturn;
	CString strExeDir = sdk::CProcessUtil::GetExeDir();
	CString strFileFullPath = strExeDir + "\\" + FILE_NAME;
	CString strFileContent = sdk::fileutil::GetStringFromFile(strFileFullPath);
	sdk::stringutil::SplitStringWithEx(strFileContent, arrReturn, "\r\n");

	
	CString strFile_Clone = "hanwenzhi_github_clone.bat";
	strFile_Clone = strExeDir + "\\" + strFile_Clone;
	CString strCloneContent;

	CString strFile_pull = "hanwenzhi_github_pull.bat";
	strFile_pull = strExeDir + "\\" + strFile_pull;
	CString strPullContent;

	CString strFile_push = "hanwenzhi_github_push.bat";
	strFile_push = strExeDir + "\\" + strFile_push;
	CString strPushContent;

	CString strFile_ClonePull = "hanwenzhi_github_clone_pull.bat";
	strFile_ClonePull = strExeDir + "\\" + strFile_ClonePull;
	CString strClonePullContent;

	CString strFile_pull_IP = "hanwenzhi_github_pull_IP.bat";
	strFile_pull_IP = strExeDir + "\\" + strFile_pull_IP;
	CString strPullContent_IP;

	CString strFile_ClonePull_IP = "hanwenzhi_github_clone_pull_IP.bat";
	strFile_ClonePull_IP = strExeDir + "\\" + strFile_ClonePull_IP;
	CString strClonePullContent_IP;
	

	CString strTemplateBegin = "cd ..\\..\\\r\n";
	CString strTemplateEnd = "pause";

	CString strCloneTemplate = "git.exe clone --recursive --branch hanwenzhi git@github.com:hwz121212/XXXXXX.git\r\n";	
	CString strPullTemplate = "cd XXXXXX & git fetch --all & git reset --hard hanwenzhi & git.exe pull git@github.com:hwz121212/XXXXXX.git --allow-unrelated-histories & cd ..\r\n";
	CString strPushTemplate = "cd XXXXXX & git push -v --progress \"origin\" hanwenzhi:hanwenzhi & cd ..\r\n";

	strCloneContent += strTemplateBegin;
	strPullContent += strTemplateBegin;
	strPushContent += strTemplateBegin;
	strClonePullContent += strTemplateBegin;
	for (int index = 0; index < arrReturn.GetCount(); index++)
	{
		CString strTemp = arrReturn.GetAt(index);
		strTemp.Trim();
		CString strCloneTemplate_ = strCloneTemplate;
		strCloneTemplate_.Replace("XXXXXX", strTemp);
		strCloneContent += strCloneTemplate_;

		CString strPullTemplate_ = strPullTemplate;
		strPullTemplate_.Replace("XXXXXX", strTemp);
		strPullContent += strPullTemplate_;

		CString strPushTemplate_ = strPushTemplate;
		strPushTemplate_.Replace("XXXXXX", strTemp);
		strPushContent += strPushTemplate_;

		strClonePullContent += strCloneTemplate_;
		strClonePullContent += strPullTemplate_;
	}
	strCloneContent += strTemplateEnd;
	strPullContent += strTemplateEnd;
	strPushContent += strTemplateEnd;
	strClonePullContent += strTemplateEnd;

	strPullContent_IP = strPullContent;
	strPullContent_IP.Replace(GITHUB_ADDRESS, GITHUB_ADDRESS_IP);
	strClonePullContent_IP = strClonePullContent;
	strClonePullContent_IP.Replace(GITHUB_ADDRESS, GITHUB_ADDRESS_IP);

	sdk::fileutil::SaveStringToFile(strFile_Clone, strCloneContent);
	sdk::fileutil::SaveStringToFile(strFile_pull, strPullContent);
	sdk::fileutil::SaveStringToFile(strFile_push, strPushContent);
	sdk::fileutil::SaveStringToFile(strFile_ClonePull, strClonePullContent);

	sdk::fileutil::SaveStringToFile(strFile_pull_IP, strPullContent_IP);
	sdk::fileutil::SaveStringToFile(strFile_ClonePull_IP, strClonePullContent_IP);

	
	
}