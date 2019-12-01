// Machine generated IDispatch wrapper class(es) created with ClassWizard
/////////////////////////////////////////////////////////////////////////////
// IDictionary wrapper class

class IDictionary : public COleDispatchDriver
{
public:
	IDictionary() {}		// Calls COleDispatchDriver default constructor
	IDictionary(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDictionary(const IDictionary& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void SetRefItem(VARIANT* Key, VARIANT* newValue);
	void SetItem(VARIANT* Key, VARIANT* newValue);
	VARIANT GetItem(VARIANT* Key);
	void Add(VARIANT* Key, VARIANT* Item);
	long GetCount();
	BOOL Exists(VARIANT* Key);
	VARIANT Items();
	void SetKey(VARIANT* Key, VARIANT* newValue);
	VARIANT Keys();
	void Remove(VARIANT* Key);
	void RemoveAll();
	void SetCompareMode(long nNewValue);
	long GetCompareMode();
};
/////////////////////////////////////////////////////////////////////////////
// IFileSystem wrapper class

class IFileSystem : public COleDispatchDriver
{
public:
	IFileSystem() {}		// Calls COleDispatchDriver default constructor
	IFileSystem(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IFileSystem(const IFileSystem& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetDrives();
	CString BuildPath(LPCTSTR Path, LPCTSTR Name);
	CString GetDriveName(LPCTSTR Path);
	CString GetParentFolderName(LPCTSTR Path);
	CString GetFileName(LPCTSTR Path);
	CString GetBaseName(LPCTSTR Path);
	CString GetExtensionName(LPCTSTR Path);
	CString GetAbsolutePathName(LPCTSTR Path);
	CString GetTempName();
	BOOL DriveExists(LPCTSTR DriveSpec);
	BOOL FileExists(LPCTSTR FileSpec);
	BOOL FolderExists(LPCTSTR FolderSpec);
	LPDISPATCH GetDrive(LPCTSTR DriveSpec);
	LPDISPATCH GetFile(LPCTSTR FilePath);
	LPDISPATCH GetFolder(LPCTSTR FolderPath);
	LPDISPATCH GetSpecialFolder(long SpecialFolder);
	void DeleteFile(LPCTSTR FileSpec, BOOL Force);
	void DeleteFolder(LPCTSTR FolderSpec, BOOL Force);
	void MoveFile(LPCTSTR Source, LPCTSTR Destination);
	void MoveFolder(LPCTSTR Source, LPCTSTR Destination);
	void CopyFile(LPCTSTR Source, LPCTSTR Destination, BOOL OverWriteFiles);
	void CopyFolder(LPCTSTR Source, LPCTSTR Destination, BOOL OverWriteFiles);
	LPDISPATCH CreateFolder(LPCTSTR Path);
	LPDISPATCH CreateTextFile(LPCTSTR FileName, BOOL Overwrite, BOOL Unicode);
	LPDISPATCH OpenTextFile(LPCTSTR FileName, long IOMode, BOOL Create, long Format);
};
/////////////////////////////////////////////////////////////////////////////
// IDriveCollection wrapper class

class IDriveCollection : public COleDispatchDriver
{
public:
	IDriveCollection() {}		// Calls COleDispatchDriver default constructor
	IDriveCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDriveCollection(const IDriveCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetItem(const VARIANT& Key);
	long GetCount();
};
/////////////////////////////////////////////////////////////////////////////
// IDrive wrapper class

class IDrive : public COleDispatchDriver
{
public:
	IDrive() {}		// Calls COleDispatchDriver default constructor
	IDrive(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDrive(const IDrive& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetPath();
	CString GetDriveLetter();
	CString GetShareName();
	long GetDriveType();
	LPDISPATCH GetRootFolder();
	VARIANT GetAvailableSpace();
	//VARIANT GetFreeSpace();
	VARIANT GetTotalSize();
	CString GetVolumeName();
	void SetVolumeName(LPCTSTR lpszNewValue);
	CString GetFileSystem();
	long GetSerialNumber();
	BOOL GetIsReady();
};
/////////////////////////////////////////////////////////////////////////////
// IFolder wrapper class

class IFolder : public COleDispatchDriver
{
public:
	IFolder() {}		// Calls COleDispatchDriver default constructor
	IFolder(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IFolder(const IFolder& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetPath();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	CString GetShortPath();
	CString GetShortName();
	LPDISPATCH GetDrive();
	LPDISPATCH GetParentFolder();
	long GetAttributes();
	void SetAttributes(long nNewValue);
	DATE GetDateCreated();
	DATE GetDateLastModified();
	DATE GetDateLastAccessed();
	CString GetType();
	void Delete(BOOL Force);
	void Copy(LPCTSTR Destination, BOOL OverWriteFiles);
	void Move(LPCTSTR Destination);
	BOOL GetIsRootFolder();
	VARIANT GetSize();
	LPDISPATCH GetSubFolders();
	LPDISPATCH GetFiles();
	LPDISPATCH CreateTextFile(LPCTSTR FileName, BOOL Overwrite, BOOL Unicode);
};
/////////////////////////////////////////////////////////////////////////////
// IFolderCollection wrapper class

class IFolderCollection : public COleDispatchDriver
{
public:
	IFolderCollection() {}		// Calls COleDispatchDriver default constructor
	IFolderCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IFolderCollection(const IFolderCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH Add(LPCTSTR Name);
	LPDISPATCH GetItem(const VARIANT& Key);
	long GetCount();
};
/////////////////////////////////////////////////////////////////////////////
// IFileCollection wrapper class

class IFileCollection : public COleDispatchDriver
{
public:
	IFileCollection() {}		// Calls COleDispatchDriver default constructor
	IFileCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IFileCollection(const IFileCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetItem(const VARIANT& Key);
	long GetCount();
};
/////////////////////////////////////////////////////////////////////////////
// IFile wrapper class

class IFile : public COleDispatchDriver
{
public:
	IFile() {}		// Calls COleDispatchDriver default constructor
	IFile(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IFile(const IFile& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetPath();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	CString GetShortPath();
	CString GetShortName();
	LPDISPATCH GetDrive();
	LPDISPATCH GetParentFolder();
	long GetAttributes();
	void SetAttributes(long nNewValue);
	DATE GetDateCreated();
	DATE GetDateLastModified();
	DATE GetDateLastAccessed();
	VARIANT GetSize();
	CString GetType();
	void Delete(BOOL Force);
	void Copy(LPCTSTR Destination, BOOL OverWriteFiles);
	void Move(LPCTSTR Destination);
	LPDISPATCH OpenAsTextStream(long IOMode, long Format);
};
/////////////////////////////////////////////////////////////////////////////
// ITextStream wrapper class

class ITextStream : public COleDispatchDriver
{
public:
	ITextStream() {}		// Calls COleDispatchDriver default constructor
	ITextStream(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ITextStream(const ITextStream& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetLine();
	long GetColumn();
	BOOL GetAtEndOfStream();
	BOOL GetAtEndOfLine();
	CString Read(long Characters);
	CString ReadLine();
	CString ReadAll();
	void Write(LPCTSTR Text);
	void WriteLine(LPCTSTR Text);
	void WriteBlankLines(long Lines);
	void Skip(long Characters);
	void SkipLine();
	void Close();
};
/////////////////////////////////////////////////////////////////////////////
// IFileSystem3 wrapper class

class IFileSystem3 : public COleDispatchDriver
{
public:
	IFileSystem3() {}		// Calls COleDispatchDriver default constructor
	IFileSystem3(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IFileSystem3(const IFileSystem3& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetDrives();
	CString BuildPath(LPCTSTR Path, LPCTSTR Name);
	CString GetDriveName(LPCTSTR Path);
	CString GetParentFolderName(LPCTSTR Path);
	CString GetFileName(LPCTSTR Path);
	CString GetBaseName(LPCTSTR Path);
	CString GetExtensionName(LPCTSTR Path);
	CString GetAbsolutePathName(LPCTSTR Path);
	CString GetTempName();
	BOOL DriveExists(LPCTSTR DriveSpec);
	BOOL FileExists(LPCTSTR FileSpec);
	BOOL FolderExists(LPCTSTR FolderSpec);
	LPDISPATCH GetDrive(LPCTSTR DriveSpec);
	LPDISPATCH GetFile(LPCTSTR FilePath);
	LPDISPATCH GetFolder(LPCTSTR FolderPath);
	LPDISPATCH GetSpecialFolder(long SpecialFolder);
	void DeleteFile(LPCTSTR FileSpec, BOOL Force);
	void DeleteFolder(LPCTSTR FolderSpec, BOOL Force);
	void MoveFile(LPCTSTR Source, LPCTSTR Destination);
	void MoveFolder(LPCTSTR Source, LPCTSTR Destination);
	void CopyFile(LPCTSTR Source, LPCTSTR Destination, BOOL OverWriteFiles);
	void CopyFolder(LPCTSTR Source, LPCTSTR Destination, BOOL OverWriteFiles);
	LPDISPATCH CreateFolder(LPCTSTR Path);
	LPDISPATCH CreateTextFile(LPCTSTR FileName, BOOL Overwrite, BOOL Unicode);
	LPDISPATCH OpenTextFile(LPCTSTR FileName, long IOMode, BOOL Create, long Format);
	LPDISPATCH GetStandardStream(long StandardStreamType, BOOL Unicode);
	CString GetFileVersion(LPCTSTR FileName);
};
/////////////////////////////////////////////////////////////////////////////
// IScriptEncoder wrapper class

class IScriptEncoder : public COleDispatchDriver
{
public:
	IScriptEncoder() {}		// Calls COleDispatchDriver default constructor
	IScriptEncoder(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IScriptEncoder(const IScriptEncoder& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString EncodeScriptFile(LPCTSTR szExt, LPCTSTR bstrStreamIn, long cFlags, LPCTSTR bstrDefaultLang);
};
