#include"game.h"
//初始化数组的函数，ret接收传过来的字符
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
//设置雷的函数
void Set_mine(char arr[ROWS][COLS], int row, int col)
{
	int x, y;
	int count = EASY;//共设置EASY个雷，循环次EASY次
	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		//使雷设置在数组Mine_board[ROWS][ROWS]1-9列和1-9行,最外面一圈不必设置雷
		if ((x > 0 && x <= row) && (y > 0 && y <= col))
		{
			if (arr[x][y] == '0')//保证设雷的位置不重复
			{
				arr[x][y] = '1';
				count--;
			}
		}
	}
}
//打印ROW*COL
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
//计算输入坐标周围8个位置的雷的个数，返回值为个数
int Get_mine(char Mine[ROWS][COLS], int x, int y)
{
	return Mine[x - 1][y + 1] +
		Mine[x - 1][y] +
		Mine[x - 1][y - 1] +
		Mine[x][y - 1] +
		Mine[x + 1][y - 1] +
		Mine[x + 1][y] +
		Mine[x + 1][y + 1] +
		Mine[x][y + 1] - 8 * '0';//由于数组类型为字符型，雷的个数为整型，这8个坐标的字符均需减去字符‘0’
}
//排雷函数
void Find_mine(char Mine[ROWS][COLS], char Show[ROWS][COLS], int row, int col)
{
	int win = 0;
	int x, y;
	while (win < row*col - 10)//win不超过除去10个雷的所有非雷的位置个数，表示雷未排完
	{
		printf("请输入要排查的坐标：>");
		scanf("%d%d", &x, &y);
		if ((x > 0 && x <= row) && (y > 0 && y <= col))
		{
			if (Mine[x][y] != '1')
			{
				int count = Get_mine(Mine, x, y);//将此处周围雷的个数赋给count
				Show[x][y] = count + '0';//转换为字符型，赋给此处的数组元素
				open_white(Mine, Show, x, y);
				print_board(Show, ROW, COL);//打印棋盘
				win++;//以此判断是否全部排雷完成
			}
			else
			{
				printf("很遗憾！你被炸死了，游戏结束\n");
				Show[x][y] = '1';
				print_board(Show, ROW, COL);
				break;
			}
		}
		else
		{
			printf("输入错误，请重新输入！\n");
		}
	}
	if (win >= row * col - 10)
	{
		printf("扫雷成功！\n");
	}
}
//点非雷位置，展开一片空白的函数
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