#include<stdio.h>
#include<stdlib.h>
int main()
{
	////创建临时变量互换
	int a=10;
	int b=32;
	//int c=0;
	//printf("交换前：a=%d b=%d\n", a, b);
	//c = a;
	//a = b;
	//b = c;
	//printf("交换后：a=%d b=%d\n", a, b);
	
	//不创建临时变量 
	printf("交换前：a=%d,b=%d\n", a, b);
	//方法一
	/*a = a+b;
	b = a-b;
	a = a-b;*/
	//方法二
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("交换后：a=%d,b=%d\n", a, b);
	system("pause");
	return 0;
}