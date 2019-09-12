#include<iostream>
#include "sqlist.h"

using namespace std;

template<class elemType>
SqList<elemType>::SqList(int size)
{
	maxSize = size;
	elems = new elemType[maxSize];
	count = 0;
}

int main()
{
	SqList<int>a(10);

	system("pause");
	return 0;
}