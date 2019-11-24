#include<iostream>
#define ListSize 100
typedef int DataType;

typedef struct
{
	DataType list[ListSize];
	int length;
}SeqList;
//��ʼ�����Ա�
void InitList(SeqList *L)
{
	L->length = 0; //�����Ա�ĳ�������Ϊ��
}
//�ж����Ա��Ƿ�Ϊ��
int ListEmpty(SeqList L)
{
	if (L.length == 0)
		return 1;
	else
		return 0;
}
//����Ų���
int GetElem(SeqList L, int i, DataType *e)
{
	//�������Ա��е�n��Ԫ�أ�������ҳɹ���ֵ���ݸ�e����1�����ʧ���򷵻�-1
	if (i<1 || i>L.length)
		return -1;
	*e = L.list[i - 1];
	return 1;
}
//�����ݲ���
int LocateElem(SeqList L, DataType e)
{
	int i = 0;
	for (i = 0; i < L.length; i++)
	{
		if (L.list[i] == e)
			return i + 1;
	}
	return 0;
}

//�������
int InsertList(SeqList *L, int i, DataType e)
{
	int j;
	if (i<1 || i>L->length)
	{
		printf("�����λ�ò��Ϸ���\n");
		return -1;
	}
	else if (L->length >= ListSize) /*�ڲ���Ԫ��ǰ�Ƚ����жϣ�������Ա��Ѿ��������ܽ��в���*/
	{
		printf("˳������������ܽ��в��룡\n");
	}
	else
	{
		for (j = L->length; j >= i; j--)
		{
			L->list[j] = L->list[j - 1];
		}
		L->list[i] = e;/*����Ԫ�ص���i��Ԫ��*/
		L->length = L->length + 1; /*��˳���ĳ��ȼ�1*/
		return 1;
	}
}

//ɾ����i��Ԫ��
int DeleteList(SeqList *L, int i, DataType *e)
{
	int j;
	if (L->length < 0)
	{
		printf("˳����Ѿ�Ϊ�գ�����ɾ��Ԫ��\n");
		return -1;
	}
	else if (i<1 || i>L->length)
	{
		printf("ɾ��λ�ò����ʣ�\n");
		return -1;
	}
	else
	{
		*e = L->list[i - 1];
		for (j = i; j <= L->length; j++)
		{
			L->list[j - 1] = L->list[j];
		}
		L->length = L->length - 1;
		return 1;
	}
}
//�����Ա�ĳ���
int ListLength(SeqList L)
{
	return L.length;
}
//������Ա�
void ClearList(SeqList *L)
{
	L->length = 0;
}



