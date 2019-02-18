//实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
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
	printf("请输入要左旋的字符的个数：");
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