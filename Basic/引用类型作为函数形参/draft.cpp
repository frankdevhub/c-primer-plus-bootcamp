#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  void	swap_1(int *, int *);
  void swap_2(int &,int &);
  int a = 3, b = 5;
  cout << "a=" << a << "b=" << b << endl;
  swap_1(&a,&b);
  cout << "a=" << a << "b=" << b << endl;
  swap_2(a,b);
  cout << "a=" << a << "b=" << b << endl;
	system("pause");
	return 0;
}


void swap_1(int * p1,int * p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void swap_2(int &a, int &b)
{
	int temp = a;;
	a = b;
	b = temp;
}