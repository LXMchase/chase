//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//�ڴ˺�����Ӧ�Խ��չ�����n�����ж�
int DigitSum(int n)
{
	if (n < 10)
		return n;
	else
	{
		int a = n % 10;
		return (a + DigitSum(n / 10));//��nС��10ʱ������10ʼ��Ϊ�㣬�ٴε��øú���Ӧ���ظ�����n
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n",DigitSum(n));
	system("pause");
	return 0;
}