#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
int main()
{
	string test = "test string";
	
	char * c = new char[test.length];
	strncpy(c, test.c_str, test.length);

	system("pause");
	return 0;
}
	
