#include <stdio.h>
#define ListSize 200
typedef int DataType;
#include "seqList.h"  /*包含顺序表A的基本运算*/

void DelElem(SeqList *A, SeqList B); /*删除A中存在的出现于B中的元素*/

void main()
{
	int i, j, flag;
	DataType e;
	SeqList A, B; /*声明顺序表A，顺序表B*/
	InitList(&A); /*初始化顺序表A*/
	InitList(&B); /*初始化顺序表B*/
	for (i = 1; i <= 10; i++) /*插入顺序表A中10个数*/
	{
		if (InsertList(&A, i, i * 2 + 10))
		{
			printf("位置不合法");
			return;
		}
	}
	for (i = 1, j = 10; i <= 8; j = j + 2, i++) /*插入顺序表B中10个数*/
	{
		if (InsertList(&B, i, j + i * 2))
		{
			printf("位置不合法");
			return;
		}
	}
	/*顺序表A中的元素*/
	printf("顺序表A中的元素:\n");
	for (int i = 1; i < A.length; i++)
	{
		flag = GetElem(A, i, &e);
		if (flag == 1)
			printf("%4d", e);
	}
	printf("\n");
	/*顺序表B中的元素*/
	printf("顺序表B中的元素:\n");
	for (int i = 1; i < B.length; i++)
	{
		flag = GetElem(B, i, &e);
		if (flag == 1)
			printf("%4d", e);
	}
	printf("\n");
	printf("将在A中出现的存在于B中的元素删除后，A中的元素（即A-B ）:\n");
	DelElem(&A, B); /*删除在A出现的存在于B中的元素*/
	for (int i = 1; i <= A.length; i++) /*输出A中处理完的剩下的元素*/
	{
		flag = GetElem(A, i, &e);
		if (flag == 1)
			printf("%4d", e);
	}
	printf("\n");
}

void DelElem(SeqList *A, SeqList B)
{
	/*求A-B，A和B的差集*/
	int i, flag, pos;
	DataType e;
	for (i = 1; i <= B.length; i++)
	{
		flag = GetElem(B, i, &e); /*将B中的元素取出暂存在e中*/
		if (flag == 1)
		{
			pos = LocateElem(*A, e); /*在A中查找定位取出的元素*/
			if (pos > 0)
			{
				DeleteList(A, pos, &e); /*删除A中对应索引下存在的存在于B中的元素*/
			}
		}
	}
}


