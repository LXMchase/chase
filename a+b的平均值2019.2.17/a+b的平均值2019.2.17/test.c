////不使用（a + b） / 2这种方式，求两个数的平均值。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d\n",(a+b)>>1);
	system("pause");
	return 0;
}
