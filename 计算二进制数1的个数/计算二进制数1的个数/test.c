//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
//	// 返回 1的位数 
//}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int count_one(unsigned int value)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (value >> i & 0x1)
		{
			count++;
		}
	}
	return count;
}
void main()
{
	unsigned int input = 0;
	printf("请输入一个数:");
	scanf("%d", &input);
	printf("%d\n", count_one(input));
	system("pause");
	return 0;
}
