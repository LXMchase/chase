//有一个字符数组的内容为:"student a am i",
//	请你将数组的内容改为"i am a student".
//	要求：
//	不能使用库函数。
//	只能开辟有限个空间（空间个数和字符串的长度无关）。
#include<stdio.h>
#include<stdlib.h>
#include <assert.h>
int my_strlen(const char *str)
{
	assert(str);
	int len = 0;
	while (*str++)
	{
		len++;
	}
	return len;
}
void reverse(char *start, char *end)
{
	assert(start);
	assert(end);
	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
void str_reverse(char *str)
{
	assert(str);
	int len = my_strlen(str);
	reverse(str, str + len - 1);
	while (*str != '\0')
	{
		char *p = str;
		while ((*str != ' ') && (*str != '\0'))
		{
			str++;
		}
		reverse(p, str - 1);
		if (*str != '\0')
		{
			str++;
		}
	}
}
int main()
{
	char str[] = "student a am i";
	str_reverse(str);
	printf("%s\n", str);
	system("pause");
	return 0;
}