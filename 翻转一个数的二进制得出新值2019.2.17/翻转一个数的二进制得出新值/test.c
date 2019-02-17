//编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
unsigned int reverse_bit(unsigned int value)
{
	int i;
	int count = 0;
	for (i = 31; i >= 0; i--)
	{
		count+=(value%2)*pow(2, i);
		value /= 2;
	}
	return count;
}
void main()
{
	int value;
	scanf("%d", &value);
	printf("%u\n",reverse_bit(value));
	system("pause");
	return 0;
}