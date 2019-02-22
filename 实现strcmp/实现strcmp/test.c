#define _CRT_SECURE_NO_WARNINGS 1
// µœ÷strcmp
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int My_strcmp(const char* str1, const char* str2)
{
	assert(str1);
	assert(str2);
	while (*str1==*str2)
	{
		str1++;
		str2++;
	}
	return *str1 - *str2;
}
int main()
{
	char arr1[10] = "abcdefg";
	char arr2[10] = "abcdhde";
	int ret=My_strcmp(arr1, arr2);
	printf("%d\n", ret);
	system("pause");
	return 0;
}