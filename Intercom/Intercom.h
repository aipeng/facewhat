
// Intercom.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CIntercomApp:
// �йش����ʵ�֣������ Intercom.cpp
//

class CIntercomApp : public CWinApp
{
public:
	CIntercomApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CIntercomApp theApp;