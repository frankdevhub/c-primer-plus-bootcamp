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

	cout << "������Ҫ��ʾ���ļ����ļ���:" << endl;
	cin >> strFileNamePtr;

	inFilePtr = new ifstream(strFileNamePtr);
	if (inFilePtr == NULL)
	{
		cout << "���ļ�:" << strFileNamePtr << "ʧ��!" << endl;
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


