//获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void seq(int value)
{
	int arr[32] = { 0 };
	int i = 0;
	for (i = 31; i >=0; i--)
	{
		arr[i] = value % 2;
		value /= 2;
	}
	for (i = 0; i <32; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	//奇
	printf("奇数位序列：");
	for (i = 0; i < 32; i+=2)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	//偶
	printf("偶数位序列：");
	for (i = 1; i < 32; i+=2)
	{
		printf("%d ", arr[i]);
	}
}
void main()
{
	int input = 0;
	scanf("%d", &input);
	seq(input);
	system("pause");
	return 0;
}