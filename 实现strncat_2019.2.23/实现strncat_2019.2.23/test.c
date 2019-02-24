#define _CRT_SECURE_NO_WARNINGS 1
// µœ÷strncat
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* my_strncat(char* dest, const char* src, size_t count)
{
	char* ret = dest;
	assert(dest&&src);
	while (*dest)
	{
		dest++;
	}
	while (count--)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return ret;
}
int main()
{
	char arr1[20] = "abcde";
	char arr2[10] = "ABCDE";
	char* ret=my_strncat(arr1, arr2, 3);
	printf("%s\n", ret);
	system("pause");
	return 0;
}