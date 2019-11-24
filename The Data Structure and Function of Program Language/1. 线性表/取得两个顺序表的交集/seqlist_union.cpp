#include<iostream>
#include "SeqList.h"
#define ListSize 200
typedef int DataType;  /*定义元素类型为整型*/

void UnionAB(SeqList *A, SeqList B); /*将顺序表B中的元素添加到顺序表A中取并集*/
void main()
{
	int i, flag;
	DataType e;
	DataType a[] = { 81, 32, 6, 12, 39, 25 };
	DataType b[] = { 12, 44, 39, 16, 28, 6, 61, 76 };
	SeqList LA, LB; /*声明顺序表LA,LB*/
	InitList(&LA); /*初始化顺序表LA*/
	InitList(&LB); /*初始化顺序表LB*/

	for (i = 0; i < sizeof(a) / a[0]; i++) /*将数组a的元素插入到表LA中*/
	{
		if (InsertList(&LA, i + 1, a[i]) == 0)
		{
			printf("位置不合法");
			return;
		}
	}
	for (i = 0; i < sizeof(a) / b[0]; i++) /*将数组b的元素插入到表LB中*/
	{
		if (InsertList(&LB, i + 1, b[i]) == 0)
		{
			printf("位置不合法");
			return;
		}
	}
	printf("顺序表LA中的元素");
	for (i = 1; i <= LA.length; i++)
	{
		flag = GetElem(LA, i, &e); /*返回顺序表LA中的每个元素存放到e中*/
		if (flag == 1)
			printf("%4d", e);
	}
	printf("顺序表LB中的元素");
	for (i = 1; i <= LB.length; i++)
	{
		flag = GetElem(LB, i, &e);/*返回顺序表LB中的每个元素存放到e中*/
		if (flag == 1)
			printf("%4d", e);
	}
	printf("将LB中但不在LA中的元素插入LA中：\n");

	UnionAB(&LA, LB); /*将LB中但不在LA中的元素插入LA*/
	for (i = 1; i <= LA.length; i++)
	{
		flag = GetElem(LA, i, &e);
		if (flag == 1)
			printf("%4d", e);
	}


}

void UnionAB(SeqList *A, SeqList B) /*将顺序表B中的元素添加到顺序表A中取并集*/
{
	int i, flag, pos;
	DataType e;
	for (i = 1; i < A->length; i++)
	{
		flag = GetElem(B, i, &e);
		if (flag == 1)
		{
			pos = LocateElem(*A, e);  /*在LA中获取和LB中相同元素的索引位置*/
			if (!pos)
			{
				InsertList(A, A->length + 1, e); /*将存在LB但不在LA中的元素插入LA尾部*/
			}
		}

	}

}