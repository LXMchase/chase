//ʵ��һ���������ж�һ�����ǲ��������� 
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
		printf("\n%d��������\n",a);
	else
		printf("\n%d������\n", a);
	system("pause");
	return 0;
}