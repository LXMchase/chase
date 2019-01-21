#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void mul(int x)
{
	int i, j;
	for (i = 1; i < x+1; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-4d", i, j, i*j);
		}
		printf("\n");
	}
}
int main()
{
	int a = 0;
	printf("请输入乘法表的行数:\n");
	scanf("%d", &a);
	mul(a);
	system("pause");
	return 0;
}