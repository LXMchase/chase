//编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int m = 0;
	int n = 0;
	int count = 0;
	int t = 0;
	int i = 0;
	scanf("%d%d", &m, &n);
	t = (m | n) - (m&n);
	for (i = 0; i < 32; i++)
	{
		if (t>>i&0x1)
		{
			count++;
		}
	}
	printf("%d", count);
	system("pause");
	return 0;
}