#define _CRT_SECURE_NO_WARNINGS 1
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Ժȶ�����ˮ��
//���ʵ�֡�
#include<stdio.h>
#include<stdlib.h>
int Count(int money)
{
	int sum = money;
	while(money>0)
	{
		money /= 2;
		sum += money;
		
	}
	return sum;
}
void main()
{
	int input = 0;
	printf("������Ǯ����>");
	scanf("%d", &input);
	int ret=Count(input);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
