#define _CRT_SECURE_NO_WARNINGS 1
//ģ��ʵ��strcpy
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* My_strcpy( char* p1, const char* p2)
{
	assert(p1 != NULL && p2 != NULL);
	char* p = p1;
	while (*p1++ = *p2++)
	{
		;
	}
	return p;
}
void main()
{
	char arr1[20] = { "ABCDEFGHMN" };
	char arr2[10] = { "abcdefg" };
	char* arr=My_strcpy(arr1, arr2);
	printf("%s\n", arr);
	system("pause");
	return 0;
}