#define _CRT_SECURE_NO_WARNINGS 1
//һ��������ֻ�����������ǳ���һ�Σ�
//�����������ֶ����������Ρ�
//�ҳ����������֣����ʵ�֡�
#include<stdio.h>
#include<stdlib.h>
void Find(int* parr, int n)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		int count = 0;
		for (j = 0; j < n; j++)
		{
			if (*(parr + i) == *(parr + j))
			{
				count++;
			}
		}
		if (count == 1)
		{
			printf("%d ", *(parr + i));
		}
	}
}
void main()
{
	int arr[10] = { 1,2,3,3,1,2,4,5,6,5 };
	Find(arr, 10);
	system("pause");
	return 0;
}