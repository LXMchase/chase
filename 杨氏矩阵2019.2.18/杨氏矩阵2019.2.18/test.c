//���Ͼ���
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
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
		printf("���ڣ�\n");
	}
	else
		printf("�����ڣ�\n");
	system("pause");
	return 0;
}