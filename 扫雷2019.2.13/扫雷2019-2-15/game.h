#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY 10
void Init_board(char arr[ROWS][COLS], int rows, int cols, char ret);//初始化准备设置雷和排雷的数组，全为‘0’
void game();
void Set_mine(char arr[ROWS][COLS], int row, int col);//设置雷
void print_board(char arr[ROWS][COLS], int row, int col);//打印要排查雷的数组，打印已知雷位置的数组
void Find_mine(char Mine[ROWS][COLS], char Show[ROWS][COLS], int row, int col);//排雷
void open_white(char Mine[ROWS][COLS], char Show[ROWS][COLS], int x, int y);//点非雷位置，展开一片空白
