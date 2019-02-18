//杨氏矩阵
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int find(int *p, int n,int row, int col)
{
	static int x = 0;
	int y = col - 1;
	while ((x >= 0)&&(y >= 0))
	{
		if (n < *(p + y))
		{
			y--;
		}
		else if (n == *(p + y))
		{
			break;
		}
		else
		{
			x++;
			find(p += 2, n, --row, col);
		}
	};
	if (x < 0 || y < 0)
		return 0;
	else
	{
		return 1;
	}
}
void main()
{
	int input = 0;
	scanf("%d", &input);
	int arr[3][3] = { 1,2,3,2,3,4,3,4,5 };
	int *p = arr;
	int ret=find(p, input, 3, 3);
	if (ret)
	{
		printf("存在！\n");
	}
	else
		printf("不存在！\n");
	system("pause");
	return 0;
}