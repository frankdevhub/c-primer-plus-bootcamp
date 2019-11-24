#include<iostream>
#define ListSize 100
typedef int DataType;

typedef struct
{
	DataType list[ListSize];
	int length;
}SeqList;
//初始化线性表
void InitList(SeqList *L)
{
	L->length = 0; //把线性表的长度设置为零
}
//判断线性表是否为空
int ListEmpty(SeqList L)
{
	if (L.length == 0)
		return 1;
	else
		return 0;
}
//按序号查找
int GetElem(SeqList L, int i, DataType *e)
{
	//查找线性表中第n个元素，如果查找成功把值传递给e返回1，如果失败则返回-1
	if (i<1 || i>L.length)
		return -1;
	*e = L.list[i - 1];
	return 1;
}
//按内容查找
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

//插入操作
int InsertList(SeqList *L, int i, DataType e)
{
	int j;
	if (i<1 || i>L->length)
	{
		printf("输入的位置不合法！\n");
		return -1;
	}
	else if (L->length >= ListSize) /*在插入元素前先进行判断，如果线性表已经满额则不能进行插入*/
	{
		printf("顺序表已满，不能进行插入！\n");
	}
	else
	{
		for (j = L->length; j >= i; j--)
		{
			L->list[j] = L->list[j - 1];
		}
		L->list[i] = e;/*插入元素到第i个元素*/
		L->length = L->length + 1; /*将顺序表的长度加1*/
		return 1;
	}
}

//删除第i个元素
int DeleteList(SeqList *L, int i, DataType *e)
{
	int j;
	if (L->length < 0)
	{
		printf("顺序表已经为空，不能删除元素\n");
		return -1;
	}
	else if (i<1 || i>L->length)
	{
		printf("删除位置不合适！\n");
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
//求线性表的长度
int ListLength(SeqList L)
{
	return L.length;
}
//清空线性表
void ClearList(SeqList *L)
{
	L->length = 0;
}



