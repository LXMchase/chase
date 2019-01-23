#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c,n;
	a = 19;
	b = 25;
	c = 13;
	if (a < b)
	{
		n = a;
		a = b;
		b = n;
	}
	if (a < c)
	{
		n = a;
		a = c;
		c = n;
	}
	if (b < c)
	{
		n = b;
		b = c;
		c = n;
	}
	printf("从大到小：%d,%d,%d\n", a, b, c);
	system("pause");
	return 0;
}