//递归方式实现打印一个整数的每一位 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void print_num(int num)
{
	int a;
	if (num < 10)
		printf("%d ", num);
	else
	{
		print_num(num / 10);
		printf("%d ", num % 10);
	}
}
int main()
{
	int num;
	scanf("%d", &num);
	print_num(num);
	system("pause");
	return 0;
}