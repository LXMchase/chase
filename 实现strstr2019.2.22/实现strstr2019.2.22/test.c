#define _CRT_SECURE_NO_WARNINGS 1
// µœ÷strstr
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* My_strstr(const char* str, const char* src)
{
	const char* cur = (char* )str;
	const char* s1 = str;
	const char* s2 = src;
	assert(str != NULL);
	assert(src != NULL);
	while (*cur)
	{
		s1 = cur;
		s2 = src;
		while ((*s1) && (*s2) && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char* )cur;
		}
		cur++;
	}
	return NULL;

}
int main()
{
	char* arr1 = "acddsrthr";
	char* arr2 = "dsr";
	char* ret=My_strstr(arr1,arr2);
	printf("%s\n",ret);
	system("pause");
	return 0;
}