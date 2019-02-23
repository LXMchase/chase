#include"game.h"
//��ʼ������ĺ�����ret���մ��������ַ�
void Init_board(char arr[ROWS][COLS], int rows, int cols, char ret)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = ret;
		}
	}
}
//�����׵ĺ���
void Set_mine(char arr[ROWS][COLS], int row, int col)
{
	int x, y;
	int count = EASY;//������EASY���ף�ѭ����EASY��
	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		//ʹ������������Mine_board[ROWS][ROWS]1-9�к�1-9��,������һȦ����������
		if ((x > 0 && x <= row) && (y > 0 && y <= col))
		{
			if (arr[x][y] == '0')//��֤���׵�λ�ò��ظ�
			{
				arr[x][y] = '1';
				count--;
			}
		}
	}
}
//��ӡROW*COL
void print_board(char arr[ROWS][COLS], int row, int col)
{
	int i, j;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d", i);
		for (j = 1; j <= col; j++)
		{
			printf(" %c", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
}
//��������������Χ8��λ�õ��׵ĸ���������ֵΪ����
int Get_mine(char Mine[ROWS][COLS], int x, int y)
{
	return Mine[x - 1][y + 1] +
		Mine[x - 1][y] +
		Mine[x - 1][y - 1] +
		Mine[x][y - 1] +
		Mine[x + 1][y - 1] +
		Mine[x + 1][y] +
		Mine[x + 1][y + 1] +
		Mine[x][y + 1] - 8 * '0';//������������Ϊ�ַ��ͣ��׵ĸ���Ϊ���ͣ���8��������ַ������ȥ�ַ���0��
}
//���׺���
void Find_mine(char Mine[ROWS][COLS], char Show[ROWS][COLS], int row, int col)
{
	int win = 0;
	int x, y;
	while (win < row*col - 10)//win��������ȥ10���׵����з��׵�λ�ø�������ʾ��δ����
	{
		printf("������Ҫ�Ų�����꣺>");
		scanf("%d%d", &x, &y);
		if ((x > 0 && x <= row) && (y > 0 && y <= col))
		{
			if (Mine[x][y] != '1')
			{
				int count = Get_mine(Mine, x, y);//���˴���Χ�׵ĸ�������count
				Show[x][y] = count + '0';//ת��Ϊ�ַ��ͣ������˴�������Ԫ��
				open_white(Mine, Show, x, y);
				print_board(Show, ROW, COL);//��ӡ����
				win++;//�Դ��ж��Ƿ�ȫ���������
			}
			else
			{
				printf("���ź����㱻ը���ˣ���Ϸ����\n");
				Show[x][y] = '1';
				print_board(Show, ROW, COL);
				break;
			}
		}
		else
		{
			printf("����������������룡\n");
		}
	}
	if (win >= row * col - 10)
	{
		printf("ɨ�׳ɹ���\n");
	}
}
//�����λ�ã�չ��һƬ�հ׵ĺ���
void open_white(char Mine[ROWS][COLS], char Show[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	if (Get_mine(Mine, x, y) == 0)
	{
		Show[x][y] = ' ';
		for (i = -1; i < 2; i++)
		{
			for (j = -1; j < 2; j++)
			{
				if ((x + i) > 0 && (y + j) > 0 && (Show[x + i][y + j]=='*'))
				{
					open_white(Mine, Show, x + i, y + j);
				}
			}
		}
		
	}
	else
		Show[x][y] = Get_mine(Mine, x, y) + '0';
}