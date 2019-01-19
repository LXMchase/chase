#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void menu()
{
	printf("*****************************选择1:>数组初始化*************************\n");
	printf("*****************************选择2:>清空数组***************************\n");
	printf("*****************************选择3:>数组逆置***************************\n");
	printf("*****************************选择0:>退出操作***************************\n");
}
//数组初始化函数
void init(int arr1[], int a)
{
	int i;
	printf("请任意输入10个数:> ");
	for (i = 0; i < a; i++)
	{
		scanf("%d", &arr1[i]);//不能写成scanf("%d",arr1);
	}
	printf("\n");
	for (i = 0; i < a; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n数组初始化完成！\n");
}
//数组清空函数
void empty(int arr2[], int b)
{
	int j;
	for (j = 0; j < b; j++)
	{
		arr2[j] = 0;
	}
	for (j = 0; j < b; j++)
	{
		printf("%d ", arr2[j]);
	}
	printf("\n数组已清空！\n");
}
//数组逆置函数
void reverse(int arr3[], int c)
{
	int t,temp;
	printf("\n逆置前：");
	for (t = 0; t < c; t++)
	{
		printf("%d ", arr3[t]);
	}
	for (t = 0; t < c / 2; t++)
	{
		temp = arr3[t];
		arr3[t] = arr3[c-t-1];
		arr3[c-t-1] = temp;
	}
	printf("\n逆置后：");
	for (t = 0; t < c; t++)
	{
		printf("%d ", arr3[t]);
	}
	printf("\n数组逆置已完成！\n");
}
int main()
{
	int arr[10];
	int n = sizeof(arr) / sizeof(arr[0]);
	int m = 1;
	while (m)
	{
		menu();
		scanf("%d", &m);
		switch (m)
		{
		case 1:
			init(arr, n);
			break;
		case 2:
			empty(arr, n);
			break;
		case 3:
			reverse(arr, n);
			break;
		default:
			break;
		}

	}
	system("pause");
	return 0;
}
