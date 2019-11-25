// DeviceVolumeDlg.cpp : implementation file
//

#include "stdafx.h"
#include "DeviceVolume.h"
#include "DeviceVolumeDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

	// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

	// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
	// No message handlers
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDOK, &CAboutDlg::OnBnClickedOk)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDeviceVolumeDlg dialog

CDeviceVolumeDlg::CDeviceVolumeDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CDeviceVolumeDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDeviceVolumeDlg)
	// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CDeviceVolumeDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDeviceVolumeDlg)
	DDX_Control(pDX, IDC_MYLIST, m_disklist);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CDeviceVolumeDlg, CDialog)
	//{{AFX_MSG_MAP(CDeviceVolumeDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_GET, OnGet)
	//}}AFX_MSG_MAP
	ON_NOTIFY(LVN_ITEMCHANGED, IDC_MYLIST, &CDeviceVolumeDlg::OnLvnItemchangedMylist)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDeviceVolumeDlg message handlers

BOOL CDeviceVolumeDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	m_disklist.SetExtendedStyle(LVS_EX_GRIDLINES);
	m_disklist.InsertColumn(0, "�߼�����", LVCFMT_LEFT, 70);
	m_disklist.InsertColumn(1, "���", LVCFMT_LEFT, 70);
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CDeviceVolumeDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CDeviceVolumeDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM)dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CDeviceVolumeDlg::OnQueryDragIcon()
{
	return (HCURSOR)m_hIcon;
}

void CDeviceVolumeDlg::OnGet()
{
	DWORD size;
	size = ::GetLogicalDriveStrings(0, NULL);
	if (size != 0)
	{
		HANDLE heap = ::GetProcessHeap();
		LPSTR lp = (LPSTR)HeapAlloc(heap, HEAP_ZERO_MEMORY, size*sizeof(TCHAR));
		::GetLogicalDriveStrings(size*sizeof(TCHAR), lp);
		while (*lp != 0)
		{
			UINT res = ::GetDriveType(lp);
			if (res = DRIVE_FIXED)
				m_disklist.InsertItem(0, lp, 0);
			lp = _tcschr(lp, 0) + 1;
		}
	}
	LPTSTR namebuf = new char[12];
	DWORD namesize = 12;
	DWORD serialnumber;
	DWORD maxlen;
	DWORD fileflag;
	LPTSTR sysnamebuf = new char[10];
	DWORD sysnamesize = 10;
	int num = m_disklist.GetItemCount();
	for (int i = 0; i<num; i++)
	{
		CString str, temp;
		str = m_disklist.GetItemText(i, 0);
		::GetVolumeInformation(str, namebuf, namesize, &serialnumber, &maxlen, &fileflag,
			sysnamebuf, sysnamesize);
		temp.Format("%s", namebuf);
		m_disklist.SetItemText(i, 1, temp);
	}
}


void CAboutDlg::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CDialog::OnOK();
}


void CDeviceVolumeDlg::OnLvnItemchangedMylist(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMLISTVIEW pNMLV = reinterpret_cast<LPNMLISTVIEW>(pNMHDR);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	*pResult = 0;
}
