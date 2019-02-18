//判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int juge(char* p1, char* p2)
{
	if (strlen(p1) == strlen(p2))
	{
		strcat(p1, p2);
		if (strstr(p1, p2) != NULL)
		{
			return 1;
		}
		else
			return 0;
	}
	else
		return 0;
}
void main()
{
	char arr1[] = { "AABCD" };
	char arr2[] = { "BCDAA" };
	int ret = juge(arr1, arr2);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
