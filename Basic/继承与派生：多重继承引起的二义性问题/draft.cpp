#include<iostream>
using namespace std;

class A 
{
public:
	int a;
};

class B
{
public:
	int a;
};

class C :public A, public B
{
public:
	int b;
	void show();
};

int main()
{
	C c;
	c.A::a = 1;
	c.B::a = 2;
}