#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//��ӡ100��200֮�������
int main()
{
	int i=0;
	int count=0;
	//����һ
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
		//�ų�100%100Ϊ0�Ŀ����ԣ���i==jʱ�������������
		if (j==i)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount=%d\n", count);
	system("pause");
	return 0;
	
	//������
	//for (i = 100; i <= 200; i++)
	//{
	//	int j;
	//	//������ѭ��������16��2*8 4*4��16������4��ֻ��Ҫ��������ൽ����֮�������ֻҪ����һ������Ϊ0����������������ѭ��
	//	for (j = 2; j <= sqrt(i); j++)
	//	{
	//		if (i%j == 0)
	//		{
	//			break;
	//		}
	//	}
	//	//����ѭ�������ֿ��ܣ�break�������������� ѭ������������������������
	//	if (j > sqrt(i))
	//	{
	//		count++;//���������ĸ���
	//		printf("%d ", i);//��ӡ����
	//	}	
	//}
	/*printf("\ncount=%d\n", count);
	system("pause");
	return 0;*/
}