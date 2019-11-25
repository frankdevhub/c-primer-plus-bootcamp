#include "afxstr.h"
#include "minwindef.h"
#include "winBase.h"
#include "tchar.h"
#include <cstdio>


using namespace std;

int main()
{
	DWORD size;
	int drives;
	size = ::GetLogicalDriveStrings(0, NULL);
	if (size != 0)
	{
		HANDLE heap = ::GetProcessHeap();
		LPSTR lp = (LPSTR)HeapAlloc(heap, HEAP_ZERO_MEMORY, sizeof(TCHAR));
		::GetLogicalDriveStrings(size*sizeof(TCHAR), lp);
		while (*lp != 0)
		{
			UINT res = GetDriveType(lp);
			if (res == DRIVE_FIXED)
			{
				lp = _tcschr(lp, 0) + 1;
			}
			drives++;
		}
	}
	LPTSTR namebuf = new char[12];
	DWORD namesize = 12;
	DWORD serialnumber;
	DWORD maxlen;
	DWORD fileflag;
	LPTSTR sysnamebuf = new char[10];
	DWORD sysnamesize = 10;
	int num = drives;
	for (int i = 0; i < num; i++)
	{
		CString str, temp;
		//str = m_disklist.GetItemText(i, 0);
		::GetVolumeInformation(str, namebuf, namesize, &serialnumber, &maxlen, &fileflag,
			sysnamebuf, sysnamesize);
		temp.Format("%s", namebuf);
	}


}