//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳� 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//�ǵݹ�
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
//�ݹ�
int fun(int n)
{
	if (n > 1)
	{
		return n * fun(n - 1);//n����n-1�Ľ׳ˣ���n����1ʱ������1
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