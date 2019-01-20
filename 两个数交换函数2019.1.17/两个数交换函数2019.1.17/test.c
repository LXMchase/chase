#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void swap(int* px, int* py)
{
	int temp=0;
	temp = *px;
	*px = *py;
	*py = temp;
}
int main()
{
	int a = 20;
	int b = 38;
	printf("%d;%d\n", a, b);
	swap(&a,&b);
	printf("%d;%d\n", a, b);
	system("pause");
	return 0;

}