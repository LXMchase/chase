#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char arr[10] = "";
	int i = 0;
	printf("请输入密码，您共有三次输入密码的机会\n");
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", arr);
		if (strcmp(arr, "257088928") == 0)
			break;
		else
			printf("输入错误，您仅有%d次机会！\n", 2 - i);
	}
	if (i == 3)
		printf("退出程序！\n");
	else
		printf("密码正确，进入程序！\n");
	
	system("pause");
	return 0;
}