//���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int m = 0;
	int n = 0;
	int count = 0;
	int t = 0;
	int i = 0;
	scanf("%d%d", &m, &n);
	t = (m | n) - (m&n);
	for (i = 0; i < 32; i++)
	{
		if (t>>i&0x1)
		{
			count++;
		}
	}
	printf("%d", count);
	system("pause");
	return 0;
}