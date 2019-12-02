#include<stdlib.h>
#include<stdio.h>
typedef int DataType;
typedef struct Node
{
	DataType data;
	struct Node *next;
}ListNode, *LinkList;

/*初始化单链表*/
void InitList(LinkList *head)
{
	if ((*head = (LinkList)malloc(sizeof(ListNode))) == NULL)
		/*为头结点分配存储空间*/
		exit(-1);
	(*head)->next = NULL;
}
/*判断单链表是否为空*/
int IsEmpty(LinkList head)
{
	if (head->next == NULL) /*如果单链表的头结点的指针域为空*/
		return 1;
	else
		return 0;
}
/*按照序号查找单链表中的某个结点，如果找到就返回该结点的指针，失败则返回NULL*/
ListNode* Get(LinkList head, int i)
{
	ListNode* p;
	int j;
	if (IsEmpty(head)) /*如果链表为空*/
		return NULL; /*返回NULL*/
	if (i < 1)  /*如果序号不合法*/
		return NULL; /*返回NULL*/
	j = 0;
	while (p->next != NULL && j < i)
	{
		p = p->next;
		j++;
	}
	if (j == i) /*找到第i个结点*/
		return p; /*返回指针p*/
	else
		return NULL; /*返回NULL*/
}
/*按内容查找链表中值为e的结点，如果成功返回结点的指针，失败返回NULL*/
ListNode* LocateElem(LinkList head, DataType e)
{
	ListNode *p;
	p = head->next; /*指针p指向第一个结点*/
	while (p)
	{
		if (p->data != e) /*没有找到与e相等的元素*/
			p = p->next;  /*继续找下一个元素*/
		else  /*找到与e相等的元素*/
			break; /*退出循环*/
	}
	return p;
}
/*按内容查找链表中值为e的结点，如果成功返回结点的序号，失败返回0*/
int LocatePos(LinkList head, DataType e)
{
	ListNode *p;
	int i;
	if (IsEmpty(head)) /*如果链表为空*/
		return 0;
	p = head->next; /*指针p指向第一个结点*/
	i = 1;
	while (p)
	{
		if (p->data == e) /*找到与e相等的元素*/
			return i; /*返回该序号*/
		else
		{
			p = p->next;
			i++;
		}

	}
	if (!p) /*如果没有找到相等的元素*/
		return 0; /*返回0*/
}
/*在单链表中插入元素e*/
int InsertList(LinkList head, int i, DataType e)
/*在单链表中某一位置插入元素e，插入成功返回1,失败返回0*/
{
	ListNode *pre, *p;  /*定义第i个元素的前驱结点的指针pre，指针p为新插入的结点的指针*/
	int j;
	pre = head; /*指针p指向头结点*/
	while (pre->next != NULL && j < i - 1) /*找到第i-1个结点*/
	{
		pre = pre->next;
		j++;
	}
	if (j != i - 1) /*如果没有找到*/
	{
		printf("输入位置错误！");
		return 0;
	}
	/*新生成一个结点并将e值传递给这个结点的数据域*/
	if ((p = (LinkList)malloc(sizeof(ListNode))) == NULL)
		exit(-1);
	p->data = e;
	/*插入结点操作*/
	p->next = pre->next;
	pre->next = p;
	return 1;
}
/*删除第i个结点*/
