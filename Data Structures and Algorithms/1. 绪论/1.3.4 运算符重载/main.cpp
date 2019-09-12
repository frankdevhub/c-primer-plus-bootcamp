#include<iostream>
#include "complex.h"
using namespace std;

int main()
{
	Complex z1(6, 8);
	z1.Show();

	Complex z2(8, 9);
	z2.Show();

	Complex z3;
	z3 = z1 + z2;
	z3.Show();


	Complex z4;
	z4 = z2 - z1;
	z4.Show();

	system("pause");
	return 0;
}