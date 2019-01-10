#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,count=0;
	printf("1000至2000是的闰年有\n：");
	for (i = 1000; i <= 2000; i++)
	{
		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount=%d", count);
	system("pause");
	return 0;
}