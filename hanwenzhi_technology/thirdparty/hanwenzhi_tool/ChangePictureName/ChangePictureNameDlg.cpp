
// ChangePictureNameDlg.cpp: 实现文件
//

#include "pch.h"
#include "framework.h"
#include "ChangePictureName.h"
#include "ChangePictureNameDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CChangePictureNameDlg 对话框



CChangePictureNameDlg::CChangePictureNameDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_CHANGEPICTURENAME_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CChangePictureNameDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_listPicture);
}

BEGIN_MESSAGE_MAP(CChangePictureNameDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_DROPFILES()
	ON_BN_CLICKED(IDC_BUTTON_CHANGE_NAME, &CChangePictureNameDlg::OnBnClickedButtonChangeName)
END_MESSAGE_MAP()


// CChangePictureNameDlg 消息处理程序

BOOL CChangePictureNameDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CChangePictureNameDlg::OnPaint()
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
HCURSOR CChangePictureNameDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CChangePictureNameDlg::OnDropFiles(HDROP hDropInfo)
{
	
	m_listPicture.ResetContent();
	// TODO: Add your message handler code here and/or call default
	UINT count;
	char filePath[256];
	count = DragQueryFile(hDropInfo, 0xFFFFFFFF, NULL, 0);
	if (count)
	{
		for (UINT i = 0; i < count; i++)
		{
			int pathLen = DragQueryFile(hDropInfo, i, filePath, sizeof(filePath));
			CString strTemp = filePath;
			strTemp.Trim();
			strTemp.MakeLower();
			if (strTemp.Find(".jpg") != -1)
			{
				m_listPicture.AddString(filePath);
			}			
		}
	}
	DragFinish(hDropInfo);
	CDialog::OnDropFiles(hDropInfo);

}


void CChangePictureNameDlg::OnBnClickedButtonChangeName()
{	
	for (int index = 0; index < m_listPicture.GetCount(); index++)
	{
		CString strFilePath;
		m_listPicture.GetText(index, strFilePath);

		
		CString strPath = sdk::processutil::GetPathByFullPath(strFilePath);
		CString strDir = sdk::fileutil::GetDirNameByFullPath(strFilePath);
		

		easyexif::EXIFInfo result;
		if (GetPicInfo((LPTSTR)(LPCTSTR)strFilePath, result))
		{
			CString strFileName = result.DateTimeOriginal.c_str();
			strFileName.Trim();
			strFileName.Replace(":", "_");
			
			strFileName = strFileName + ".jpg";
			CString strFilePathNew = strPath  + "datetime\\" + strFileName;
			
			sdk::fileutil::MoveFile(strFilePath, strFilePathNew);
			
			//sdk::fileutil::RenameFile(strFilePath, strFilePathNew);
		}
	}

	AfxMessageBox("replace finished!");

}
