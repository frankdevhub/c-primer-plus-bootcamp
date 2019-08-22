#include<iostream>
using namespace std;


int getString_length(const char *p)
{
	if (*p == '\0')
		return 0;
	return 1 + getString_length(p+1);
}


int main()
{
	char *foo = "this is a test string";
	
	cout << getString_length(foo);
	system("pause");
	return 0;
}
