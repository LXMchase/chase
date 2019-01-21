//递归和非递归分别实现求n的阶乘 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//非递归
//int fun(int n)
//{
//	int i,mul=1;
//	if (n > 1)
//	{
//		for (i = 2; i <= n; i++)
//		{
//			mul *= i;
//		}
//		return mul;
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", fun(n));
//	system("pause");
//	return 0;
//}
//递归
int fun(int n)
{
	if (n > 1)
	{
		return n * fun(n - 1);//n乘以n-1的阶乘，当n减到1时，返回1
	}
	else
		return 1;
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", fun(n));
	system("pause");
	return 0;
}