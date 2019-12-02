#include<stdlib.h>
#include<stdio.h>
typedef int DataType;
typedef struct Node
{
	DataType data;
	struct Node *next;
}ListNode, *LinkList;

/*��ʼ��������*/
void InitList(LinkList *head)
{
	if ((*head = (LinkList)malloc(sizeof(ListNode))) == NULL)
		/*Ϊͷ������洢�ռ�*/
		exit(-1);
	(*head)->next = NULL;
}
/*�жϵ������Ƿ�Ϊ��*/
int IsEmpty(LinkList head)
{
	if (head->next == NULL) /*����������ͷ����ָ����Ϊ��*/
		return 1;
	else
		return 0;
}
/*������Ų��ҵ������е�ĳ����㣬����ҵ��ͷ��ظý���ָ�룬ʧ���򷵻�NULL*/
ListNode* Get(LinkList head, int i)
{
	ListNode* p;
	int j;
	if (IsEmpty(head)) /*�������Ϊ��*/
		return NULL; /*����NULL*/
	if (i < 1)  /*�����Ų��Ϸ�*/
		return NULL; /*����NULL*/
	j = 0;
	while (p->next != NULL && j < i)
	{
		p = p->next;
		j++;
	}
	if (j == i) /*�ҵ���i�����*/
		return p; /*����ָ��p*/
	else
		return NULL; /*����NULL*/
}
/*�����ݲ���������ֵΪe�Ľ�㣬����ɹ����ؽ���ָ�룬ʧ�ܷ���NULL*/
ListNode* LocateElem(LinkList head, DataType e)
{
	ListNode *p;
	p = head->next; /*ָ��pָ���һ�����*/
	while (p)
	{
		if (p->data != e) /*û���ҵ���e��ȵ�Ԫ��*/
			p = p->next;  /*��������һ��Ԫ��*/
		else  /*�ҵ���e��ȵ�Ԫ��*/
			break; /*�˳�ѭ��*/
	}
	return p;
}
/*�����ݲ���������ֵΪe�Ľ�㣬����ɹ����ؽ�����ţ�ʧ�ܷ���0*/
int LocatePos(LinkList head, DataType e)
{
	ListNode *p;
	int i;
	if (IsEmpty(head)) /*�������Ϊ��*/
		return 0;
	p = head->next; /*ָ��pָ���һ�����*/
	i = 1;
	while (p)
	{
		if (p->data == e) /*�ҵ���e��ȵ�Ԫ��*/
			return i; /*���ظ����*/
		else
		{
			p = p->next;
			i++;
		}

	}
	if (!p) /*���û���ҵ���ȵ�Ԫ��*/
		return 0; /*����0*/
}
/*�ڵ������в���Ԫ��e*/
int InsertList(LinkList head, int i, DataType e)
/*�ڵ�������ĳһλ�ò���Ԫ��e������ɹ�����1,ʧ�ܷ���0*/
{
	ListNode *pre, *p;  /*�����i��Ԫ�ص�ǰ������ָ��pre��ָ��pΪ�²���Ľ���ָ��*/
	int j;
	pre = head; /*ָ��pָ��ͷ���*/
	while (pre->next != NULL && j < i - 1) /*�ҵ���i-1�����*/
	{
		pre = pre->next;
		j++;
	}
	if (j != i - 1) /*���û���ҵ�*/
	{
		printf("����λ�ô���");
		return 0;
	}
	/*������һ����㲢��eֵ���ݸ��������������*/
	if ((p = (LinkList)malloc(sizeof(ListNode))) == NULL)
		exit(-1);
	p->data = e;
	/*���������*/
	p->next = pre->next;
	pre->next = p;
	return 1;
}
/*ɾ����i�����*/
int DeleteList(LinkList head, int i, DataType *e)
/*ɾ���������еĵ�i��λ�õĽ�㣬ɾ���ɹ�����1��ɾ��ʧ�ܷ���0*/
{
	ListNode *pre, *p;
	int j;
	pre = head;
	j = 0;
	while (pre->next != NULL && pre->next->next != NULL && j < i - 1)
		/*�ж��Ƿ��ҵ�ǰ�����*/
	{
		pre = pre->next;
		j++;
	}
	if (j != i - 1) /*���û���ҵ�ɾ����λ�ã�˵�������ɾ��λ�ô���*/
	{
		printf("ɾ��λ������");
		return 0;
	}
	/*ָ��pָ�������еĵ�i����㣬�����������������ֵ��e*/
	p = pre->next;
	*e = p->data;
	/*��ǰ������ָ��ָ��Ҫɾ���Ľ�����һ��ָ��Ľ��*/
	pre->next = p->next;
	free(p); /*�ͷ�ָ��pָ��Ľ��*/
	return 1;
}
/*�������ȵĲ���*/
int ListLength(LinkList head)
{/*������ĳ���*/
	ListNode *p;
	int count = 0;
	p = head;
	while (p->next != NULL)
	{
		p = p->next;
		count++;
	}
	return count;
}
/*�����������*/
void DestoryList(LinkList head)
{
	/*��������*/
	ListNode *p, *q;
	p = head;
	while (p != NULL)
	{
		q = p;
		p = p->next;
		free(q);
	}
}