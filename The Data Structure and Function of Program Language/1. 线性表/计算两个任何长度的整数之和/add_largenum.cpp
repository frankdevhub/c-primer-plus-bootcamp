#include<stdio.h>
#define MaxLen 100
typedef int sqlist[MaxLen];
int input(sqlist A)
{
	int i;
	for (i = 0; i < MaxLen; i++)
		A[i] = 0;
	printf("输入一个正整数的各位，（输入-1时结束）\n");
	i = 0;
	while (1)
	{
		scanf("%d", &A[i]);
		if (A[i] < 0)
			break;
		i++;
	}
	return i;
}
void output(sqlist A, int low, int high)
{
	int i;
	for (i = low; i < high; i++)
		printf("%d", A[i]);
	printf("\n");
}
void move(sqlist A, int na)
{
	int i;
	for (i = 0; i < na; i++)
		A[MaxLen - i - 1] = A[na - i - 1];
}
int add(sqlist *A, int na, sqlist B, int nb)
{
	int nc, i, j, length = 0;
	if (na > nb)
		nc = na;
	else
		nc = nb;
	move(*A, na);
	move(B, nb);
	for (i = MaxLen - 1; i >= MaxLen - nc; i--)
	{
		j = (*A)[i] + B[i];
		/*如果相加结果大于9*/
		if (j > 9)
		{
			(*A)[i - 1] = (*A)[i - 1] + 1; /*高位加1*/
			(*A)[i] = j - 10; /*和减去10后存储到当前位*/
		}
		else
			(*A)[i] = j;
		if (i = MaxLen - nc) /*处理最高位*/
		{
			if (j > 9)
			{
				(*A)[i - 1] = 1;
				length = nc + 1;
			}
			else
			{
				length = nc;
			}
		}
	}
	return length;
}

void main()
{
	sqlist A, B;
	int na, nb, nc;
	na = input(A);
	nb = input(B);
	printf("整数A：");
	output(A, 0, na);
	printf("整数B：");
	output(B, 0, nb);
	nc = add(&A, na, B, nb);
	printf("相加后结果：");
	output(A, MaxLen - nc, MaxLen);
}
