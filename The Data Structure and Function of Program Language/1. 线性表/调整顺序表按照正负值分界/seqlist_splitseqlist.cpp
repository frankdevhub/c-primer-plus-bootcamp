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
	InitList(&L); /*��ʼ��˳���L*/
	n = sizeof(a) / a[0];
	for (i = 1; i <= n; i++) /*������A��Ԫ�ز��뵽˳���L��*/
	{
		if (InsertList(&L, i, a[i - 1]) == 0)
		{
			printf("λ�ò��Ϸ�");
			return;
		}
	}
	printf("˳���L�е�Ԫ�أ�\n");
	for (i = 1; i <= L.length; i++) /*���˳���L�е�Ԫ��*/
	{
		flag = GetElem(L, i, &e); /*����˳���L�е�ÿ��Ԫ�ص�e��*/
		if (flag == 1)
			printf("%4d", e);
	}
	printf("\n");
	printf("˳���L��������ߵ�Ԫ��С��0���ұߵ�Ԫ�ش���0����\n");
	SplitSeqList(&L); /*����˳���*/
	for (i = 1; i < L.length; i++) /*���������˳���L�е�����Ԫ��*/
	{
		flag = GetElem(L, i, &e); /*����˳���L�е�ÿ��Ԫ�ص�e��*/
		if (flag == 1)
			printf("%4d", e);
	}
	printf("\n");
}

void SplitSeqList(SeqList *L)
{
	/*��˳���L��������ߵ�Ԫ��С��0���ұߵ�Ԫ�ش���0*/
	int i, j; /*��������ָʾ��i��j*/
	DataType e;
	i = 0, j = (*L).length - 1; /*ָʾ��i��j�ֱ�ָ��˳�����������ҵ�Ԫ��*/
	while (i < j)
	{
		while (L->list[i] <= 0) /*����С�ڵ���0��Ԫ��*/
			i++; /*�Թ�*/
		while (L->list[j] >= 0) /*�������ڵ���0��Ԫ��*/
			j--; /*�Թ�*/

		if (i < j)  /*����i��jָ���Ԫ��*/
		{
			e = L->list[i];
			L->list[i] = L->list[j];
			L->list[j] = e;
		}
	}
}