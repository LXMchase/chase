#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 39;
	int b = 46;
	int m = 0;
	if (a > b)
	{
		m = a;
		a = b;
		b = m;
	}
	for (m=a; a%m || b%m; m--);
	printf("%d��%d�����Լ��Ϊ%d\n", a, b, m);
	system("pause");
	return 0;
}