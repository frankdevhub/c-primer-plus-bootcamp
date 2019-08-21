#include<iostream>
#include<stdio.h>
#include<string.h>

int main()
{
	int n, i;
	char s[100000];
	char num[128] = { 0 };
	printf("输入字符串：");
	scanf("%s", s);
	for (i = 0; i<strlen(s); i++) {
		num[s[i]]++;
	}
	for (i = 0; i<128; i++) {
		if (num[i] != 0) {
			printf("%c : %d\n", i, num[i]);
		}
	}
	return 0;
	system("pause");
	return 0;
}

