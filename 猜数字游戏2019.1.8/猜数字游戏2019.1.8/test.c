#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("********************************************************\n");
	printf("************************猜数字游戏**********************\n");
	printf("*********开始游戏：选择1； 退出游戏：选择0：************\n\n");
}
void game()
{
	int random_num = rand() % 100 + 1;//使生成的随机值在1-100之间
	int input = 0;
	while (1)
	{
		printf("请输入数字:>");
		scanf("%d", &input);
		if (input > random_num)
			printf("猜大了!\n");
		else if (input < random_num)
			printf("猜小了!\n");
		else
		{
			printf("恭喜您，猜对了!\n\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请输入您的选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}