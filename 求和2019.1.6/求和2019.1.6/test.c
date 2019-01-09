#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//¼ÆËãs=a+aa+aaa+aaaa+aaaaaµÄÖµ;
int main()
{
	int i, a, t, sum;
	scanf("%d", &a);
	t = a;
	sum = a;
	for (i = 1; i < 5; i++)
	{
		a=a*10+t;
		sum+=a ;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}