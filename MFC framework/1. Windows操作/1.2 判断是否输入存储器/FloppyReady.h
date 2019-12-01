// FloppyReady.h : main header file for the FLOPPYREADY application
//

#if !defined(AFX_FLOPPYREADY_H__1B47F165_E9C8_44A9_98CA_0B31694AC3D5__INCLUDED_)
#define AFX_FLOPPYREADY_H__1B47F165_E9C8_44A9_98CA_0B31694AC3D5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CFloppyReadyApp:
// See FloppyReady.cpp for the implementation of this class
//

class CFloppyReadyApp : public CWinApp
{
public:
	CFloppyReadyApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFloppyReadyApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CFloppyReadyApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FLOPPYREADY_H__1B47F165_E9C8_44A9_98CA_0B31694AC3D5__INCLUDED_)
