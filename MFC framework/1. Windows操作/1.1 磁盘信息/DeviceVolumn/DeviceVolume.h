// DeviceVolume.h : main header file for the DEVICEVOLUME application
//

#if !defined(AFX_DEVICEVOLUME_H__644DC337_23E6_465E_A932_0850E51C6E18__INCLUDED_)
#define AFX_DEVICEVOLUME_H__644DC337_23E6_465E_A932_0850E51C6E18__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CDeviceVolumeApp:
// See DeviceVolume.cpp for the implementation of this class
//

class CDeviceVolumeApp : public CWinApp
{
public:
	CDeviceVolumeApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDeviceVolumeApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CDeviceVolumeApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DEVICEVOLUME_H__644DC337_23E6_465E_A932_0850E51C6E18__INCLUDED_)
