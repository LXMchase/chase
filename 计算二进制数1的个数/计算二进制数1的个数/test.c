//дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111 4 �� 1
//����ԭ�ͣ�
//int count_one_bits(unsigned int value)
//{
//	// ���� 1��λ�� 
//}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int count_one(unsigned int value)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (value >> i & 0x1)
		{
			count++;
		}
	}
	return count;
}
void main()
{
	unsigned int input = 0;
	printf("������һ����:");
	scanf("%d", &input);
	printf("%d\n", count_one(input));
	system("pause");
	return 0;
}
