#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i ;
	int a[20] = { 0 }, b[20] = { 0 }, c[20] = {0};
	//给数组a存入20个值
	for (i = 0; i < 20; i++)
	{
		scanf("%d", &a[i]);
		c[i] = a[i];//将数组a的值赋给创建的数组c
	}
	for (i = 0; i < 20; i++)
	{
		scanf("%d", &b[i]);//给数组b存入值
		a[i] = b[i];//利用数组c交换数组a和b的值
		b[i] = c[i];
	}
	printf("\n数组a:");
	for (i = 0; i < 20; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n数组b:");
	for (i = 0; i < 20; i++)
	{
		printf("%d ", b[i]);
	}
	system("pause");
	return 0;
}