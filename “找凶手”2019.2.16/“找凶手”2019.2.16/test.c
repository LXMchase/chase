//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i;
	for(i=0;i<4;i++)
	{
		char set_real = 'A' + i;
		if ((set_real != 'A') + (set_real == 'C') + (set_real == 'D') + (set_real != 'D') == 3)
		{
			printf("real=%c\n", set_real);
		}
	}
	system("pause");
	return 0;
}