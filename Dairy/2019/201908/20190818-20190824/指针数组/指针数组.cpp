#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	void sort(char* name[], int);
	void print(char* name[], int);

	char * source[5] = { "C++", "Java", "Lua","Javascript","Mysql" };


	print(source,5);
	cout << "***********************" << endl;

	sort(source,5);
	print(source, 5);
	

	system("pause");
	return 0;
}
//排序
void sort(char * name[], int size)
{
	char* temp;
	int i, j, k;
	for ( i = 0; i < size;i++)
	{
		k = i;
		for ( j = i+1; j < size;j++)
		{
			if (strcmp(name[k], name[j])>0)
				k = j;
			if (k != j)
			{
				temp = name[i];
				name[i] = name[k];
				name[k] = temp;
			}
		}

	}
}


//输出数组元素
void print(char * name[],int size)
{
	for (int i = 0; i < size;i++)\
	{
		cout << name[i]<<endl;
	}
}
