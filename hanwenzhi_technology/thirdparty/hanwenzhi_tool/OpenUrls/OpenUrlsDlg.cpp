
// OpenUrlsDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "OpenUrls.h"
#include "OpenUrlsDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// COpenUrlsDlg �Ի���




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


// COpenUrlsDlg ��Ϣ�������

BOOL COpenUrlsDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ���ô˶Ի����ͼ�ꡣ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void COpenUrlsDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
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
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
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
