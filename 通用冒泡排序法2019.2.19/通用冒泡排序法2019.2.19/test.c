#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stu {
	char name[10];
	int num;
	double score;
};
int int_cmp(const void* e1, const void* e2)
{
	return *((int*)e1) - *((int*)e2);//��������������
}
int struct_cmp(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}
void Swap(void* p1, void* p2, size_t width)
{
	char tmp;
	size_t i = 0;
	for (i = 0; i < width; i++)
	{
		tmp = *((char*)p1 + i);
		*((char*)p1 + i) = *((char*)p2 + i);
		*((char*)p2 + i) = tmp;
	}
}
void My_qsort(void* base, size_t num, size_t width, int (*cmp)(const void* e1, const void* e2))
{
	size_t i = 0;//size_t����ı���ֻ�����������
	size_t j = 0;
	for (i = 0; i < num-1; i++)
	{
		for (j = 0; j < num - i - 1; j++)
		{
			if (cmp((char* )base + width * j, (char* )base + width * (j + 1))>0)//base��������void*������ֱ�ӽ��н����ò�����Ӽ��˳�����
			{
				//�Ƚ�baseǿ������ת��Ϊchar*,��ָ��һ���ֽڵ�ָ�룬����Ԫ�ظ�������1��Ԫ�ص��ֽڿ�ȣ���ʱ���ʽ��ֵ��ָ������j��Ԫ�صĵ�ַ
				Swap((char*)base+width*j, (char*)base+width*(j+1), width);
			}
		}
	}
}
void test_int()
{
	size_t i = 0;
	int arr[10] = { 2,5,6,8,9,3,4,0,1,7 };
	size_t num = sizeof(arr) / sizeof(arr[0]);
	size_t width = sizeof(arr[0]);
	My_qsort(arr, num, width, int_cmp);//��������cmp����һ������ָ�����
	for (i = 0; i < num; i++)
	{
		printf("%d ", arr[i]);
	}
}
void test_struct()
{
	struct stu stu[4] = { {"zhangsan",1007,98.6},{"lisi",1024,87.9},{"wangwu",1002,99.7} };
	size_t i = 0;
	size_t num = sizeof(stu) / sizeof(stu[0]);
	size_t width = sizeof(struct stu);
	My_qsort(stu, num, width, struct_cmp);
	for (i = 0; i < num; i++)
	{
		printf("%s ", (stu+i)->name);
	}
	return 0;
}
void main()
{
	test_int();
	test_struct();
	system("pause");
	return 0;
}
////ð������
//void Bubble(int arr[10], int num)
//{
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	for (i = 0; i < num-1; i++)
//	{
//		for (j = 0; j < num - i - 1; j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void main()
//{
//	int arr[10] = { 2,4,3,5,8,6,1,7,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	Bubble(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}