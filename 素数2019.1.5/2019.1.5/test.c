#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i=0;
	int count=0;
	//方法一
	/*for (i=100; i<=200; i++)
	{
		int j=0;
		for (j=2; j<=i; j++)
		{
			if (i%j==0)
			{
				break;
			}
		}
		if (j==i)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount=%d\n", count);
	system("pause");
	return 0;*/
	
	//方法二
	for (i = 100; i <= 200; i++)
	{
		int j;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (j >= sqrt(i))
		{
			count++;
			printf("%d ", i);
		}	
	}
	printf("\ncount=%d\n", count);
	system("pause");
	return 0;
}