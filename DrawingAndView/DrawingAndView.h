
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"	

class CDrawingAndViewApp : public CWinApp
{
public:
	CDrawingAndViewApp();


public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
