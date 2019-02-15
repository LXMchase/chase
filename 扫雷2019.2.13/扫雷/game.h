#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY 10
void Init_board(char arr[ROWS][COLS],int rows,int cols,char ret);
void game();
void Set_mine(char arr[ROWS][COLS], int row, int col);
void print_board(char arr[ROWS][COLS], int row, int col);
void Find_mine(char Mine[ROWS][COLS],char Show[ROWS][COLS], int row, int col);
void open_white(char Mine[ROWS][COLS],char Show[ROWS][COLS], int x,int y);