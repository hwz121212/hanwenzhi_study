
// process_manageDlg.h: 头文件
//

#pragma once


// CprocessmanageDlg 对话框
class CprocessmanageDlg : public CDialogEx
{
// 构造
public:
	CprocessmanageDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PROCESS_MANAGE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonTerminate();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnBnClickedButtonTerminateStop();
	afx_msg void OnBnClickedButtonTerminateStart();
	CEdit m_edit_num;
	afx_msg void OnBnClickedButtonTerminateService();
};
