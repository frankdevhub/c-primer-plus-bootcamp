#include<stdio.h>
#define ListSize 200
typedef int DataType;
#include "SeqList.h"

void SplitSeqList(SeqList *L);

void main()
{
	int i, flag, n;
	DataType e;
	SeqList L;
	int a[] = { 88, -9, -28, 19, -31, 22, -50, 62, -76 };
	InitList(&L); /*初始化顺序表L*/
	n = sizeof(a) / a[0];
	for (i = 1; i <= n; i++) /*将数组A的元素插入到顺序表L中*/
	{
		if (InsertList(&L, i, a[i - 1]) == 0)
		{
			printf("位置不合法");
			return;
		}
	}
	printf("顺序表L中的元素：\n");
	for (i = 1; i <= L.length; i++) /*输出顺序表L中的元素*/
	{
		flag = GetElem(L, i, &e); /*返回顺序表L中的每个元素到e中*/
		if (flag == 1)
			printf("%4d", e);
	}
	printf("\n");
	printf("顺序表L调整后（左边的元素小于0，右边的元素大于0）：\n");
	SplitSeqList(&L); /*调整顺序表*/
	for (i = 1; i < L.length; i++) /*输出调整后顺序表L中的所有元素*/
	{
		flag = GetElem(L, i, &e); /*返回顺序表L中的每个元素到e中*/
		if (flag == 1)
			printf("%4d", e);
	}
	printf("\n");
}

void SplitSeqList(SeqList *L)
{
	/*将顺序表L调整后左边的元素小于0，右边的元素大于0*/
	int i, j; /*定义两个指示器i和j*/
	DataType e;
	i = 0, j = (*L).length - 1; /*指示器i和j分别指向顺序表最左和最右的元素*/
	while (i < j)
	{
		while (L->list[i] <= 0) /*遇到小于等于0的元素*/
			i++; /*略过*/
		while (L->list[j] >= 0) /*遇到大于等于0的元素*/
			j--; /*略过*/

		if (i < j)  /*交换i和j指向的元素*/
		{
			e = L->list[i];
			L->list[i] = L->list[j];
			L->list[j] = e;
		}
	}
}