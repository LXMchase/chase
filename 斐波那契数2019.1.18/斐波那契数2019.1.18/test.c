//递归和非递归分别实现求第n个斐波那契数
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//非递归法
//int fib(int t)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (t <= 2)
//		return 1;
//	else
//	{
//		while (t>2)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			t--;
//		}
//		return c;
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n",fib(n));
//	system("pause");
//	return 0; 
//}
//递归法
int fib(int t)
{
	if (t <= 2)
		return 1;
	else
		return fib(t - 1) + fib(t - 2);
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n",fib(n));
	system("pause");
	return 0;
}