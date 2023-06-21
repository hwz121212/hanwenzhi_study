
// OpenUrlsDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "OpenUrls.h"
#include "OpenUrlsDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// COpenUrlsDlg 对话框




COpenUrlsDlg::COpenUrlsDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(COpenUrlsDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void COpenUrlsDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_listUrls);
}

BEGIN_MESSAGE_MAP(COpenUrlsDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_DROPFILES()
	ON_BN_CLICKED(IDC_BUTTON_OPEN_URL, &COpenUrlsDlg::OnBnClickedButtonOpenUrl)
	ON_LBN_DBLCLK(IDC_LIST1, &COpenUrlsDlg::OnLbnDblclkList1)
	ON_BN_CLICKED(IDC_BUTTON_SAVE, &COpenUrlsDlg::OnBnClickedButtonSave)
	ON_BN_CLICKED(IDC_BUTTON1, &COpenUrlsDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// COpenUrlsDlg 消息处理程序

BOOL COpenUrlsDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void COpenUrlsDlg::OnPaint()
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
HCURSOR COpenUrlsDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

CString GetStringFromFile(const CString& strFilePathName)
{
	CString strReturn = "";
	CFile openfile(strFilePathName, CFile::modeRead);	
	int length = openfile.GetLength();
	int iLen = length + 2;
	char *strText = new char[iLen];	
	memset(strText, 0, iLen);
	openfile.Read(strText, length);
	openfile.Close();
	strReturn = (CString)strText;
	delete [] strText;
	return strReturn;
}

int SplitStringWith(CString strTarget, CStringArray &strArray, CString strTag)
{
	int iCount = 0;

	if (strTarget.IsEmpty())
	{
		return 0;
	}

	try
	{
		CString strTemp = strTarget;
		int nPos = strTemp.Find(strTag);
		if(nPos > 0)
		{
			while(nPos >= 0)
			{
				CString strSubString=strTemp.Left(nPos);
				if (!strSubString.IsEmpty())   
				{
					strArray.Add(strSubString);
					iCount++;
				}				
				strTemp = strTarget.Right(strTemp.GetLength()-nPos-strTag.GetLength());

				nPos =strTemp.Find(strTag);
			}

			if( !strTemp.IsEmpty() )
			{
				strArray.Add(strTemp);
				iCount++;
			}

		}else{
			if( !strTemp.IsEmpty() )
			{
				strArray.Add(strTemp);
				iCount++;
			}
		}
	}
	catch(...)
	{			
		return 0;
	}
	return iCount;
}

void ReadUrlsFromFile(const CString& strFilePathName, CStringArray& arrInfos)
{
	CString strAll = GetStringFromFile(strFilePathName);
	CString strTag = "\n";
	SplitStringWith(strAll, arrInfos, strTag);
	
}


void COpenUrlsDlg::OnDropFiles(HDROP hDropInfo)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	UINT count;
	char filePath[256];
	count = DragQueryFile(hDropInfo, 0xFFFFFFFF, NULL, 0);
	if(count)
	{
		for(UINT i=0; i<count; i++)
		{
			m_listUrls.ResetContent();
			int pathLen = DragQueryFile(hDropInfo, i, filePath, sizeof(filePath));
			m_strFilePath = filePath;
			CStringArray arrTemp;
			ReadUrlsFromFile(m_strFilePath, arrTemp);

			for (int index=0; index<arrTemp.GetCount(); index++)
			{
				CString strTemp = arrTemp[index];
				strTemp.Trim();
				if (!strTemp.IsEmpty())
				{
					m_listUrls.AddString(strTemp);
				}				
			}
		}
	}
	DragFinish(hDropInfo);
	
	CDialogEx::OnDropFiles(hDropInfo);
}

void OpenUrl(const CString& strUrl)
{


	ShellExecute(NULL, "open", strUrl, NULL, NULL, SW_MAXIMIZE);     
}

void COpenUrlsDlg::OnBnClickedButtonOpenUrl()
{
	for (int index=0; index<m_listUrls.GetCount(); index++)
	{
		CString strTemp;
		m_listUrls.GetText(index, strTemp);		

		OpenUrl(strTemp);
	}
}


void COpenUrlsDlg::OnLbnDblclkList1()
{
	int nIndex;
	nIndex = m_listUrls.GetCurSel();
	if(nIndex >= 0) 
	{
		CString cs;
		m_listUrls.GetText(nIndex, cs);
		
		OpenUrl(cs);
	}
}

BOOL SaveStringToFile(const CString& strFilePathName, const CString & str)
{
	BOOL bSaveOk = FALSE;	

	CFile file;	
	if(!file.Open(strFilePathName, CFile::modeCreate | CFile::modeWrite))
	{
		bSaveOk = FALSE;
	}
	else
	{
		file.Write((LPTSTR)(LPCTSTR)str,str.GetLength());							
		file.Close();
		bSaveOk = TRUE;
	}

	return bSaveOk;
}


void COpenUrlsDlg::OnBnClickedButtonSave()
{
	DeleteFile(m_strFilePath);
	CString strAll;
	for (int index=0; index<m_listUrls.GetCount(); index++)
	{
		CString strTemp;
		m_listUrls.GetText(index, strTemp);	
		strAll += strTemp + "\r\n";
	}
	SaveStringToFile(m_strFilePath, strAll);
}


void COpenUrlsDlg::OnBnClickedButton1()
{

	ShellExecute(NULL, "open", strUrl, NULL, NULL, SW_MAXIMIZE);  

}
