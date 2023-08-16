
// CodeConvertDlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// CCodeConvertDlg 对话框
class CCodeConvertDlg : public CDialogEx
{
// 构造
public:
	CCodeConvertDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_CODECONVERT_DIALOG };

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
	afx_msg void OnBnClickedButtonConvert();
	afx_msg void OnDropFiles(HDROP hDropInfo);
	CListBox m_listFiles;
	
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButtonConfiguration();
	
	CEdit m_editConfiguration;
	afx_msg void OnBnClickedButtonWin32to64();
	
	afx_msg void OnBnClickedButtonx64Win32();
	CEdit m_edit_sln;
	afx_msg void OnBnClickedButtonReplaceTemp();
	CEdit m_edit_num;
	afx_msg void OnBnClickedButtonCreateVcxproj();
	afx_msg void OnBnClickedButtonCreateBytext();
	afx_msg void OnBnClickedButtonGeneratecode();
	afx_msg void OnBnClickedButtonremoveutility();
	afx_msg void OnBnClickedButtonRemoveProjectname();
	afx_msg void OnBnClickedButtonLibName();
	afx_msg void OnBnClickedButtonPreferredtoolarchitecture();
	afx_msg void OnBnClickedButtonAddPrefix();
	CEdit m_edit_prefix;
	afx_msg void OnBnClickedButtonRemoveResourcecompile();
	afx_msg void OnBnClickedButtonRemoveMidl();
	afx_msg void OnBnClickedButtonRemoveForcedincludefiles();
	CEdit m_edit_suffix;
	CEdit m_edit_remove_str;
	afx_msg void OnBnClickedButtonRemoveVcxprojStr();
	afx_msg void OnBnClickedButtonRename1();
	afx_msg void OnBnClickedButtonRemovecbt();
	afx_msg void OnBnClickedButtonRemovespecial();
	afx_msg void OnBnClickedButtonqmldir();
	afx_msg void OnBnClickedButtonheader();
	afx_msg void OnBnClickedButtonlib();
	CRichEditCtrl m_richedit_header;
	CRichEditCtrl m_richedit_lib;
	afx_msg void OnBnClickedButtonlibwinmain();
	afx_msg void OnBnClickedButtonparentdep();
	afx_msg void OnBnClickedButtonuic1();
	afx_msg void OnBnClickedButtonuic2();
	afx_msg void OnBnClickedButtonqtremove();
	afx_msg void OnBnClickedButtonremovedir();
	CRichEditCtrl m_richedit_key1;
	afx_msg void OnBnClickedButtondepend();
	afx_msg void OnBnClickedButtontest();
	afx_msg void OnBnClickedButtonRemoveResource();
	CEdit m_editDir;
	afx_msg void OnBnClickedButtonDeleteDir();
	afx_msg void OnBnClickedButtonTemp11();
	afx_msg void OnBnClickedButtonOpenUrl();
	afx_msg void OnBnClickedButtonDebuginformationformat();
	afx_msg void OnBnClickedButtonBscmake();
	afx_msg void OnBnClickedButtonAfxdll();
	afx_msg void OnBnClickedButtonGenerate2();
	afx_msg void OnBnClickedButtonBinDir();
	CButton m_ctlCheckboxAdd;
	afx_msg void OnBnClickedButtonMt2md();
	afx_msg void OnBnClickedButtonPostbuildevent();
	afx_msg void OnBnClickedButtonPrefixTemp();
	afx_msg void OnBnClickedButtonAddPrefix2();
};
