//�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
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
