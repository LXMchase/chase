//��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
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
		return n * mul(n,--k);//�ȼ�1����k:n*n��k-1�η���
}
int main()
{
	int n, k;
	printf("��ֱ�����n^k�е�n��k\n");
	scanf("%d%d", &n, &k);
	printf("%d\n",mul(n,k));
	system("pause");
	return 0;
}