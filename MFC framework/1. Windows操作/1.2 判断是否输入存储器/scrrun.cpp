// Machine generated IDispatch wrapper class(es) created with ClassWizard

#include "stdafx.h"
#include "scrrun.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif



/////////////////////////////////////////////////////////////////////////////
// IDictionary properties

/////////////////////////////////////////////////////////////////////////////
// IDictionary operations

void IDictionary::SetRefItem(VARIANT* Key, VARIANT* newValue)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x0, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms,
		 Key, newValue);
}

void IDictionary::SetItem(VARIANT* Key, VARIANT* newValue)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 Key, newValue);
}

VARIANT IDictionary::GetItem(VARIANT* Key)
{
	VARIANT result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms,
		Key);
	return result;
}

void IDictionary::Add(VARIANT* Key, VARIANT* Item)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Key, Item);
}

long IDictionary::GetCount()
{
	long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL IDictionary::Exists(VARIANT* Key)
{
	BOOL result;
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		Key);
	return result;
}

VARIANT IDictionary::Items()
{
	VARIANT result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void IDictionary::SetKey(VARIANT* Key, VARIANT* newValue)
{
	static BYTE parms[] =
		VTS_PVARIANT VTS_PVARIANT;
	InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 Key, newValue);
}

VARIANT IDictionary::Keys()
{
	VARIANT result;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void IDictionary::Remove(VARIANT* Key)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Key);
}

void IDictionary::RemoveAll()
{
	InvokeHelper(0x8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void IDictionary::SetCompareMode(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long IDictionary::GetCompareMode()
{
	long result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// IFileSystem properties

/////////////////////////////////////////////////////////////////////////////
// IFileSystem operations

LPDISPATCH IFileSystem::GetDrives()
{
	LPDISPATCH result;
	InvokeHelper(0x271a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString IFileSystem::BuildPath(LPCTSTR Path, LPCTSTR Name)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x2710, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		Path, Name);
	return result;
}

CString IFileSystem::GetDriveName(LPCTSTR Path)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2714, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		Path);
	return result;
}

CString IFileSystem::GetParentFolderName(LPCTSTR Path)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2715, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		Path);
	return result;
}

CString IFileSystem::GetFileName(LPCTSTR Path)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2716, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		Path);
	return result;
}

CString IFileSystem::GetBaseName(LPCTSTR Path)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2717, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		Path);
	return result;
}

CString IFileSystem::GetExtensionName(LPCTSTR Path)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2718, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		Path);
	return result;
}

CString IFileSystem::GetAbsolutePathName(LPCTSTR Path)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2712, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		Path);
	return result;
}

CString IFileSystem::GetTempName()
{
	CString result;
	InvokeHelper(0x2713, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL IFileSystem::DriveExists(LPCTSTR DriveSpec)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x271f, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		DriveSpec);
	return result;
}

BOOL IFileSystem::FileExists(LPCTSTR FileSpec)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2720, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		FileSpec);
	return result;
}

BOOL IFileSystem::FolderExists(LPCTSTR FolderSpec)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2721, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		FolderSpec);
	return result;
}

LPDISPATCH IFileSystem::GetDrive(LPCTSTR DriveSpec)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x271b, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		DriveSpec);
	return result;
}

LPDISPATCH IFileSystem::GetFile(LPCTSTR FilePath)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x271c, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		FilePath);
	return result;
}

LPDISPATCH IFileSystem::GetFolder(LPCTSTR FolderPath)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x271d, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		FolderPath);
	return result;
}

LPDISPATCH IFileSystem::GetSpecialFolder(long SpecialFolder)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x271e, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		SpecialFolder);
	return result;
}

void IFileSystem::DeleteFile(LPCTSTR FileSpec, BOOL Force)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL;
	InvokeHelper(0x4b0, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileSpec, Force);
}

void IFileSystem::DeleteFolder(LPCTSTR FolderSpec, BOOL Force)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL;
	InvokeHelper(0x4b1, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FolderSpec, Force);
}

void IFileSystem::MoveFile(LPCTSTR Source, LPCTSTR Destination)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x4b4, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Source, Destination);
}

void IFileSystem::MoveFolder(LPCTSTR Source, LPCTSTR Destination)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x4b5, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Source, Destination);
}

void IFileSystem::CopyFile(LPCTSTR Source, LPCTSTR Destination, BOOL OverWriteFiles)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BOOL;
	InvokeHelper(0x4b2, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Source, Destination, OverWriteFiles);
}

void IFileSystem::CopyFolder(LPCTSTR Source, LPCTSTR Destination, BOOL OverWriteFiles)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BOOL;
	InvokeHelper(0x4b3, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Source, Destination, OverWriteFiles);
}

LPDISPATCH IFileSystem::CreateFolder(LPCTSTR Path)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x460, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Path);
	return result;
}

LPDISPATCH IFileSystem::CreateTextFile(LPCTSTR FileName, BOOL Overwrite, BOOL Unicode)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_BOOL;
	InvokeHelper(0x44d, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		FileName, Overwrite, Unicode);
	return result;
}

LPDISPATCH IFileSystem::OpenTextFile(LPCTSTR FileName, long IOMode, BOOL Create, long Format)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_BOOL VTS_I4;
	InvokeHelper(0x44c, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		FileName, IOMode, Create, Format);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// IDriveCollection properties

/////////////////////////////////////////////////////////////////////////////
// IDriveCollection operations

LPDISPATCH IDriveCollection::GetItem(const VARIANT& Key)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms,
		&Key);
	return result;
}

long IDriveCollection::GetCount()
{
	long result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// IDrive properties

/////////////////////////////////////////////////////////////////////////////
// IDrive operations

CString IDrive::GetPath()
{
	CString result;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString IDrive::GetDriveLetter()
{
	CString result;
	InvokeHelper(0x2710, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString IDrive::GetShareName()
{
	CString result;
	InvokeHelper(0x2711, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

long IDrive::GetDriveType()
{
	long result;
	InvokeHelper(0x2712, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

LPDISPATCH IDrive::GetRootFolder()
{
	LPDISPATCH result;
	InvokeHelper(0x2713, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

VARIANT IDrive::GetAvailableSpace()
{
	VARIANT result;
	InvokeHelper(0x2715, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}
/*
VARIANT IDrive::GetFreeSpace()
{
	VARIANT result;
	InvokeHelper(0x2714, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}
*/
VARIANT IDrive::GetTotalSize()
{
	VARIANT result;
	InvokeHelper(0x2716, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString IDrive::GetVolumeName()
{
	CString result;
	InvokeHelper(0x2717, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void IDrive::SetVolumeName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2717, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString IDrive::GetFileSystem()
{
	CString result;
	InvokeHelper(0x2718, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

long IDrive::GetSerialNumber()
{
	long result;
	InvokeHelper(0x2719, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL IDrive::GetIsReady()
{
	BOOL result;
	InvokeHelper(0x271a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// IFolder properties

/////////////////////////////////////////////////////////////////////////////
// IFolder operations

CString IFolder::GetPath()
{
	CString result;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString IFolder::GetName()
{
	CString result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void IFolder::SetName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString IFolder::GetShortPath()
{
	CString result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString IFolder::GetShortName()
{
	CString result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH IFolder::GetDrive()
{
	LPDISPATCH result;
	InvokeHelper(0x3ec, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH IFolder::GetParentFolder()
{
	LPDISPATCH result;
	InvokeHelper(0x3ed, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long IFolder::GetAttributes()
{
	long result;
	InvokeHelper(0x3eb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void IFolder::SetAttributes(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3eb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

DATE IFolder::GetDateCreated()
{
	DATE result;
	InvokeHelper(0x3ee, DISPATCH_PROPERTYGET, VT_DATE, (void*)&result, NULL);
	return result;
}

DATE IFolder::GetDateLastModified()
{
	DATE result;
	InvokeHelper(0x3ef, DISPATCH_PROPERTYGET, VT_DATE, (void*)&result, NULL);
	return result;
}

DATE IFolder::GetDateLastAccessed()
{
	DATE result;
	InvokeHelper(0x3f0, DISPATCH_PROPERTYGET, VT_DATE, (void*)&result, NULL);
	return result;
}

CString IFolder::GetType()
{
	CString result;
	InvokeHelper(0x3f2, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void IFolder::Delete(BOOL Force)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x4b1, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Force);
}

void IFolder::Copy(LPCTSTR Destination, BOOL OverWriteFiles)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL;
	InvokeHelper(0x4b3, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Destination, OverWriteFiles);
}

void IFolder::Move(LPCTSTR Destination)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x4b5, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Destination);
}

BOOL IFolder::GetIsRootFolder()
{
	BOOL result;
	InvokeHelper(0x2710, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

VARIANT IFolder::GetSize()
{
	VARIANT result;
	InvokeHelper(0x3f1, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

LPDISPATCH IFolder::GetSubFolders()
{
	LPDISPATCH result;
	InvokeHelper(0x2711, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH IFolder::GetFiles()
{
	LPDISPATCH result;
	InvokeHelper(0x2712, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH IFolder::CreateTextFile(LPCTSTR FileName, BOOL Overwrite, BOOL Unicode)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_BOOL;
	InvokeHelper(0x44d, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		FileName, Overwrite, Unicode);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// IFolderCollection properties

/////////////////////////////////////////////////////////////////////////////
// IFolderCollection operations

LPDISPATCH IFolderCollection::Add(LPCTSTR Name)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Name);
	return result;
}

LPDISPATCH IFolderCollection::GetItem(const VARIANT& Key)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms,
		&Key);
	return result;
}

long IFolderCollection::GetCount()
{
	long result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// IFileCollection properties

/////////////////////////////////////////////////////////////////////////////
// IFileCollection operations

LPDISPATCH IFileCollection::GetItem(const VARIANT& Key)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms,
		&Key);
	return result;
}

long IFileCollection::GetCount()
{
	long result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// IFile properties

/////////////////////////////////////////////////////////////////////////////
// IFile operations

CString IFile::GetPath()
{
	CString result;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString IFile::GetName()
{
	CString result;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void IFile::SetName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString IFile::GetShortPath()
{
	CString result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString IFile::GetShortName()
{
	CString result;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

LPDISPATCH IFile::GetDrive()
{
	LPDISPATCH result;
	InvokeHelper(0x3ec, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

LPDISPATCH IFile::GetParentFolder()
{
	LPDISPATCH result;
	InvokeHelper(0x3ed, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

long IFile::GetAttributes()
{
	long result;
	InvokeHelper(0x3eb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void IFile::SetAttributes(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3eb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

DATE IFile::GetDateCreated()
{
	DATE result;
	InvokeHelper(0x3ee, DISPATCH_PROPERTYGET, VT_DATE, (void*)&result, NULL);
	return result;
}

DATE IFile::GetDateLastModified()
{
	DATE result;
	InvokeHelper(0x3ef, DISPATCH_PROPERTYGET, VT_DATE, (void*)&result, NULL);
	return result;
}

DATE IFile::GetDateLastAccessed()
{
	DATE result;
	InvokeHelper(0x3f0, DISPATCH_PROPERTYGET, VT_DATE, (void*)&result, NULL);
	return result;
}

VARIANT IFile::GetSize()
{
	VARIANT result;
	InvokeHelper(0x3f1, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString IFile::GetType()
{
	CString result;
	InvokeHelper(0x3f2, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void IFile::Delete(BOOL Force)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x4b0, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Force);
}

void IFile::Copy(LPCTSTR Destination, BOOL OverWriteFiles)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL;
	InvokeHelper(0x4b2, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Destination, OverWriteFiles);
}

void IFile::Move(LPCTSTR Destination)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x4b4, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Destination);
}

LPDISPATCH IFile::OpenAsTextStream(long IOMode, long Format)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x44c, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		IOMode, Format);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// ITextStream properties

/////////////////////////////////////////////////////////////////////////////
// ITextStream operations

long ITextStream::GetLine()
{
	long result;
	InvokeHelper(0x2710, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long ITextStream::GetColumn()
{
	long result;
	InvokeHelper(0xfffffdef, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL ITextStream::GetAtEndOfStream()
{
	BOOL result;
	InvokeHelper(0x2712, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL ITextStream::GetAtEndOfLine()
{
	BOOL result;
	InvokeHelper(0x2713, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

CString ITextStream::Read(long Characters)
{
	CString result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2714, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		Characters);
	return result;
}

CString ITextStream::ReadLine()
{
	CString result;
	InvokeHelper(0x2715, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString ITextStream::ReadAll()
{
	CString result;
	InvokeHelper(0x2716, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

void ITextStream::Write(LPCTSTR Text)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2717, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Text);
}

void ITextStream::WriteLine(LPCTSTR Text)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2718, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Text);
}

void ITextStream::WriteBlankLines(long Lines)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2719, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Lines);
}

void ITextStream::Skip(long Characters)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x271a, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Characters);
}

void ITextStream::SkipLine()
{
	InvokeHelper(0x271b, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void ITextStream::Close()
{
	InvokeHelper(0x271c, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// IFileSystem3 properties

/////////////////////////////////////////////////////////////////////////////
// IFileSystem3 operations

LPDISPATCH IFileSystem3::GetDrives()
{
	LPDISPATCH result;
	InvokeHelper(0x271a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

CString IFileSystem3::BuildPath(LPCTSTR Path, LPCTSTR Name)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x2710, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		Path, Name);
	return result;
}

CString IFileSystem3::GetDriveName(LPCTSTR Path)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2714, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		Path);
	return result;
}

CString IFileSystem3::GetParentFolderName(LPCTSTR Path)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2715, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		Path);
	return result;
}

CString IFileSystem3::GetFileName(LPCTSTR Path)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2716, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		Path);
	return result;
}

CString IFileSystem3::GetBaseName(LPCTSTR Path)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2717, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		Path);
	return result;
}

CString IFileSystem3::GetExtensionName(LPCTSTR Path)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2718, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		Path);
	return result;
}

CString IFileSystem3::GetAbsolutePathName(LPCTSTR Path)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2712, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		Path);
	return result;
}

CString IFileSystem3::GetTempName()
{
	CString result;
	InvokeHelper(0x2713, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL IFileSystem3::DriveExists(LPCTSTR DriveSpec)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x271f, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		DriveSpec);
	return result;
}

BOOL IFileSystem3::FileExists(LPCTSTR FileSpec)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2720, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		FileSpec);
	return result;
}

BOOL IFileSystem3::FolderExists(LPCTSTR FolderSpec)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2721, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		FolderSpec);
	return result;
}

LPDISPATCH IFileSystem3::GetDrive(LPCTSTR DriveSpec)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x271b, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		DriveSpec);
	return result;
}

LPDISPATCH IFileSystem3::GetFile(LPCTSTR FilePath)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x271c, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		FilePath);
	return result;
}

LPDISPATCH IFileSystem3::GetFolder(LPCTSTR FolderPath)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x271d, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		FolderPath);
	return result;
}

LPDISPATCH IFileSystem3::GetSpecialFolder(long SpecialFolder)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x271e, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		SpecialFolder);
	return result;
}

void IFileSystem3::DeleteFile(LPCTSTR FileSpec, BOOL Force)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL;
	InvokeHelper(0x4b0, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileSpec, Force);
}

void IFileSystem3::DeleteFolder(LPCTSTR FolderSpec, BOOL Force)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL;
	InvokeHelper(0x4b1, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FolderSpec, Force);
}

void IFileSystem3::MoveFile(LPCTSTR Source, LPCTSTR Destination)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x4b4, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Source, Destination);
}

void IFileSystem3::MoveFolder(LPCTSTR Source, LPCTSTR Destination)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x4b5, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Source, Destination);
}

void IFileSystem3::CopyFile(LPCTSTR Source, LPCTSTR Destination, BOOL OverWriteFiles)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BOOL;
	InvokeHelper(0x4b2, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Source, Destination, OverWriteFiles);
}

void IFileSystem3::CopyFolder(LPCTSTR Source, LPCTSTR Destination, BOOL OverWriteFiles)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_BOOL;
	InvokeHelper(0x4b3, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Source, Destination, OverWriteFiles);
}

LPDISPATCH IFileSystem3::CreateFolder(LPCTSTR Path)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x460, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		Path);
	return result;
}

LPDISPATCH IFileSystem3::CreateTextFile(LPCTSTR FileName, BOOL Overwrite, BOOL Unicode)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL VTS_BOOL;
	InvokeHelper(0x44d, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		FileName, Overwrite, Unicode);
	return result;
}

LPDISPATCH IFileSystem3::OpenTextFile(LPCTSTR FileName, long IOMode, BOOL Create, long Format)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_BOOL VTS_I4;
	InvokeHelper(0x44c, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		FileName, IOMode, Create, Format);
	return result;
}

LPDISPATCH IFileSystem3::GetStandardStream(long StandardStreamType, BOOL Unicode)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_I4 VTS_BOOL;
	InvokeHelper(0x4e20, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		StandardStreamType, Unicode);
	return result;
}

CString IFileSystem3::GetFileVersion(LPCTSTR FileName)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x4e2a, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		FileName);
	return result;
}


/////////////////////////////////////////////////////////////////////////////
// IScriptEncoder properties

/////////////////////////////////////////////////////////////////////////////
// IScriptEncoder operations

CString IScriptEncoder::EncodeScriptFile(LPCTSTR szExt, LPCTSTR bstrStreamIn, long cFlags, LPCTSTR bstrDefaultLang)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR VTS_I4 VTS_BSTR;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		szExt, bstrStreamIn, cFlags, bstrDefaultLang);
	return result;
}
