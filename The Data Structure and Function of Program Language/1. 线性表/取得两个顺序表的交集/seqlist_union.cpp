#include<iostream>
#include "SeqList.h"
#define ListSize 200
typedef int DataType;  /*����Ԫ������Ϊ����*/

void UnionAB(SeqList *A, SeqList B); /*��˳���B�е�Ԫ����ӵ�˳���A��ȡ����*/
void main()
{
	int i, flag;
	DataType e;
	DataType a[] = { 81, 32, 6, 12, 39, 25 };
	DataType b[] = { 12, 44, 39, 16, 28, 6, 61, 76 };
	SeqList LA, LB; /*����˳���LA,LB*/
	InitList(&LA); /*��ʼ��˳���LA*/
	InitList(&LB); /*��ʼ��˳���LB*/

	for (i = 0; i < sizeof(a) / a[0]; i++) /*������a��Ԫ�ز��뵽��LA��*/
	{
		if (InsertList(&LA, i + 1, a[i]) == 0)
		{
			printf("λ�ò��Ϸ�");
			return;
		}
	}
	for (i = 0; i < sizeof(a) / b[0]; i++) /*������b��Ԫ�ز��뵽��LB��*/
	{
		if (InsertList(&LB, i + 1, b[i]) == 0)
		{
			printf("λ�ò��Ϸ�");
			return;
		}
	}
	printf("˳���LA�е�Ԫ��");
	for (i = 1; i <= LA.length; i++)
	{
		flag = GetElem(LA, i, &e); /*����˳���LA�е�ÿ��Ԫ�ش�ŵ�e��*/
		if (flag == 1)
			printf("%4d", e);
	}
	printf("˳���LB�е�Ԫ��");
	for (i = 1; i <= LB.length; i++)
	{
		flag = GetElem(LB, i, &e);/*����˳���LB�е�ÿ��Ԫ�ش�ŵ�e��*/
		if (flag == 1)
			printf("%4d", e);
	}
	printf("��LB�е�����LA�е�Ԫ�ز���LA�У�\n");

	UnionAB(&LA, LB); /*��LB�е�����LA�е�Ԫ�ز���LA*/
	for (i = 1; i <= LA.length; i++)
	{
		flag = GetElem(LA, i, &e);
		if (flag == 1)
			printf("%4d", e);
	}


}

void UnionAB(SeqList *A, SeqList B) /*��˳���B�е�Ԫ����ӵ�˳���A��ȡ����*/
{
	int i, flag, pos;
	DataType e;
	for (i = 1; i < A->length; i++)
	{
		flag = GetElem(B, i, &e);
		if (flag == 1)
		{
			pos = LocateElem(*A, e);  /*��LA�л�ȡ��LB����ͬԪ�ص�����λ��*/
			if (!pos)
			{
				InsertList(A, A->length + 1, e); /*������LB������LA�е�Ԫ�ز���LAβ��*/
			}
		}

	}

}