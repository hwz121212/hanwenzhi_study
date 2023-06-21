
// OpenUrlsDlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// COpenUrlsDlg 对话框
class COpenUrlsDlg : public CDialogEx
{
// 构造
public:
	COpenUrlsDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_OPENURLS_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
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