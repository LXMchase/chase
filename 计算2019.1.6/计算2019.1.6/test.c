#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	float sign = 1.0;
	float sum = 1.0;
	for (i = 2; i < 101; i++)
	{
		sign = -sign;
		sum = sum + (sign / i);
	}
	printf("sum=%f\n", sum);
	system("pause");
	return 0;
}