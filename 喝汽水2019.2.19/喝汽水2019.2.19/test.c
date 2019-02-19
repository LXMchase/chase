#define _CRT_SECURE_NO_WARNINGS 1
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以喝多少汽水。
//编程实现。
#include<stdio.h>
#include<stdlib.h>
int Count(int money)
{
	int sum = money;
	while(money>0)
	{
		money /= 2;
		sum += money;
		
	}
	return sum;
}
void main()
{
	int input = 0;
	printf("请输入钱数：>");
	scanf("%d", &input);
	int ret=Count(input);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
