//. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣� 
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
#include<stdio.h>
#include<stdlib.h>
//ÿ�ε��õݹ麯�����Ὣ��ַ�����Ƶ���һ���ַ��ĵ�ַ��ֱ���ҵ����һ������Ԫ�زſ�ʼ����ַ�
void reverse_string(char* string)
{
	if (*string)
	{
		reverse_string(string + 1);
		printf("%c", *string);
	}
	else
		return;
}
void main()
{
	char string[] = "abcdefg";
	reverse_string(string);
	printf("\n");
	system("pause");
}