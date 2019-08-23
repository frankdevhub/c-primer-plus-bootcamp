#include<iostream>
using namespace std;

int main()
{
	int foo[2][3] = { { 1, 2, 3 },{ 4, 5, 6 } };
	int(*p)[3] = &foo[0];

	int i, j = 0;
	for (i = 0; i < 2;i++)
	for (j = 0; j < 3; j++)
	
		cout << *(*(p + i) + j) << ";" << endl;


	system("pause");
	return 0;
}