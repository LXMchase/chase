#include"game.h"
void menu()
{
	printf("***************************************************\n");
	printf("*************    1.play     0.exist       *********\n");
	printf("***************************************************\n");
}
void test()
{
	int input;
	do
	{
		menu();
		printf("��ѡ��> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("�������������ѡ��\n");
		}
	} while (input);
}
void game()
{
	char Mine[ROWS][COLS];//����׼�������׵�����
	char Show[ROWS][COLS];//������ʾ������
	Init_board(Mine, ROWS, COLS, '0');//��ʼ��׼�������׵����飬ȫΪ��0��
	Init_board(Show, ROWS, COLS, '*');//��ʼ�����׵�����
	Set_mine(Mine, ROW, COL);//������
	print_board(Show, ROW, COL);//��ӡҪ�Ų��׵�����
	print_board(Mine, ROW, COL);//��ӡ��֪��λ�õ�����
	Find_mine(Mine, Show, ROW, COL);//����
}
int main()
{
	srand((unsigned)time(NULL));
	test();
	system("pause");
	return 0;
}