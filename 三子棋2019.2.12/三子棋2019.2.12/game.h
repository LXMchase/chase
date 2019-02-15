#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3
void print_board(char board[ROW][COL], int row, int col);//打印棋盘
void init_board(char board[ROW][COL], int row, int col);//数组初始化
void player_move(char board[ROW][COL], int row,int col);//玩家走
void com_move(char board[ROW][COL], int row, int col);//电脑走
char is_win(char board[ROW][COL], int row, int col);//判断输赢平的函数
