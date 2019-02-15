#include"game.h"

//��ʼ�����̣�ȫΪ �ո�
void init_board(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//��ӡROW*COL������
void print_board(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);//����ߺ��Ѿ����ַ����������飬�˴�ֱ�Ӵ�ӡ���鼴��
			if(j<col-1)
				printf("|");
		}
		printf("\n");
		for (j = 0; j < col; j++)
		{
			if (i < row - 1)
			{
				printf("---");
				if(j<col-1)
					printf("|");
			}
		}
		printf("\n");
	}
}
void player_move(char board[ROW][COL], int row, int col)
{
	//ֱ�������x,y�������С��Χ�ڣ�����ߺ�����ѭ��
	while (1)
	{
		int x, y;
		printf("�����,���������꣺> ");
		scanf("%d%d", &x, &y);
		//ȷ���û���������겻��������
		if ((x > 0 && x < row + 1) && (y > 0 && y < col + 1))
		{
			if (board[x - 1][y - 1] == ' ')//��֤��Ӧ��λ��û��ռ������һ����û�߹���λ��
			{
				board[x - 1][y - 1] = 'X';//������������-1������Ԫ�ص��±꣬��X���������߹���λ��
				break;//����ѭ����ִ��game()��������һ����䣬������
			}
			else
				printf("�˴���ռ������������\n");//���ǿո�λ����ռ��������һ��ѭ�������������������
		}
		else
			printf("�����������������\n");//�������鷶Χ��������һ��ѭ�������������������
	}
}
void com_move(char board[ROW][COL], int row, int col)
{
	printf("�����ߣ�>\n");
	while (1)
	{
		int x, y;
		//ʹ�����ߵ��������λ����row*col֮��
		x = rand() % row;
		y = rand() % col;
		//ȷ����λ��û���߹�
		if (board[x][y] == ' ')
		{
			board[x][y] = '0';
			break;//������һ��������ѭ��
		}
	}
}
char is_win(char board[ROW][COL], int row,int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0];//����һ�е�Ԫ��һ��
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];//����һ�е�Ԫ��һ��
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][i] != ' ')
			return board[0][0]; //����\�����Ԫ��һ��
		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][i] != ' ')
			return board[0][2]; //����/�����Ԫ��һ��
	}
	if (is_full(board, ROW, COL) == 1)
	{
		return 'Q';//��is_full����ֵΪ1����is_win����ֵΪ��Q������ʾ��������
	}
	return 'C';//����is_win���ء�C��,��ʾ����δ��
}

int is_full(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;//����δ����is_full����ֵΪ0
		}
	}
	return 1;//����������is_full����ֵΪ1
}



