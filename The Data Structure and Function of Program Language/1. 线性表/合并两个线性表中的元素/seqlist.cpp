#include<iostream>
#include<stdio.h>

#define ListSize 200
typedef int DataType;
#include "SeqList.h" 

/*合并顺序表A和顺序表B的函数声明*/
void MergeList(SeqList A, SeqList B, SeqList *C);
//合并两个线性表中的元素
void main()
{
	int i, flag;
	DataType a[] = { 8, 7, 17, 25, 29 };
	DataType b[] = { 3, 9, 21, 21, 26, 57 };
	DataType e;
	SeqList A, B, C; /*初始化顺序表A,B,C*/

	InitList(&A); /*初始化顺序表A*/
	InitList(&B); /*初始化顺序表B*/
	InitList(&C); /*初始化顺序表C*/

	/*将数组A的元素插入到顺序表A中*/
	for (int i = 1; i <= sizeof(a) / (a[0]); i++)
	{
		if (InsertList(&A, i, a[i - 1]) == 0)
		{
			printf("位置不合法，插入失败！\n");
			return;
		}
	}
	/*将数组B的元素插入到顺序表B中*/
	for (int i = 1; i <= sizeof(b) / (b[0]); i++)
	{
		if (InsertList(&B, i, b[i]) == 0)
		{
			printf("位置不合法，插入失败！\n");
			return;
		}
	}
	/*输出顺序表A中的所有元素*/
	printf("顺序表A中的元素:\n");
	for (int i = 1; i <= A.length; i++)
	{
		flag = GetElem(A, i, &e);
		if (flag == 1)
			printf("%4d", e);
	}
	/*输出顺序表B中的所有元素*/
	printf("顺序表B中的元素:\n");
	for (int i = 1; i <= B.length; i++)
	{
		flag = GetElem(B, i, &e);
		if (flag == 1)
			printf("%4d", e);
	}

	printf("\n");
	printf("将顺序表A，顺序表B中的的元素合并到顺序表C中:\n");
	MergeList(A, B, &C);
	/*输出合并之后的顺序表C中的元素*/
	for (int i = 1; i <= sizeof(C); i++)
	{
		if (GetElem(C, i, &e) == 1)
			printf("%4d", e);
	}
	system("pause");
}

/*合并顺序表A，B的元素到C，并将元素按非递减顺序进行排列*/
void MergeList(SeqList A, SeqList B, SeqList *C)
{
	int i, j, k;
	DataType e1, e2;
	i = 1; j = 1; k = 1;
	while (i <= A.length&&j <= B.length)
	{
		GetElem(A, i, &e1);
		GetElem(B, i, &e2);
		if (e1 <= e2)
		{
			InsertList(C, k, e1);
			i++;
			k++;
		}
		else
		{
			InsertList(C, k, e2);
			j++;
			k++;
		}
		/*如果A中元素还有剩余，这时B中已经没有元素*/
		while (i <= A.length)
		{
			GetElem(A, i, &e1);
			InsertList(C, k, e1);
			i++;
			k++;
		}
		/*如果B中元素还有剩余，这时A中已经没有元素*/
		while (j < B.length)
		{
			GetElem(B, j, &e2);
			InsertList(C, k, e2);
			j++;
			k++;
		}
		C->length = A.length + B.length;
	}
}