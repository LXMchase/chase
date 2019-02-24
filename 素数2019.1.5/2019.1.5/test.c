#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//打印100到200之间的素数
int main()
{
	int i=0;
	int count=0;
	//方法一
	for (i=100; i<=200; i++)
	{
		int j=0;
		for (j=2; j<=i; j++)
		{
			if (i%j==0)
			{
				break;
			}
		}
		//排除100%100为0的可能性，即i==j时，这个数是素数
		if (j==i)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount=%d\n", count);
	system("pause");
	return 0;
	
	//方法二
	//for (i = 100; i <= 200; i++)
	//{
	//	int j;
	//	//减少了循环次数如16：2*8 4*4，16开方得4，只需要用这个数余到开放之后的数，只要出现一个余数为0，则不是素数，跳出循环
	//	for (j = 2; j <= sqrt(i); j++)
	//	{
	//		if (i%j == 0)
	//		{
	//			break;
	//		}
	//	}
	//	//跳出循环有两种可能：break跳出（非素数） 循环条件不满足跳出（素数）
	//	if (j > sqrt(i))
	//	{
	//		count++;//计算素数的个数
	//		printf("%d ", i);//打印素数
	//	}	
	//}
	/*printf("\ncount=%d\n", count);
	system("pause");
	return 0;*/
}