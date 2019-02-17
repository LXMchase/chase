//编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define N 9
void main()
{
	int arr[N];
	int i;
	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 1; i < N; i++)
	{
		arr[0] = arr[0] ^ arr[i];
	}
	printf("%d\n", arr[0]);
	system("pause");
	return 0;
}