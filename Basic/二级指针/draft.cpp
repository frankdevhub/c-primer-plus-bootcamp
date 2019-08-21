#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	char *name[] = { "java", "python" };
	char** index = name + 1;
	cout << *index << endl;
	cout << **index << endl;
	system("pause");
	return 0;
}
