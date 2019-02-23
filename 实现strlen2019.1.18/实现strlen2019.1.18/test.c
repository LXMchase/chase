//.递归和非递归分别实现strlen
//非递归
#include<stdio.h>
#include<stdlib.h>
//int my_strlen(char* string)
//{
//	int count = 0;
//	while (*string)
//	{
//		count++;
//		string++;
//	}
//	return count;
//}
//void main()
//{
//	char string[] = "abcdefghijklmn";
//	printf("%d\n",my_strlen(string));
//	system("pause");
//}
//递归
int my_strlen(char* string)
{
	if (*string == 0)
		return 0;
	else
		return (my_strlen(string+1) + 1);
}
void main()
{
	char string[] = "abcdefg";
	printf("%d\n",my_strlen(string));
	system("pause");
}