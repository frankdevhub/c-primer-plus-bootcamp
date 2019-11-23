#include<iostream>
#include<stdio.h>

#define ListSize 200
typedef int DataType;
#include "SeqList.h" 

/*�ϲ�˳���A��˳���B�ĺ�������*/
void MergeList(SeqList A, SeqList B, SeqList *C);
//�ϲ��������Ա��е�Ԫ��
void main()
{
	int i, flag;
	DataType a[] = { 8, 7, 17, 25, 29 };
	DataType b[] = { 3, 9, 21, 21, 26, 57 };
	DataType e;
	SeqList A, B, C; /*��ʼ��˳���A,B,C*/

	InitList(&A); /*��ʼ��˳���A*/
	InitList(&B); /*��ʼ��˳���B*/
	InitList(&C); /*��ʼ��˳���C*/

	/*������A��Ԫ�ز��뵽˳���A��*/
	for (int i = 1; i <= sizeof(a) / (a[0]); i++)
	{
		if (InsertList(&A, i, a[i - 1]) == 0)
		{
			printf("λ�ò��Ϸ�������ʧ�ܣ�\n");
			return;
		}
	}
	/*������B��Ԫ�ز��뵽˳���B��*/
	for (int i = 1; i <= sizeof(b) / (b[0]); i++)
	{
		if (InsertList(&B, i, b[i]) == 0)
		{
			printf("λ�ò��Ϸ�������ʧ�ܣ�\n");
			return;
		}
	}
	/*���˳���A�е�����Ԫ��*/
	printf("˳���A�е�Ԫ��:\n");
	for (int i = 1; i <= A.length; i++)
	{
		flag = GetElem(A, i, &e);
		if (flag == 1)
			printf("%4d", e);
	}
	/*���˳���B�е�����Ԫ��*/
	printf("˳���B�е�Ԫ��:\n");
	for (int i = 1; i <= B.length; i++)
	{
		flag = GetElem(B, i, &e);
		if (flag == 1)
			printf("%4d", e);
	}

	printf("\n");
	printf("��˳���A��˳���B�еĵ�Ԫ�غϲ���˳���C��:\n");
	MergeList(A, B, &C);
	/*����ϲ�֮���˳���C�е�Ԫ��*/
	for (int i = 1; i <= sizeof(C); i++)
	{
		if (GetElem(C, i, &e) == 1)
			printf("%4d", e);
	}
	system("pause");
}

/*�ϲ�˳���A��B��Ԫ�ص�C������Ԫ�ذ��ǵݼ�˳���������*/
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
		/*���A��Ԫ�ػ���ʣ�࣬��ʱB���Ѿ�û��Ԫ��*/
		while (i <= A.length)
		{
			GetElem(A, i, &e1);
			InsertList(C, k, e1);
			i++;
			k++;
		}
		/*���B��Ԫ�ػ���ʣ�࣬��ʱA���Ѿ�û��Ԫ��*/
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