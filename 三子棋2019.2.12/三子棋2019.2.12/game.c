#include"game.h"

//初始化棋盘，全为 空格
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
//打印ROW*COL的棋盘
void print_board(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);//玩家走后，已经将字符赋给了数组，此处直接打印数组即可
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
	//直到输入的x,y在数组大小范围内，玩家走后跳出循环
	while (1)
	{
		int x, y;
		printf("玩家走,请输入坐标：> ");
		scanf("%d%d", &x, &y);
		//确保用户输入的坐标不超出棋盘
		if ((x > 0 && x < row + 1) && (y > 0 && y < col + 1))
		{
			if (board[x - 1][y - 1] == ' ')//保证对应的位置没被占，即玩家或电脑没走过此位置
			{
				board[x - 1][y - 1] = 'X';//玩家输入的坐标-1是数组元素的下标，‘X’标记玩家走过的位置
				break;//跳出循环，执行game()函数的下一条语句，电脑走
			}
			else
				printf("此处已占，请重新输入\n");//不是空格，位置已占，进行下一次循环，玩家重新输入坐标
		}
		else
			printf("输入错误，请重新输入\n");//超出数组范围，进行下一次循环，玩家重新输入坐标
	}
}
void com_move(char board[ROW][COL], int row, int col)
{
	printf("电脑走：>\n");
	while (1)
	{
		int x, y;
		//使电脑走的随机坐标位置在row*col之内
		x = rand() % row;
		y = rand() % col;
		//确保此位置没被走过
		if (board[x][y] == ' ')
		{
			board[x][y] = '0';
			break;//电脑走一步，跳出循环
		}
	}
}
char is_win(char board[ROW][COL], int row,int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0];//其中一行的元素一样
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];//其中一列的元素一样
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][i] != ' ')
			return board[0][0]; //其中\方向的元素一样
		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][i] != ' ')
			return board[0][2]; //其中/方向的元素一样
	}
	if (is_full(board, ROW, COL) == 1)
	{
		return 'Q';//若is_full返回值为1，则is_win返回值为‘Q’，表示棋盘已满
	}
	return 'C';//否则，is_win返回‘C’,表示棋盘未满
}

int is_full(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;//棋盘未满，is_full返回值为0
		}
	}
	return 1;//棋盘已满，is_full返回值为1
}



