//��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
unsigned int reverse_bit(unsigned int value)
{
	int i;
	int count = 0;
	for (i = 31; i >= 0; i--)
	{
		count+=(value%2)*pow(2, i);
		value /= 2;
	}
	return count;
}
void main()
{
	int value;
	scanf("%d", &value);
	printf("%u\n",reverse_bit(value));
	system("pause");
	return 0;
}