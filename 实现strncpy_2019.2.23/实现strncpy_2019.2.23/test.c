#define _CRT_SECURE_NO_WARNINGS 1
// µœ÷strncpy
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* my_strncpy(char* str, const char*src, int count)
{
	assert(str&&src);
	char* ret = str;
	while (count--)
	{
		*str++ = *src++;
	}
	*str = '\0';
	return ret;
}
int main()
{
	char* p = "abcdefg";
	char arr[10] = { 0 };
	char* ret=my_strncpy(arr,p,5);
	printf("%s\n", ret);
	system("pause");
	return 0;
}