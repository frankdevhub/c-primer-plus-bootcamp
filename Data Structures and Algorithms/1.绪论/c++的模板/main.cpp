#include<iostream>
#include"one_array.h"
using namespace std;

#define MAX_LINE_LENGTH 100

int main()
{
	int n = 6;
	OneArray<int> a(n);

	int i;
	for (i = 0; i < n; i++) a[i] = i;
	for (i = 0; i < n; i++) cout << a[i] << " ";

	cout << endl;

	system("pause");
	return 0;
}


