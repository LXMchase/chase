#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
//�˵�
void menu()
{
	printf("***************************************************\n");
	printf("*************    1.play     0.exist       *********\n");
	printf("***************************************************\n");
}

//��Ϸ����
void game()
{
	char ret;
	char board[ROW][COL] = { '0' };//����3*3������
    init_board(board, ROW, COL);//�����ʼ��Ϊ �ո�
	print_board(board, ROW, COL);//��ӡ�ʼ������
	//��Ϸһֱ����
	do
	{
		player_move(board, ROW, COL);//�����
		ret = is_win(board, ROW, COL);//ret�����ж���Ӯ�����ķ���ֵ
		//is_win���ء�C��--����λ��δ��
		//���������Ϸ������
		//��Q��--����λ��������ƽ��
		//��X��--���Ӯ
		//��0��--����Ӯ
		if (ret != 'C')
		{
			break;//����ѭ��
		}
		print_board(board, ROW, COL);//��ӡ�����߹�������
		com_move(board, ROW, COL);//������
		ret = is_win(board, ROW, COL);//ret����is_win�ķ���ֵ
		if (ret != 'C')
		{
			break;//����ѭ��
		}
		print_board(board, ROW, COL);//��ӡ�����߹�������
	} while (1);
	//����ѭ��ʱ��ret���ܵ���ֵ�����֣�'X''0''Q'
	if (ret == 'X')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '0')
	{
		printf("����Ӯ\n");
	}
	else if (ret == 'Q')
	{
		printf("ƽ��\n");
	}
	print_board(board, ROW, COL);//��ӡ���յ�����
}
void main()
{
	int input = 0;
	srand((unsigned)time(NULL));//������������ĳ�ʼ��������srand��rand()���ʹ�ò���α�������
	do
	{
		menu();
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
				printf("�������������ѡ��\n");//���´�ӡ�˵�������ѡ��
			}
	} while (input);
	system("pause");
}