#define _CRT_SECURE_NO_WARNINGS 1
// µœ÷strncmp
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int my_strncmp(const char* str1, const char* str2, size_t count)
{
	while (count--)
	{
		if (*str1 != *str2)
		{
			return *str1 - *str2;
		}
		str1++;
		str2++;
	}
	return 0;
}
int main()
{
	char* p1 = "abcdfrg";
	char* p2 = "abceefg";
	int ret=my_strncmp(p1, p2, 4);
	printf("%d\n", ret);
	system("pause");
	return 0;
}