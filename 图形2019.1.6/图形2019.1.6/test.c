#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, m;
	for (i = 1; i < 8; i++)
	{
		for (m = 0; m < 7 - i; m++)
		{
			printf(" ");
		}
		for (j = 1; j<=2*i-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i < 7; i++)
	{
		for (m = 0; m <i; m++)
		{
			printf(" ");
		}//m=0,i=1ʱ��m=1;�����*ʱ�ж�����Ϊ12-2*m=10=j,��j�ķ�ΧΪ0-10��11��*
		for (j = 0; j <=12-2*m; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
