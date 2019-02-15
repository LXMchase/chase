#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
//菜单
void menu()
{
	printf("***************************************************\n");
	printf("*************    1.play     0.exist       *********\n");
	printf("***************************************************\n");
}

//游戏函数
void game()
{
	char ret;
	char board[ROW][COL] = { '0' };//定义3*3的数组
    init_board(board, ROW, COL);//数组初始化为 空格
	print_board(board, ROW, COL);//打印最开始的棋盘
	//游戏一直进行
	do
	{
		player_move(board, ROW, COL);//玩家走
		ret = is_win(board, ROW, COL);//ret接收判断输赢函数的返回值
		//is_win返回‘C’--棋盘位置未满
		//以下情况游戏结束：
		//‘Q’--棋盘位置已满，平局
		//‘X’--玩家赢
		//‘0’--电脑赢
		if (ret != 'C')
		{
			break;//跳出循环
		}
		print_board(board, ROW, COL);//打印本次走过的棋盘
		com_move(board, ROW, COL);//电脑走
		ret = is_win(board, ROW, COL);//ret接受is_win的返回值
		if (ret != 'C')
		{
			break;//跳出循环
		}
		print_board(board, ROW, COL);//打印本次走过的棋盘
	} while (1);
	//跳出循环时，ret接受到的值有三种：'X''0''Q'
	if (ret == 'X')
	{
		printf("玩家赢\n");
	}
	else if (ret == '0')
	{
		printf("电脑赢\n");
	}
	else if (ret == 'Q')
	{
		printf("平局\n");
	}
	print_board(board, ROW, COL);//打印最终的棋盘
}
void main()
{
	int input = 0;
	srand((unsigned)time(NULL));//随机数发生器的初始化函数，srand与rand()配合使用产生伪随机序列
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
				printf("退出游戏！\n");
				break;
			default:
				printf("输入错误，请重新选择：\n");//重新打印菜单，重新选择
			}
	} while (input);
	system("pause");
}