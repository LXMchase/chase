#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i ;
	int a[20] = { 0 }, b[20] = { 0 }, c[20] = {0};
	//������a����20��ֵ
	for (i = 0; i < 20; i++)
	{
		scanf("%d", &a[i]);
		c[i] = a[i];//������a��ֵ��������������c
	}
	for (i = 0; i < 20; i++)
	{
		scanf("%d", &b[i]);//������b����ֵ
		a[i] = b[i];//��������c��������a��b��ֵ
		b[i] = c[i];
	}
	printf("\n����a:");
	for (i = 0; i < 20; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n����b:");
	for (i = 0; i < 20; i++)
	{
		printf("%d ", b[i]);
	}
	system("pause");
	return 0;
}