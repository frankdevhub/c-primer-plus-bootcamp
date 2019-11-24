; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CDeviceVolumeDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "DeviceVolume.h"

ClassCount=3
Class1=CDeviceVolumeApp
Class2=CDeviceVolumeDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_DEVICEVOLUME_DIALOG

[CLS:CDeviceVolumeApp]
Type=0
HeaderFile=DeviceVolume.h
ImplementationFile=DeviceVolume.cpp
Filter=N

[CLS:CDeviceVolumeDlg]
Type=0
HeaderFile=DeviceVolumeDlg.h
ImplementationFile=DeviceVolumeDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=IDC_MYLIST

[CLS:CAboutDlg]
Type=0
HeaderFile=DeviceVolumeDlg.h
ImplementationFile=DeviceVolumeDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_DEVICEVOLUME_DIALOG]
Type=1
Class=CDeviceVolumeDlg
ControlCount=2
Control1=IDC_GET,button,1342242816
Control2=IDC_MYLIST,SysListView32,1350631425

