#include<iostream>


//使用指针交换两个数不能使用交换指针值的方式，而是要直接修改指针指向的值的方式
int main()
{
	void swap(int * num1 , int* num2);
	int a, b, *point1, *point2;

	std::cin >> a >> b;
	point1 = &a;
	point2 = &b;

	swap(point1,point2);
	printf("a:%d,b:%d", a,b);

	system("pause");
}


void swap(int * point1,int * point2)
{
	int * temp;
	temp = point1;
	point1 = point2;
	point2 = temp;

}