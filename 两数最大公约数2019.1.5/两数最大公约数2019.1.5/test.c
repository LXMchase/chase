#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 24;
	int b = 18;
	int m = 0;
	//����һ
	//ʹaΪ��ֵ��bΪСֵ
	//if (a > b)
	//{
	//	m = a;
	//	a = b;
	//	b = m;
	//}
	//for (m=a; a%m || b%m; m--);//���Լ��һ��С�ڵ���b��ֱ����a%mΪ0��ǰ����b%mΪ0��������ҵ����Լ��
	//��������շת�����
	while (m = a % b)
	{
		a = b;
		b = m;
	}
	printf("���Լ��Ϊ%d\n",b);
	system("pause");
	return 0;
}