#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int search(int arr[], int k, int right)
{
	int mid,left = 0;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (k > arr[mid])
			left = mid + 1;
		else if (k < arr[mid])
			right = mid - 1;
		else
			return mid;
	}
	return -1;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int right = sizeof(arr) / sizeof(arr[0])-1;
	int m,k;
	printf("������1-10֮��Ҫ���ҵ����֣�");
	scanf("%d", &k);
	m = search(arr, k, right);
	if (m == -1)
		printf("�Ҳ���\n");
	else
		printf("�ҵ��ˣ��±���%d\n", m);
	system("pause");
	return 0;
}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0])-1;
//	int mid,k = 0;
//	printf("������1-10֮��Ҫ���ҵ����֣�");
//	scanf("%d", &k);
//	while(left<=right)
//	{
//		mid = left + (right - left) / 2;
//		if (k > arr[mid])
//			left = mid + 1;
//		else if (k < arr[mid])
//			right = mid - 1;
//		else
//			break;
//	}
//	if(left<=right)
//		printf("�ҵ��ˣ��±���%d\n", mid);
//	else
//		printf("û�ҵ�\n");
//	system("pause");
//	return 0;
//}
