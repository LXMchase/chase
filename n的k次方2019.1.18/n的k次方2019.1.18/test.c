//编写一个函数实现n^k，使用递归实现
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int mul(int n,int k)
{
	if (k == 0)
		return 1;
	else if (k == 1)
		return n;
	else if (k > 1)
		return n * mul(n,--k);//先减1再用k:n*n的k-1次方；
}
int main()
{
	int n, k;
	printf("请分别输入n^k中的n和k\n");
	scanf("%d%d", &n, &k);
	printf("%d\n",mul(n,k));
	system("pause");
	return 0;
}