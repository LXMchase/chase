#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int leap(int x)
{
	if ((x % 4==0 && x % 100 != 0) || x % 400==0)
		return 1;
	else
		return 0;
}
int main()
{
	int year = 0;
	scanf("%d", &year);
	if (leap(year))
		printf("%d是闰年\n", year);
	else
		printf("%d不是闰年\n", year);
	system("pause");
	return 0;
}