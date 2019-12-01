; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CFloppyReadyDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "FloppyReady.h"

ClassCount=3
Class1=CFloppyReadyApp
Class2=CFloppyReadyDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_FLOPPYREADY_DIALOG

[CLS:CFloppyReadyApp]
Type=0
HeaderFile=FloppyReady.h
ImplementationFile=FloppyReady.cpp
Filter=N

[CLS:CFloppyReadyDlg]
Type=0
HeaderFile=FloppyReadyDlg.h
ImplementationFile=FloppyReadyDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=CFloppyReadyDlg

[CLS:CAboutDlg]
Type=0
HeaderFile=FloppyReadyDlg.h
ImplementationFile=FloppyReadyDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_FLOPPYREADY_DIALOG]
Type=1
Class=CFloppyReadyDlg
ControlCount=1
Control1=IDC_GET,button,1342242816

