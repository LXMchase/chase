#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void menu()
{
	printf("*****************************ѡ��1:>�����ʼ��*************************\n");
	printf("*****************************ѡ��2:>�������***************************\n");
	printf("*****************************ѡ��3:>��������***************************\n");
	printf("*****************************ѡ��0:>�˳�����***************************\n");
}
//�����ʼ������
void init(int arr1[], int a)
{
	int i;
	printf("����������10����:> ");
	for (i = 0; i < a; i++)
	{
		scanf("%d", &arr1[i]);//����д��scanf("%d",arr1);
	}
	printf("\n");
	for (i = 0; i < a; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n�����ʼ����ɣ�\n");
}
//������պ���
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
	printf("\n��������գ�\n");
}
//�������ú���
void reverse(int arr3[], int c)
{
	int t,temp;
	printf("\n����ǰ��");
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
	printf("\n���ú�");
	for (t = 0; t < c; t++)
	{
		printf("%d ", arr3[t]);
	}
	printf("\n������������ɣ�\n");
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
