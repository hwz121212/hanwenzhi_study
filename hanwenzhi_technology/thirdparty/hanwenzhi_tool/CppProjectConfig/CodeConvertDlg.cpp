#include "stdafx.h"
#include "CodeConvert.h"
#include "CodeConvertDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif



CCodeConvertDlg::CCodeConvertDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CCodeConvertDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCodeConvertDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_listFiles);
	DDX_Control(pDX, IDC_EDIT_Configuration, m_editConfiguration);
	DDX_Control(pDX, IDC_EDIT_SLN, m_edit_sln);
	DDX_Control(pDX, IDC_EDIT_NUM, m_edit_num);
	DDX_Control(pDX, IDC_EDIT_Prefix, m_edit_prefix);
	DDX_Control(pDX, IDC_EDIT_suffix, m_edit_suffix);
	DDX_Control(pDX, IDC_EDIT_REMOVE_STR, m_edit_remove_str);
	DDX_Control(pDX, IDC_RICHEDIT_header, m_richedit_header);
	DDX_Control(pDX, IDC_RICHEDIT_lib, m_richedit_lib);
	DDX_Control(pDX, IDC_RICHEDIT_key1, m_richedit_key1);
	DDX_Control(pDX, IDC_EDIT_DIr, m_editDir);
	DDX_Control(pDX, IDC_CHECK_BIN_ADD, m_ctlCheckboxAdd);
}

BEGIN_MESSAGE_MAP(CCodeConvertDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_DROPFILES()
	ON_BN_CLICKED(IDC_BUTTON_Convert, &CCodeConvertDlg::OnBnClickedButtonConvert)
	
	ON_BN_CLICKED(IDC_BUTTON1, &CCodeConvertDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON_Configuration, &CCodeConvertDlg::OnBnClickedButtonConfiguration)
	
	ON_BN_CLICKED(IDC_BUTTON_Win32_to_64, &CCodeConvertDlg::OnBnClickedButtonWin32to64)
	
	ON_BN_CLICKED(IDC_BUTTON_x64_Win32, &CCodeConvertDlg::OnBnClickedButtonx64Win32)
	ON_BN_CLICKED(IDC_BUTTON_Replace_Temp, &CCodeConvertDlg::OnBnClickedButtonReplaceTemp)
	ON_BN_CLICKED(IDC_BUTTON_CREATE_VCXPROJ, &CCodeConvertDlg::OnBnClickedButtonCreateVcxproj)
	ON_BN_CLICKED(IDC_BUTTON_CREATE_By_text, &CCodeConvertDlg::OnBnClickedButtonCreateBytext)
	ON_BN_CLICKED(IDC_BUTTON_Generate_code, &CCodeConvertDlg::OnBnClickedButtonGeneratecode)
	ON_BN_CLICKED(IDC_BUTTON_remove_utility, &CCodeConvertDlg::OnBnClickedButtonremoveutility)
	ON_BN_CLICKED(IDC_BUTTON_REMOVE_PROJECTNAME, &CCodeConvertDlg::OnBnClickedButtonRemoveProjectname)
	ON_BN_CLICKED(IDC_BUTTON_Lib_NAME, &CCodeConvertDlg::OnBnClickedButtonLibName)
	ON_BN_CLICKED(IDC_BUTTON_PreferredToolArchitecture, &CCodeConvertDlg::OnBnClickedButtonPreferredtoolarchitecture)
	ON_BN_CLICKED(IDC_BUTTON_ADD_PREFIX, &CCodeConvertDlg::OnBnClickedButtonAddPrefix)
	ON_BN_CLICKED(IDC_BUTTON_REMOVE_ResourceCompile, &CCodeConvertDlg::OnBnClickedButtonRemoveResourcecompile)
	ON_BN_CLICKED(IDC_BUTTON_REMOVE_Midl, &CCodeConvertDlg::OnBnClickedButtonRemoveMidl)
	ON_BN_CLICKED(IDC_BUTTON_REMOVE_ForcedIncludeFiles, &CCodeConvertDlg::OnBnClickedButtonRemoveForcedincludefiles)
	ON_BN_CLICKED(IDC_BUTTON_REMOVE_VCXPROJ_STR, &CCodeConvertDlg::OnBnClickedButtonRemoveVcxprojStr)
	ON_BN_CLICKED(IDC_BUTTON_RENAME_1, &CCodeConvertDlg::OnBnClickedButtonRename1)
	ON_BN_CLICKED(IDC_BUTTON_Remove_cbt, &CCodeConvertDlg::OnBnClickedButtonRemovecbt)
	ON_BN_CLICKED(IDC_BUTTON_Remove_special, &CCodeConvertDlg::OnBnClickedButtonRemovespecial)
	ON_BN_CLICKED(IDC_BUTTON_qmldir, &CCodeConvertDlg::OnBnClickedButtonqmldir)
	ON_BN_CLICKED(IDC_BUTTON_header, &CCodeConvertDlg::OnBnClickedButtonheader)
	ON_BN_CLICKED(IDC_BUTTON_lib, &CCodeConvertDlg::OnBnClickedButtonlib)
	ON_BN_CLICKED(IDC_BUTTON_libwinmain, &CCodeConvertDlg::OnBnClickedButtonlibwinmain)
	ON_BN_CLICKED(IDC_BUTTON_parent_dep, &CCodeConvertDlg::OnBnClickedButtonparentdep)
	ON_BN_CLICKED(IDC_BUTTON_uic_1, &CCodeConvertDlg::OnBnClickedButtonuic1)
	ON_BN_CLICKED(IDC_BUTTON_uic_2, &CCodeConvertDlg::OnBnClickedButtonuic2)
	ON_BN_CLICKED(IDC_BUTTON_qt_remove, &CCodeConvertDlg::OnBnClickedButtonqtremove)
	ON_BN_CLICKED(IDC_BUTTON_remove_dir, &CCodeConvertDlg::OnBnClickedButtonremovedir)
	ON_BN_CLICKED(IDC_BUTTON_depend, &CCodeConvertDlg::OnBnClickedButtondepend)
	ON_BN_CLICKED(IDC_BUTTON_test, &CCodeConvertDlg::OnBnClickedButtontest)
	ON_BN_CLICKED(IDC_BUTTON_REMOVE_Resource, &CCodeConvertDlg::OnBnClickedButtonRemoveResource)
	ON_BN_CLICKED(IDC_BUTTON_Delete_Dir, &CCodeConvertDlg::OnBnClickedButtonDeleteDir)
	ON_BN_CLICKED(IDC_BUTTON_Temp11, &CCodeConvertDlg::OnBnClickedButtonTemp11)
	ON_BN_CLICKED(IDC_BUTTON_OPEN_URL, &CCodeConvertDlg::OnBnClickedButtonOpenUrl)
	ON_BN_CLICKED(IDC_BUTTON_DebugInformationFormat, &CCodeConvertDlg::OnBnClickedButtonDebuginformationformat)
	ON_BN_CLICKED(IDC_BUTTON_Bscmake, &CCodeConvertDlg::OnBnClickedButtonBscmake)
	ON_BN_CLICKED(IDC_BUTTON_AFXDLL, &CCodeConvertDlg::OnBnClickedButtonAfxdll)
	ON_BN_CLICKED(IDC_BUTTON_Generate2, &CCodeConvertDlg::OnBnClickedButtonGenerate2)
	ON_BN_CLICKED(IDC_BUTTON_BIN_DIR, &CCodeConvertDlg::OnBnClickedButtonBinDir)
	ON_BN_CLICKED(IDC_BUTTON_MT2MD, &CCodeConvertDlg::OnBnClickedButtonMt2md)
	ON_BN_CLICKED(IDC_BUTTON_PostBuildEvent, &CCodeConvertDlg::OnBnClickedButtonPostbuildevent)
END_MESSAGE_MAP()


// CCodeConvertDlg 消息处理程序

BOOL CCodeConvertDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	m_editConfiguration.SetWindowTextA("|Win32");
	m_edit_suffix.SetWindowTextA(".c");

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CCodeConvertDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	CDialogEx::OnSysCommand(nID, lParam);
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CCodeConvertDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CCodeConvertDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CCodeConvertDlg::OnBnClickedButtonConvert()
{
	BOOL bAddDir = m_ctlCheckboxAdd.GetCheck();
	for (int index=0; index<m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		CString strFileName = sdk::processutil::GetNameWithoutSuffixByPath(strFilePath);
		CString strPath = sdk::processutil::GetPathByFullPath(strFilePath);
		CString strDir = sdk::fileutil::GetDirNameByFullPath(strFilePath);

		CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePath);

		Vcxproj_Process_ALL(strFileContent);
		
		if (bAddDir)
		{
			CString str111 = "$(SolutionDir)bin\\$(Configuration)\\";
			str111 += strDir + "\\";
			SetValue_WithAttribute(strFileContent, "<OutDir", "</OutDir>", str111);
		}

		sdk::fileutil::SaveStringToFile(strFilePath, strFileContent);
	}

	AfxMessageBox("replace finished!");	
}

void CCodeConvertDlg::OnDropFiles(HDROP hDropInfo)
{
	m_listFiles.ResetContent();
	// TODO: Add your message handler code here and/or call default
	UINT count;
	char filePath[256];
	count = DragQueryFile(hDropInfo, 0xFFFFFFFF, NULL, 0);
	if(count)
	{
		CString strTotalNum;
		strTotalNum.Format("%d", count);
		m_edit_num.SetWindowTextA(strTotalNum);
		for(UINT i=0; i<count; i++)
		{
			int pathLen = DragQueryFile(hDropInfo, i, filePath, sizeof(filePath));
			CString strTemp = filePath;
			strTemp.Trim();
			strTemp.MakeLower();
			if (strTemp.Find(".sln") != -1)
			{
				m_edit_sln.SetWindowTextA(filePath);
			}
			else if (strTemp.Find(".vcxproj.user") != -1)
			{
				continue;
			}			
			else if (strTemp.Find(".vcxproj") != -1)
			{
				m_listFiles.AddString(filePath);
			}	
			else if (strTemp.Find(".c") != -1)
			{
				m_listFiles.AddString(filePath);
			}
			else if (strTemp.Find(".txt") != -1)
			{
				m_listFiles.AddString(filePath);
			}
			else if (strTemp.Find(".lib") != -1)
			{
				m_listFiles.AddString(filePath);
			}
			else if (strTemp.Find(".a") != -1)
			{
				m_listFiles.AddString(filePath);
			}
			else if (strTemp.Find(".la") != -1)
			{
				m_listFiles.AddString(filePath);
			}
			else if (strTemp.Find(".cc") != -1)
			{
				m_listFiles.AddString(filePath);
			}
		}
	}
	DragFinish(hDropInfo);
	CDialog::OnDropFiles(hDropInfo);
}

void CCodeConvertDlg::OnBnClickedButton1()
{
	//.c
	CString strSuffix;
	m_edit_suffix.GetWindowTextA(strSuffix);
	strSuffix.Trim();

	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		CString strFileName = sdk::processutil::GetNameWithoutSuffixByPath(strFilePath);
		CString strPath = sdk::processutil::GetPathByFullPath(strFilePath);
		CString strNewDir = strPath + strFileName;
		sdk::fileutil::CreateMultiDirectory(strNewDir);
		CString strNewFile = strNewDir + "\\" + strFileName + strSuffix;
		sdk::fileutil::CopyFileA(strFilePath, strNewFile);
		sdk::fileutil::DeleteFileA(strFilePath);

		//CString strExeDir = sdk::CProcessUtil::GetExeDir();
		//CString  strVcxproj = strExeDir + "\\template_exe.vcxproj";

		CString  strVcxproj = strPath;
		strVcxproj = sdk::fileutil::GetParentPath(strPath);
		strVcxproj = strVcxproj + "\\carrots.vcxproj";
		CString  strVcxprojNew = strNewDir + "\\" + strFileName + ".vcxproj";
		sdk::fileutil::CopyFileA(strVcxproj, strVcxprojNew);

		CString strFileContent;
		strFileContent = sdk::fileutil::GetStringFromFile(strVcxprojNew);
		strFileContent.Replace("carrots", strFileName);
		sdk::fileutil::SaveStringToFile(strVcxprojNew, strFileContent);	


	}

	AfxMessageBox("replace finished!");



	//ascii_tag_linux.vcxproj
	//ascii_tag_linux.vcxproj.user


	//for (int index = 0; index < m_listFiles.GetCount(); index++)
	//{
	//	CString strFilePath;
	//	m_listFiles.GetText(index, strFilePath);
	//	CString strFileName = sdk::processutil::GetNameWithoutSuffixByPath(strFilePath);

	//	CString strPath = sdk::processutil::GetPathByFullPath(strFilePath);	

	//	CString  strVcxproj = strPath + "\\ascii_tag_linux.vcxproj";
	//	CString  strVcxprojNew = strPath + "\\" + strFileName + "_linux.vcxproj";
	//	sdk::fileutil::CopyFileA(strVcxproj, strVcxprojNew);

	//	CString strFileContent;
	//	strFileContent = sdk::fileutil::GetStringFromFile(strVcxprojNew);
	//	strFileContent.Replace("ascii_tag", strFileName);
	//	sdk::fileutil::SaveStringToFile(strVcxprojNew, strFileContent);

	//	//ascii_tag_linux.vcxproj.user

	//	CString  strVcxprojUser = strPath + "\\ascii_tag_linux.vcxproj.user";
	//	CString  strVcxprojUserNew = strPath + "\\" + strFileName + "_linux.vcxproj.user";
	//	sdk::fileutil::CopyFileA(strVcxprojUser, strVcxprojUserNew);

	//}

	//AfxMessageBox("replace finished!");




}


void CCodeConvertDlg::OnBnClickedButtonConfiguration()
{
	CString strTemp;
	m_editConfiguration.GetWindowTextA(strTemp);
	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		Delete_ProjectConfiguration(strFilePath, strTemp);
	}

	CString strFilePathNameSln;
	m_edit_sln.GetWindowTextA(strFilePathNameSln);
	Delete_SlnConfiguration(strFilePathNameSln, strTemp);
	Delete_SlnX86(strFilePathNameSln);

	AfxMessageBox("replace finished!");
}


void CCodeConvertDlg::OnBnClickedButtonWin32to64()
{
	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		ProjectConfiguration_win32_to_x64((LPTSTR)(LPCTSTR)strFilePath);
	}

	CString strFilePathNameSln;
	m_edit_sln.GetWindowTextA(strFilePathNameSln);
	SlnConfiguration_win32_to_x64(strFilePathNameSln);
	AfxMessageBox("replace finished!");
}

void CCodeConvertDlg::OnBnClickedButtonx64Win32()
{
	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		ProjectConfiguration_x64_to_win32((LPTSTR)(LPCTSTR)strFilePath);
	}

	CString strFilePathNameSln;
	m_edit_sln.GetWindowTextA(strFilePathNameSln);
	SlnConfiguration_x64_to_win32(strFilePathNameSln);

	AfxMessageBox("replace finished!");
}


void CCodeConvertDlg::OnBnClickedButtonReplaceTemp()
{
	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePath);
		strFileContent.Replace("d.lib", ".lib");
		strFileContent.Replace("uui.lib", "uuid.lib");
		sdk::fileutil::SaveStringToFile(strFilePath, strFileContent);
	}
	
	AfxMessageBox("replace finished!");
}


void CCodeConvertDlg::OnBnClickedButtonCreateVcxproj()
{
	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		CreateVcxprojByCpp(strFilePath);
	}

	AfxMessageBox("Create Finished!");
}


void CCodeConvertDlg::OnBnClickedButtonCreateBytext()
{
	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);

		CStringArray arr;
		CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePath);
		CString strPath = sdk::processutil::GetPathByFullPath(strFilePath);
		sdk::stringutil::SplitStringWithEx(strFileContent, arr, "\r\n");
		for (int iTemp = 0; iTemp < arr.GetCount(); iTemp++)
		{
			CString strTemp = arr.GetAt(iTemp);
			CString strNewDir = strPath + strTemp;
			sdk::fileutil::CreateMultiDirectory(strNewDir);

			CString  strVcxproj = strPath + "template_exe.vcxproj";
			CString  strVcxprojNew = strNewDir + "\\" + strTemp + ".vcxproj";
			sdk::fileutil::CopyFileA(strVcxproj, strVcxprojNew);

		}
	}

	AfxMessageBox("replace finished!");
}


void CCodeConvertDlg::OnBnClickedButtonGeneratecode()
{
	CString strTemp_01 = "Project(\"{8BC9CEB8-8B4A-11D0-8D11-00A0C91BC942}\") = \"ProjectName\", \"ProjectDir\\ProjectName\\ProjectName.vcxproj\", \"ProjectGuid\"\r\nEndProject\r\n";
	CString strTemp_02 = "ProjectGuid.Debug|x64.ActiveCfg = Debug|x64\r\nProjectGuid.Debug|x64.Build.0 = Debug|x64\r\nProjectGuid.Release|x64.ActiveCfg = Release|x64\r\nProjectGuid.Release|x64.Build.0 = Release|x64\r\n";
	CString strTemp_03 = "ProjectGuid = {FilterGuid}\r\n";

	CStringArray arr1;
	CStringArray arr2;
	CStringArray arr3;

	CString strFileContent;
	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		CString strFileName = sdk::processutil::GetNameWithoutSuffixByPath(strFilePath);
		CString strTemp_01_new = strTemp_01;
		strTemp_01_new.Replace("ProjectName", strFileName);
		std::string strGuid = GuidToString();
		strTemp_01_new.Replace("ProjectGuid", strGuid.c_str());
		arr1.Add(strTemp_01_new);

		CString strTemp_02_new = strTemp_02;
		strTemp_02_new.Replace("ProjectGuid", strGuid.c_str());
		arr2.Add(strTemp_02_new);

		CString strTemp_03_new = strTemp_03;
		strTemp_03_new.Replace("ProjectGuid", strGuid.c_str());
		arr3.Add(strTemp_03_new);
	}


	for (int index=0; index< arr1.GetCount(); index++)
	{
		strFileContent += arr1.GetAt(index);
	}
	strFileContent + "\r\n\r\n\r\n";
	for (int index = 0; index < arr2.GetCount(); index++)
	{
		strFileContent += arr2.GetAt(index);
	}
	strFileContent + "\r\n\r\n\r\n";
	for (int index = 0; index < arr3.GetCount(); index++)
	{
		strFileContent += arr3.GetAt(index);
	}
	strFileContent + "\r\n\r\n\r\n";


	sdk::fileutil::SaveStringToFile("11111.txt", strFileContent);

	AfxMessageBox("generate finished!");
}


void CCodeConvertDlg::OnBnClickedButtonremoveutility()
{
	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		Vcxproj_Remove_Utility(strFilePath);
	}

	AfxMessageBox("replace finished!");
}


void CCodeConvertDlg::OnBnClickedButtonRemoveProjectname()
{
	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		Vcxproj_Remove_ProjectName(strFilePath);
	}

	AfxMessageBox("replace finished!");
}


void CCodeConvertDlg::OnBnClickedButtonLibName()
{
	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		Vcxproj_Remove_ProjectName(strFilePath);
		if (IsLib(strFilePath))
		{
			CString strFileName = sdk::processutil::GetNameByPath(strFilePath);
			CString strPath = sdk::processutil::GetPathByFullPath(strFilePath);
			CString strNewDir = strPath + "\\lib" + strFileName;
			sdk::fileutil::RenameFile(strFilePath, strNewDir);
			sdk::fileutil::RenameFile(strFilePath + ".filters", strNewDir + ".filters");
			sdk::fileutil::RenameFile(strFilePath + ".user", strNewDir + ".user");
		}		
	}
	AfxMessageBox("replace finished!");
}


void CCodeConvertDlg::OnBnClickedButtonPreferredtoolarchitecture()
{
	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		Vcxproj_PreferredToolArchitecture(strFilePath);
	}

	AfxMessageBox("replace finished!");
}


void CCodeConvertDlg::OnBnClickedButtonAddPrefix()
{
	CString strPrefix;
	m_edit_prefix.GetWindowTextA(strPrefix);
	strPrefix.Trim();
	strPrefix += "_";

	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		Vcxproj_Remove_ProjectName(strFilePath);
		
		CString strFileName = sdk::processutil::GetNameByPath(strFilePath);
		CString strPath = sdk::processutil::GetPathByFullPath(strFilePath);
		CString strNewDir = strPath + strPrefix + strFileName;
		sdk::fileutil::RenameFile(strFilePath, strNewDir);
		sdk::fileutil::RenameFile(strFilePath + ".filters", strNewDir + ".filters");
		sdk::fileutil::RenameFile(strFilePath + ".user", strNewDir + ".user");

	}

	AfxMessageBox("replace finished!");
}


void CCodeConvertDlg::OnBnClickedButtonRemoveResourcecompile()
{
	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		Vcxproj_Remove_Resourcecompile(strFilePath);
	}

	AfxMessageBox("replace finished!");
}


void CCodeConvertDlg::OnBnClickedButtonRemoveMidl()
{
	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		Vcxproj_Remove_Midl(strFilePath);
	}

	AfxMessageBox("replace finished!");
}


void CCodeConvertDlg::OnBnClickedButtonRemoveForcedincludefiles()
{
	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		Vcxproj_Remove_Forcedincludefiles(strFilePath);
	}

	AfxMessageBox("replace finished!");
}


void CCodeConvertDlg::OnBnClickedButtonRemoveVcxprojStr()
{
	CString strRemoveStr;
	m_edit_remove_str.GetWindowTextA(strRemoveStr);

	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		Vcxproj_Remove_ProjectName(strFilePath);

		CString strFileName = sdk::processutil::GetNameByPath(strFilePath);
		CString strPath = sdk::processutil::GetPathByFullPath(strFilePath);
		strFileName.Replace(strRemoveStr, "");

		CString strNewDir = strPath + strFileName;
		sdk::fileutil::RenameFile(strFilePath, strNewDir);
		sdk::fileutil::RenameFile(strFilePath + ".filters", strNewDir + ".filters");
		sdk::fileutil::RenameFile(strFilePath + ".user", strNewDir + ".user");

	}

	AfxMessageBox("replace finished!");
}


void CCodeConvertDlg::OnBnClickedButtonRename1()
{
	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
// 		CString strFilePath;
// 		m_listFiles.GetText(index, strFilePath);	
// 		CString strFileName = sdk::processutil::GetNameByPath(strFilePath);
// 		CString strPath = sdk::processutil::GetPathByFullPath(strFilePath);	
// 		
// 		strFileName.Replace("d.lib", ".lib");
// 
// 		CString strNewDir = strPath + strFileName;
// 		sdk::fileutil::RenameFile(strFilePath, strNewDir);


		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePath);

		OutputDirectory(strFileContent);
		IntermediateDirectory(strFileContent);
		PrimaryOutput(strFileContent);

		sdk::fileutil::SaveStringToFile(strFilePath, strFileContent);		
	}

	AfxMessageBox("replace finished!");
}


void CCodeConvertDlg::OnBnClickedButtonRemovecbt()
{
	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePath);

		CString strTagBegin = "<CustomBuild";
		CString strTagEnd = "</CustomBuild>";
		CStringArray arrReturn;
		sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin, strTagEnd, arrReturn);
		for (int index = 0; index < arrReturn.GetCount(); index++)
		{
			CString strTemp = arrReturn.GetAt(index);
			CString strTag1 = sdk::stringutil::GetStringInWithTag(strTemp, strTagBegin, ">");
			if (strTemp.Find(".cbt") != -1)
			{
				strFileContent.Replace(strTemp, "");
			}
		}
		sdk::fileutil::SaveStringToFile(strFilePath, strFileContent);
	}

	AfxMessageBox("replace finished!");
}


void CCodeConvertDlg::OnBnClickedButtonRemovespecial()
{
	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePath);

		CString strTagBegin = "<CustomBuild";
		CString strTagEnd = "</CustomBuild>";
		CStringArray arrReturn;
		sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin, strTagEnd, arrReturn);
		for (int index = 0; index < arrReturn.GetCount(); index++)
		{
			CString strTemp = arrReturn.GetAt(index);
			CString strTag1 = sdk::stringutil::GetStringInWithTag(strTemp, strTagBegin, ">");
			if (strTag1.Find(".cbt") != -1)
			{
				strFileContent.Replace(strTemp, "");
			}
		}
		sdk::fileutil::SaveStringToFile(strFilePath, strFileContent);
	}

	AfxMessageBox("replace finished!");
}


void CCodeConvertDlg::OnBnClickedButtonqmldir()
{
	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePath);

		CString strFileName = sdk::processutil::GetNameWithoutSuffixByPath(strFilePath);
		CString strPath = sdk::processutil::GetPathByFullPath(strFilePath);

		CString strTagBegin = "<CustomBuild Include=\"qmldir\">";
		CString strTagEnd = "</CustomBuild>";
		CStringArray arrReturn;
		sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin, strTagEnd, arrReturn);
		for (int index = 0; index < arrReturn.GetCount(); index++)
		{
			CString strTemp = arrReturn.GetAt(index);
			CString strNewFile;
			strNewFile.Format("%s\\%d_%s_qmldir.txt", strPath, index, strFileName);
			sdk::fileutil::SaveStringToFile(strNewFile, strTemp);
			strFileContent.Replace(strTemp, "");
		}

		CString strTagBegin1 = "<CustomBuild Include=\"plugins.qmltypes\">";
		CString strTagEnd1 = "</CustomBuild>";
		CStringArray arrReturn1;
		sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin1, strTagEnd1, arrReturn1);
		for (int index = 0; index < arrReturn1.GetCount(); index++)
		{
			CString strTemp = arrReturn1.GetAt(index);
			CString strNewFile;
			strNewFile.Format("%s\\%d_%s_qmltypes.txt", strPath, index, strFileName);
			sdk::fileutil::SaveStringToFile(strNewFile, strTemp);
			strFileContent.Replace(strTemp, "");
		}
		sdk::fileutil::SaveStringToFile(strFilePath, strFileContent);
		//<CustomBuild Include="plugins.qmltypes">
	}

	AfxMessageBox("replace finished!");
}


void CCodeConvertDlg::OnBnClickedButtonheader()
{
	CString strHeader;
	m_richedit_header.GetWindowTextA(strHeader);
	strHeader.Trim();

	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePath);

		CString strTagBegin = "<AdditionalIncludeDirectories>";
		CString strTagEnd = "</AdditionalIncludeDirectories>";
		CStringArray arrReturn;
		sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin, strTagEnd, arrReturn);
		for (int index = 0; index < arrReturn.GetCount(); index++)
		{
			CString strTemp = arrReturn.GetAt(index);
			CString strNew = strTagBegin + strHeader + strTagEnd;
			strFileContent.Replace(strTemp, strNew);
		}
		sdk::fileutil::SaveStringToFile(strFilePath, strFileContent);
	}

	AfxMessageBox("replace finished!");

}


void CCodeConvertDlg::OnBnClickedButtonlib()
{
	CString strLib;
	m_richedit_lib.GetWindowTextA(strLib);
	strLib.Trim();

	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePath);

		CString strTagBegin = "<AdditionalDependencies>";
		CString strTagEnd = "</AdditionalDependencies>";
		CStringArray arrReturn;
		sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin, strTagEnd, arrReturn);
		for (int index = 0; index < arrReturn.GetCount(); index++)
		{
			CString strTemp = arrReturn.GetAt(index);
			CString strNew = strTagBegin + strLib + strTagEnd;
			strFileContent.Replace(strTemp, strNew);
		}
		sdk::fileutil::SaveStringToFile(strFilePath, strFileContent);
	}

	AfxMessageBox("replace finished!");

}


void CCodeConvertDlg::OnBnClickedButtonlibwinmain()
{
	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		// 		CString strFilePath;
		// 		m_listFiles.GetText(index, strFilePath);	
		// 		CString strFileName = sdk::processutil::GetNameByPath(strFilePath);
		// 		CString strPath = sdk::processutil::GetPathByFullPath(strFilePath);	
		// 		
		// 		strFileName.Replace("d.lib", ".lib");
		// 
		// 		CString strNewDir = strPath + strFileName;
		// 		sdk::fileutil::RenameFile(strFilePath, strNewDir);


		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePath);

		//CString strlibwinmain = "libwinmain.lib;";
		//if (strFileContent.Find(strlibwinmain) != -1)
		{
		//	strFileContent.Replace(strlibwinmain, "");
			strFileContent.Replace("_WINDOWS;", "_CONSOLE;");
			strFileContent.Replace("<SubSystem>Windows</SubSystem>", "<SubSystem>Console</SubSystem>");
			sdk::fileutil::SaveStringToFile(strFilePath, strFileContent);
		}
	}

	AfxMessageBox("replace finished!");
}


void CCodeConvertDlg::OnBnClickedButtonparentdep()
{
	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePath);

		strFileContent.Replace("%(AdditionalIncludeDirectories);", "");
		strFileContent.Replace("%(AdditionalIncludeDirectories)", "");
		strFileContent.Replace("%(PreprocessorDefinitions);", "");
		strFileContent.Replace("%(PreprocessorDefinitions)", "");
		strFileContent.Replace("%(AdditionalDependencies);", "");
		strFileContent.Replace("%(AdditionalDependencies)", "");
		strFileContent.Replace("%(AdditionalLibraryDirectories);", "");
		strFileContent.Replace("%(AdditionalLibraryDirectories)", "");

		sdk::fileutil::SaveStringToFile(strFilePath, strFileContent);
	}

	AfxMessageBox("replace finished!");
}


void CCodeConvertDlg::OnBnClickedButtonuic1()
{
	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePath);

		CString strTagBegin = "<QtUic ";
		CString strTagEnd = "</QtUic>";
		CStringArray arrReturn;
		sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin, strTagEnd, arrReturn);
		for (int index = 0; index < arrReturn.GetCount(); index++)
		{
			CString strTemp = arrReturn.GetAt(index);
			CString strTag1 = sdk::stringutil::GetStringInWithTag(strTemp, strTagBegin, ">");
			if (strTag1.Find(".ui") != -1)
			{
				CString strTag2 = sdk::stringutil::GetStringIn(strTemp, ">", strTagEnd);
				strFileContent.Replace(strTag2, "");
			}
		}
		sdk::fileutil::SaveStringToFile(strFilePath, strFileContent);
	}

	AfxMessageBox("replace finished!");
}


void CCodeConvertDlg::OnBnClickedButtonuic2()
{
	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePath);

		CString strTagBegin = "<CustomBuild ";
		CString strTagEnd = "</CustomBuild>";
		CStringArray arrReturn;
		sdk::stringutil::GetAllStringAtAllTimesWithTag(strFileContent, strTagBegin, strTagEnd, arrReturn);
		for (int index = 0; index < arrReturn.GetCount(); index++)
		{
			CString strTemp = arrReturn.GetAt(index);
			CString strTag1 = sdk::stringutil::GetStringInWithTag(strTemp, strTagBegin, ">");
			if (strTag1.Find(".ui") != -1)
			{
				CString strTempNew = strTemp;
				CString strTag2 = sdk::stringutil::GetStringIn(strTemp, ">", strTagEnd);
				strTempNew.Replace(strTag2, "");
				strTempNew.Replace("CustomBuild", "QtUic");
				strFileContent.Replace(strTemp, strTempNew);
			}
		}
		
		CString str1_old = ".moc/$(Configuration)/moc_predefs.h";
		strFileContent.Replace(str1_old, "");
		CString str1_old1 = ".moc/moc_predefs.h";
		strFileContent.Replace(str1_old1, "");

		CString str2_old = " <QtMocDir>.moc\\$(Configuration)</QtMocDir>";
		CString str2_old1 = "<QtMocDir>.moc</QtMocDir>";
		CString str2_new = "<QtMocDir>moc</QtMocDir>";
		strFileContent.Replace(str2_old, str2_new);
		strFileContent.Replace(str2_old1, str2_new);
		CString str3_old = "<QtUicDir>.uic</QtUicDir>";
		CString str3_new = "<QtUicDir>uic</QtUicDir>";
		strFileContent.Replace(str3_old, str3_new);

		CString str4_old = "<QtRccDir>.rcc\\$(Configuration)</QtRccDir>";
		CString str4_new = "<QtRccDir>rcc</QtRccDir>";
		strFileContent.Replace(str4_old, str4_new);

		sdk::fileutil::SaveStringToFile(strFilePath, strFileContent);
	}

	AfxMessageBox("replace finished!");
}


void CCodeConvertDlg::OnBnClickedButtonqtremove()
{
	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePath);

		SetValue_WithAttribute(strFileContent, "<Keyword>", "</Keyword>", "");

		SetValueEmptyIfFindStr(strFileContent, "<Target ", "</Target>", "qt.targets");

		SetValueEmptyIfFindStr(strFileContent, "<ImportGroup ", "</ImportGroup>", "qt_defaults.props");
		SetValueEmptyIfFindStr(strFileContent, "<ImportGroup ", "</ImportGroup>", "qt.targets");
		SetValueEmptyIfFindStr(strFileContent, "<ImportGroup ", "</ImportGroup>", "qt.props");

		SetValueEmptyIfFindStr(strFileContent, "<PropertyGroup ", "</PropertyGroup>", "qt.targets");
		SetValueEmptyIfFindStr(strFileContent, "<PropertyGroup ", "</PropertyGroup>", "QtSettings");
		
		sdk::fileutil::SaveStringToFile(strFilePath, strFileContent);
	}

	AfxMessageBox("replace finished!");
}



void CCodeConvertDlg::OnBnClickedButtonremovedir()
{
	CString strKey1;
	m_richedit_key1.GetWindowTextA(strKey1);
	strKey1.Trim();

	CStringArray strDirArray;
	sdk::fileutil::GetAllChildDir(strKey1, strDirArray);

	for (int iTemp = 0; iTemp < strDirArray.GetSize(); iTemp++)
	{
		CString strTemp1 = strDirArray[iTemp];
		CString strTemp2 = strTemp1;
		strTemp2.Replace("\\", "/");
		if (strTemp2.Right(5).CompareNoCase("/.moc") == 0)sdk::fileutil::DeleteFile(strTemp1);
		if (strTemp2.Right(5).CompareNoCase("/.obj") == 0)sdk::fileutil::DeleteFile(strTemp1);
		if (strTemp2.Right(5).CompareNoCase("/.pch") == 0)sdk::fileutil::DeleteFile(strTemp1);
		if (strTemp2.Right(5).CompareNoCase("/.rcc") == 0)sdk::fileutil::DeleteFile(strTemp1);
		if (strTemp2.Right(5).CompareNoCase("/.uic") == 0)sdk::fileutil::DeleteFile(strTemp1);
		if (strTemp2.Right(6).CompareNoCase("/debug") == 0)sdk::fileutil::DeleteFile(strTemp1);
		if (strTemp2.Right(8).CompareNoCase("/release") == 0)sdk::fileutil::DeleteFile(strTemp1);
		if (strTemp2.Right(4).CompareNoCase("/x64") == 0)sdk::fileutil::DeleteFile(strTemp1);
	}

	AfxMessageBox("replace finished!");
}


void CCodeConvertDlg::OnBnClickedButtondepend()
{
	CString strPathNew = "E:\\lib\\1111.bat";
	CString strCmdNew;	

	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		
		CString strFileName = sdk::processutil::GetNameWithoutSuffixByPath(strFilePath);
		CString strPath = sdk::processutil::GetPathByFullPath(strFilePath);

		CString strCmd = "start /wait /B dumpbin.exe /linkermember ";
		strCmd += strFilePath;
		strCmd += ">";
		strCmd += strFileName;
		strCmd += ".txt";

		strCmdNew += strCmd + "\r\n";
	}

	sdk::fileutil::SaveStringToFile(strPathNew, strCmdNew);

}


void CCodeConvertDlg::OnBnClickedButtontest()
{
	int iSize = sizeof(int);
	//int * pTemp = new int[1024 * 1024 * 1024];
}


void CCodeConvertDlg::OnBnClickedButtonRemoveResource()
{
	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		Vcxproj_Remove_Resource(strFilePath);
	}

	AfxMessageBox("replace finished!");
}


void CCodeConvertDlg::OnBnClickedButtonDeleteDir()
{
	CString strDir;
	m_editDir.GetWindowTextA(strDir);
	strDir.Trim();
	for (int iTemp = 0; iTemp < m_listFiles.GetCount(); iTemp++)
	{
		CString strFilePath;
		m_listFiles.GetText(iTemp, strFilePath);

		CStringArray arrReturn;
		CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePath);
		sdk::stringutil::SplitStringWithEx(strFileContent, arrReturn, "\r\n");

		for (int index = 0; index < arrReturn.GetCount(); index++)
		{
			CString strTemp = arrReturn.GetAt(index);
			strTemp.Trim();
			CString strDirChild = strDir + "\\" + strTemp;
			sdk::fileutil::DeleteFileA(strDirChild);
		}
	}

	AfxMessageBox("delete finished!");
}


void CCodeConvertDlg::OnBnClickedButtonTemp11()
{	
	for (int iTemp = 0; iTemp < m_listFiles.GetCount(); iTemp++)
	{
		CString strFilePath;
		m_listFiles.GetText(iTemp, strFilePath);
		CString strFileName = sdk::processutil::GetNameWithoutSuffixByPath(strFilePath);
		CString strPath = sdk::processutil::GetPathByFullPath(strFilePath);
		CString  strTemplateVcxproj = strPath + "\\Animation.vcxproj";

		CStringArray arrReturn;
		CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePath);
		sdk::stringutil::SplitStringWithEx(strFileContent, arrReturn, "\r\n");

		for (int index = 0; index < arrReturn.GetCount(); index++)
		{
			CString strTemp = arrReturn.GetAt(index);
			strTemp.Trim();

			CString strNewDir = strPath + strTemp;
			CString  strVcxprojNew = strNewDir + "\\" + strTemp + ".vcxproj";
			sdk::fileutil::CopyFileA(strTemplateVcxproj, strVcxprojNew);
		}
	}

	AfxMessageBox("delete finished!");
}


void CCodeConvertDlg::OnBnClickedButtonOpenUrl()
{
	for (int iTemp = 0; iTemp < m_listFiles.GetCount(); iTemp++)
	{
		CString strFilePath;
		m_listFiles.GetText(iTemp, strFilePath);

		CStringArray arrReturn;
		CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePath);
		sdk::stringutil::SplitStringWithEx(strFileContent, arrReturn, "\r\n");

		for (int index = 0; index < arrReturn.GetCount(); index++)
		{
			CString strTemp = arrReturn.GetAt(index);
			strTemp.Trim();
			ShellExecute(NULL, "open", strTemp, NULL, NULL, SW_MAXIMIZE);
		}
	}

	
}


void CCodeConvertDlg::OnBnClickedButtonDebuginformationformat()
{
	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		Vcxproj_Remove_DebugInformationFormat(strFilePath);
	}

	AfxMessageBox("replace finished!");
}


void CCodeConvertDlg::OnBnClickedButtonBscmake()
{
	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		Vcxproj_Remove_Bscmake(strFilePath);
	}

	AfxMessageBox("replace finished!");	
}


void CCodeConvertDlg::OnBnClickedButtonAfxdll()
{
	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		Vcxproj_Remove_Afxdll(strFilePath);
	}

	AfxMessageBox("replace finished!");	
}


void CCodeConvertDlg::OnBnClickedButtonGenerate2()
{
	CString strTemp_01 = "Project(\"{8BC9CEB8-8B4A-11D0-8D11-00A0C91BC942}\") = \"ProjectName\", \"ProjectDir\\ProjectDDD\\ProjectName.vcxproj\", \"ProjectGuid\"\r\nEndProject\r\n";
	CString strTemp_02 = "ProjectGuid.Debug|x64.ActiveCfg = Debug|x64\r\nProjectGuid.Debug|x64.Build.0 = Debug|x64\r\nProjectGuid.Release|x64.ActiveCfg = Release|x64\r\nProjectGuid.Release|x64.Build.0 = Release|x64\r\n";

	CStringArray arr1;
	CStringArray arr2;

	CString strFileContent;
	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		CString strFileName = sdk::processutil::GetNameWithoutSuffixByPath(strFilePath);
		CString strFileDir = sdk::fileutil::GetDirNameByFullPath(strFilePath);
		CString strTemp_01_new = strTemp_01;
		strTemp_01_new.Replace("ProjectName", strFileName);
		strTemp_01_new.Replace("ProjectDDD", strFileDir);
		std::string strGuid = GuidToString();
		strTemp_01_new.Replace("ProjectGuid", strGuid.c_str());
		arr1.Add(strTemp_01_new);

		CString strTemp_02_new = strTemp_02;
		strTemp_02_new.Replace("ProjectGuid", strGuid.c_str());
		arr2.Add(strTemp_02_new);

	}


	for (int index = 0; index < arr1.GetCount(); index++)
	{
		strFileContent += arr1.GetAt(index);
	}
	strFileContent + "\r\n\r\n\r\n";
	for (int index = 0; index < arr2.GetCount(); index++)
	{
		strFileContent += arr2.GetAt(index);
	}
	strFileContent + "\r\n\r\n\r\n";


	sdk::fileutil::SaveStringToFile("22222.txt", strFileContent);

	AfxMessageBox("generate finished!");
}


void CCodeConvertDlg::OnBnClickedButtonBinDir()
{
	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		CString strFileName = sdk::processutil::GetNameWithoutSuffixByPath(strFilePath);
		CString strPath = sdk::processutil::GetPathByFullPath(strFilePath);
		CString strDir = sdk::fileutil::GetDirNameByFullPath(strFilePath);
		strDir.Replace("实例", "");

		CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePath);

		CString str111 = "$(SolutionDir)bin\\$(Configuration)\\";
		str111 += strDir + "\\";
		SetValue_WithAttribute(strFileContent, "<OutDir", "</OutDir>", str111);

		sdk::fileutil::SaveStringToFile(strFilePath, strFileContent);
	}

	AfxMessageBox("replace finished!");
}


void CCodeConvertDlg::OnBnClickedButtonMt2md()
{
	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		CString strFileContent = sdk::fileutil::GetStringFromFile(strFilePath);

		strFileContent.Replace("<RuntimeLibrary>MultiThreadedDebug</RuntimeLibrary>", "<RuntimeLibrary>MultiThreadedDebugDLL</RuntimeLibrary>");
		strFileContent.Replace("<RuntimeLibrary>MultiThreaded</RuntimeLibrary>", " <RuntimeLibrary>MultiThreadedDLL</RuntimeLibrary>");

		sdk::fileutil::SaveStringToFile(strFilePath, strFileContent);
	}

	AfxMessageBox("replace finished!");
}


void CCodeConvertDlg::OnBnClickedButtonPostbuildevent()
{
	for (int index = 0; index < m_listFiles.GetCount(); index++)
	{
		CString strFilePath;
		m_listFiles.GetText(index, strFilePath);
		Vcxproj_Remove_Postbuildevent(strFilePath);
	}

	AfxMessageBox("replace finished!");
}
