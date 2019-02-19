#define _CRT_SECURE_NO_WARNINGS 1
//Ä£ÄâÊµÏÖstrcat
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* My_strcat(char* p1, char* p2)
{
	char* p = p1;
	assert(p1 != NULL && p2 != NULL);
	while (*p1)
	{
		p1++;
	};
	while (*p2)
	{
		*(p1++) = *(p2++);
	}
	*p1 = *p2;
	return p;
}
void main()
{
	char arr1[30] = { "abcdefgh" };
	char arr2[10] = { "ABCDEFGH" };
	char* ret = My_strcat(arr1, arr2);
	printf("%s", ret);
	system("pause");
	return 0;
}