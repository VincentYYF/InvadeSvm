
// InvadeSvm.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CInvadeSvmApp: 
// �йش����ʵ�֣������ InvadeSvm.cpp
//

class CInvadeSvmApp : public CWinApp
{
public:
	CInvadeSvmApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CInvadeSvmApp theApp;