#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("********************************************************\n");
	printf("************************��������Ϸ**********************\n");
	printf("*********��ʼ��Ϸ��ѡ��1�� �˳���Ϸ��ѡ��0��************\n\n");
}
void game()
{
	int random_num = rand() % 100 + 1;//ʹ���ɵ����ֵ��1-100֮��
	int input = 0;
	while (1)
	{
		printf("����������:>");
		scanf("%d", &input);
		if (input > random_num)
			printf("�´���!\n");
		else if (input < random_num)
			printf("��С��!\n");
		else
		{
			printf("��ϲ�����¶���!\n\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("����������ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}