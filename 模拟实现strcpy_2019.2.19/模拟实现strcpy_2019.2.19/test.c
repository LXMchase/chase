#define _CRT_SECURE_NO_WARNINGS 1
//Ä£ÄâÊµÏÖstrcpy
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* My_strcpy(char* p1, char* p2)
{
	assert(p1 != NULL && p2 != NULL);
	int n = 0;
	int i = 0;
	char* p = p2;
	while (*p2)
	{
		n++;
		p2++;
	};
	i = n;
	while(n--)
	{
		*(p1++) = *(p++);
	};
	*p1 = '\0';
	return (p1 - i);
}

void main()
{
	char arr1[20] = { "ABCDEFGHMN" };
	char arr2[10] = { "abcdefg" };
	char* arr=My_strcpy(arr1, arr2);
	printf("%s", arr);
	system("pause");
	return 0;
}