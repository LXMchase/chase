//. 编写一个函数 reverse_string(char * string)（递归实现） 
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
#include<stdio.h>
#include<stdlib.h>
//每次调用递归函数都会将地址往后移到下一个字符的地址，直到找到最后一个非零元素才开始输出字符
void reverse_string(char* string)
{
	if (*string)
	{
		reverse_string(string + 1);
		printf("%c", *string);
	}
	else
		return;
}
void main()
{
	char string[] = "abcdefg";
	reverse_string(string);
	printf("\n");
	system("pause");
}