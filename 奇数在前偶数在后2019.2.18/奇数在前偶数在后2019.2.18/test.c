//��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void change(int arr[11], int m)
{
	int left;
	int tmp = 0;
	for(left=0;left<m/2;left++)
	{
		if (!(arr[left] % 2) && arr[left + m / 2] % 2)
		{
			if (!(m % 2))
			{
				tmp = arr[left];
				arr[left] = arr[left + m / 2];
				arr[left + m / 2] = tmp;
			}
			else
			{
				tmp = arr[left];
				arr[left] = arr[left + m / 2];
				arr[left + m / 2] = tmp;
			}
		}
	}
	tmp = arr[left];
	arr[left]=arr[m - 1];
	arr[m - 1] = tmp;
	for (left = 0; left < m; left++)
	{
		printf("%d ", arr[left]);
	}
}
void main()
{
	int arr[11];
	int i;
	for(i=0;i<11;i++)
	{
		scanf("%d", &arr[i]);
	}
	change(arr,11);
	system("pause");
	return 0;
}