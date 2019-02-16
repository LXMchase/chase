/*在屏幕上打印杨辉三角。
1
1 1
1 2 1
1 3 3 1*/
#include<stdio.h>
#include<stdlib.h>
#define LINE 10
void main()
{
	int arr[LINE][LINE];
	int i, j;
	for (i = 0; i < LINE; i++)
	{
		for (j = 0; j <= i; j++)
		{
			arr[i][0] = 1;
			arr[i][i] = 1;
			if (j > 0&&j<i)
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
			printf("%-5d", arr[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}