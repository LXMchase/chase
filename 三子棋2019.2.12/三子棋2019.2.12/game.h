#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3
void print_board(char board[ROW][COL], int row, int col);//��ӡ����
void init_board(char board[ROW][COL], int row, int col);//�����ʼ��
void player_move(char board[ROW][COL], int row,int col);//�����
void com_move(char board[ROW][COL], int row, int col);//������
char is_win(char board[ROW][COL], int row, int col);//�ж���Ӯƽ�ĺ���
