#define _CRT_SECURE_NO_WARNINGS 1
//实现strchr
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* My_strchr(const char* str, int x)
{
	assert(str != NULL);
	while (*str != x)
	{
		str++;
	}
		return (char* )str;
}
int main()
{
	char arr[10] = "adefrtfde";
	char a = 'f';
	char* ret=My_strchr(arr, a);
	if (ret != NULL)
		printf("%s\n", ret);
	else
		printf("不存在\n");
	system("pause");
	return 0;
}