#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char arr[10] = "";
	int i = 0;
	printf("���������룬������������������Ļ���\n");
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", arr);
		if (strcmp(arr, "257088928") == 0)
			break;
		else
			printf("�������������%d�λ��ᣡ\n", 2 - i);
	}
	if (i == 3)
		printf("�˳�����\n");
	else
		printf("������ȷ���������\n");
	
	system("pause");
	return 0;
}