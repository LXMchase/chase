#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 24;
	int b = 18;
	int m = 0;
	//方法一
	//使a为大值，b为小值
	//if (a > b)
	//{
	//	m = a;
	//	a = b;
	//	b = m;
	//}
	//for (m=a; a%m || b%m; m--);//最大公约数一定小于等于b，直到当a%m为0的前提下b%m为0，则可以找到最大公约数
	//方法二：辗转相除法
	while (m = a % b)
	{
		a = b;
		b = m;
	}
	printf("最大公约数为%d\n",b);
	system("pause");
	return 0;
}