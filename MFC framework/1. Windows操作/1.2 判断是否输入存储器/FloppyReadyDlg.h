// FloppyReadyDlg.h : header file
//

#if !defined(AFX_FLOPPYREADYDLG_H__79E65115_9C7B_4DD9_8AE5_66A78263A75C__INCLUDED_)
#define AFX_FLOPPYREADYDLG_H__79E65115_9C7B_4DD9_8AE5_66A78263A75C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CFloppyReadyDlg dialog

class CFloppyReadyDlg : public CDialog
{
// Construction
public:
	CFloppyReadyDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CFloppyReadyDlg)
	enum { IDD = IDD_FLOPPYREADY_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFloppyReadyDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CFloppyReadyDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnGet();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FLOPPYREADYDLG_H__79E65115_9C7B_4DD9_8AE5_66A78263A75C__INCLUDED_)
