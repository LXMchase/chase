//实现一个函数，判断一个数是不是素数。 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int prime(int x)
{
	int i;
	for (i = 2; i <= x/2; i++)
	{
		if (x%i==0)
			return 1;
	}
	return 0;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	if (prime(a))
		printf("\n%d不是素数\n",a);
	else
		printf("\n%d是素数\n", a);
	system("pause");
	return 0;
}