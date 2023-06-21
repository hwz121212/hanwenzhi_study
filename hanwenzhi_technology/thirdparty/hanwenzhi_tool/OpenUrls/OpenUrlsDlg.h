
// OpenUrlsDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// COpenUrlsDlg �Ի���
class COpenUrlsDlg : public CDialogEx
{
// ����
public:
	COpenUrlsDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_OPENURLS_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CListBox m_listUrls;
	afx_msg void OnDropFiles(HDROP hDropInfo);
	afx_msg void OnBnClickedButtonOpenUrl();
	afx_msg void OnLbnDblclkList1();
	afx_msg void OnBnClickedButtonSave();

private:
	CString m_strFilePath;
};


void ReadUrlsFromFile(const CString& strFilePathName, CStringArray& arrInfos);