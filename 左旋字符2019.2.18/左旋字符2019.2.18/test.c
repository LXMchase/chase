//ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reserve(char* left, char* right)
{
	char tmp;
	while (left < right)
	{
		tmp = *left;
		*(left++) = *right;
		*(right--) = tmp;
	}
}
void main()
{
	int k = 0;
	char arr[10] = { "ABCDEFG" };
	int sz = strlen(arr)-1;
	printf("������Ҫ�������ַ��ĸ�����");
	scanf("%d", &k);
	char* left = arr;
	char* right = arr + sz;
	reserve(left,left+k-1);
	reserve(left + k,right);
	reserve(left, right);
	printf("%s\n", arr);
	system("pause");
	return 0;
}