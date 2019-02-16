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
		printf("请选择：> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("输入错误，请重新选择：\n");
		}
	} while (input);
}
void game()
{
	char Mine[ROWS][COLS];//定义准备设置雷的数组
	char Show[ROWS][COLS];//定义显示的数组
	Init_board(Mine, ROWS, COLS, '0');//初始化准备设置雷的数组，全为‘0’
	Init_board(Show, ROWS, COLS, '*');//初始化排雷的数组
	Set_mine(Mine, ROW, COL);//设置雷
	print_board(Show, ROW, COL);//打印要排查雷的数组
	print_board(Mine, ROW, COL);//打印已知雷位置的数组
	Find_mine(Mine, Show, ROW, COL);//排雷
}
int main()
{
	srand((unsigned)time(NULL));
	test();
	system("pause");
	return 0;
}