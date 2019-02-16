//输出一个整数的每一位
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void fun(int n)
{
	if (n > 9)
	{
		fun(n / 10);
	}
	printf("%d ",n % 10);
}
void main()
{
	int input = 0;
	printf("请输入一个整数:");
	scanf("%d", &input);
	fun(input);
	/*while (input>10)
	{
		tmp = input % 10;
		input /= 10;
		printf("%d ", tmp);
	}*/
	system("pause");
	return 0;
}