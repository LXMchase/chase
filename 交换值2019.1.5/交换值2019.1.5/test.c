#include<stdio.h>
#include<stdlib.h>
int main()
{
	////������ʱ��������
	int a=10;
	int b=32;
	//int c=0;
	//printf("����ǰ��a=%d b=%d\n", a, b);
	//c = a;
	//a = b;
	//b = c;
	//printf("������a=%d b=%d\n", a, b);
	
	//��������ʱ���� 
	printf("����ǰ��a=%d,b=%d\n", a, b);
	//����һ
	/*a = a+b;
	b = a-b;
	a = a-b;*/
	//������
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("������a=%d,b=%d\n", a, b);
	system("pause");
	return 0;
}