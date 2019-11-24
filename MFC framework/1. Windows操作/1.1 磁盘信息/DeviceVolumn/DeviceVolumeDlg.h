// DeviceVolumeDlg.h : header file
//

#if !defined(AFX_DEVICEVOLUMEDLG_H__E7576D4B_F3DB_4EBF_8E20_29176CC60E9F__INCLUDED_)
#define AFX_DEVICEVOLUMEDLG_H__E7576D4B_F3DB_4EBF_8E20_29176CC60E9F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CDeviceVolumeDlg dialog

class CDeviceVolumeDlg : public CDialog
{
// Construction
public:
	CDeviceVolumeDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CDeviceVolumeDlg)
	enum { IDD = IDD_DEVICEVOLUME_DIALOG };
	CListCtrl	m_disklist;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDeviceVolumeDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CDeviceVolumeDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnGet();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLvnItemchangedMylist(NMHDR *pNMHDR, LRESULT *pResult);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DEVICEVOLUMEDLG_H__E7576D4B_F3DB_4EBF_8E20_29176CC60E9F__INCLUDED_)
