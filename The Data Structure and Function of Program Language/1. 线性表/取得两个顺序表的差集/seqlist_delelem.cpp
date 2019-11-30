#include <stdio.h>
#define ListSize 200
typedef int DataType;
#include "seqList.h"  /*����˳���A�Ļ�������*/

void DelElem(SeqList *A, SeqList B); /*ɾ��A�д��ڵĳ�����B�е�Ԫ��*/

void main()
{
	int i, j, flag;
	DataType e;
	SeqList A, B; /*����˳���A��˳���B*/
	InitList(&A); /*��ʼ��˳���A*/
	InitList(&B); /*��ʼ��˳���B*/
	for (i = 1; i <= 10; i++) /*����˳���A��10����*/
	{
		if (InsertList(&A, i, i * 2 + 10))
		{
			printf("λ�ò��Ϸ�");
			return;
		}
	}
	for (i = 1, j = 10; i <= 8; j = j + 2, i++) /*����˳���B��10����*/
	{
		if (InsertList(&B, i, j + i * 2))
		{
			printf("λ�ò��Ϸ�");
			return;
		}
	}
	/*˳���A�е�Ԫ��*/
	printf("˳���A�е�Ԫ��:\n");
	for (int i = 1; i < A.length; i++)
	{
		flag = GetElem(A, i, &e);
		if (flag == 1)
			printf("%4d", e);
	}
	printf("\n");
	/*˳���B�е�Ԫ��*/
	printf("˳���B�е�Ԫ��:\n");
	for (int i = 1; i < B.length; i++)
	{
		flag = GetElem(B, i, &e);
		if (flag == 1)
			printf("%4d", e);
	}
	printf("\n");
	printf("����A�г��ֵĴ�����B�е�Ԫ��ɾ����A�е�Ԫ�أ���A-B ��:\n");
	DelElem(&A, B); /*ɾ����A���ֵĴ�����B�е�Ԫ��*/
	for (int i = 1; i <= A.length; i++) /*���A�д������ʣ�µ�Ԫ��*/
	{
		flag = GetElem(A, i, &e);
		if (flag == 1)
			printf("%4d", e);
	}
	printf("\n");
}

void DelElem(SeqList *A, SeqList B)
{
	/*��A-B��A��B�Ĳ*/
	int i, flag, pos;
	DataType e;
	for (i = 1; i <= B.length; i++)
	{
		flag = GetElem(B, i, &e); /*��B�е�Ԫ��ȡ���ݴ���e��*/
		if (flag == 1)
		{
			pos = LocateElem(*A, e); /*��A�в��Ҷ�λȡ����Ԫ��*/
			if (pos > 0)
			{
				DeleteList(A, pos, &e); /*ɾ��A�ж�Ӧ�����´��ڵĴ�����B�е�Ԫ��*/
			}
		}
	}
}


