#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch;
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'a'&&ch <= 'z')
			putchar(ch - 32);
		else if (ch >= 'A'&&ch <= 'Z')
			putchar(ch + 32);
		else if (ch >= '0'&&ch <= '9')
			;
		else
			putchar(ch);
	}
	system("pause");
	return 0;
}