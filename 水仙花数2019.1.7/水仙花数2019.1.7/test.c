#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, a = 0, b = 0, c = 0;
	for (i = 100; i < 1000; i++)
	{
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;
		if (a*a*a + b * b*b + c * c*c == i)
		{
			printf("%d=%d^3+%d^3+%d^3;\n", i ,a,b,c);
		}
	}
	system("pause");
	return 0;
}