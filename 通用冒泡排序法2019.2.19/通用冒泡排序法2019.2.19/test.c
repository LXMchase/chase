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
	return *((int*)e1) - *((int*)e2);//决定了升序排列
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
	size_t i = 0;//size_t定义的变量只保存这个整数
	size_t j = 0;
	for (i = 0; i < num-1; i++)
	{
		for (j = 0; j < num - i - 1; j++)
		{
			if (cmp((char* )base + width * j, (char* )base + width * (j + 1))>0)//base的类型是void*，不能直接进行解引用操作或加减乘除运算
			{
				//先将base强制类型转换为char*,即指向一个字节的指针，加上元素个数乘以1个元素的字节宽度，此时表达式的值则指向其后第j个元素的地址
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
	My_qsort(arr, num, width, int_cmp);//传函数名cmp，用一个函数指针接收
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
////冒泡排序法
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