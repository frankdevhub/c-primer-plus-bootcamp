#include<iostream>
#include<fstream>
using namespace std;

#define MAX_LINE_LENGTH 100

int main()
{
	ifstream* inFilePtr;
	char * strPtr, *strFileNamePtr;
	strPtr = new char[MAX_LINE_LENGTH];
	strFileNamePtr = new char[MAX_LINE_LENGTH];

	cout << "请输入要显示的文件的文件名:" << endl;
	cin >> strFileNamePtr;

	inFilePtr = new ifstream(strFileNamePtr);
	if (inFilePtr == NULL)
	{
		cout << "打开文件:" << strFileNamePtr << "失败!" << endl;
		exit(1);
	}

	while (!inFilePtr->eof())
	{
		inFilePtr->getline(strPtr,MAX_LINE_LENGTH);
		cout << strPtr << endl;
	}


	delete[] strPtr;
	delete[] strFileNamePtr;
	delete inFilePtr;


	system("pause");
	return 0;
}


