
// OpenUrls.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// COpenUrlsApp:
// �йش����ʵ�֣������ OpenUrls.cpp
//

class COpenUrlsApp : public CWinApp
{
public:
	COpenUrlsApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern COpenUrlsApp theApp;