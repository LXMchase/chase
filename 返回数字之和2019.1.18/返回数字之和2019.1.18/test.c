//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//在此函数中应对接收过来的n进行判断
int DigitSum(int n)
{
	if (n < 10)
		return n;
	else
	{
		int a = n % 10;
		return (a + DigitSum(n / 10));//当n小于10时，除以10始终为零，再次调用该函数应返回该数字n
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n",DigitSum(n));
	system("pause");
	return 0;
}