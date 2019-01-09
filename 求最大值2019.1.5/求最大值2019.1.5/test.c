#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,max,arr[10];
	printf("ÊäÈë10¸öÊı£º\n");
	for (i = 0; i<=9; i++)
		scanf("%d", &arr[i]);
	max = arr[0];
	for (i = 0; i<=9; i++)
	{
		if (arr[i+1] > max)
			max = arr[i + 1];
	}
	printf("max=%d\n", max);
	system("pause");
	return 0;
}