#define _CRT_SECURE_NO_WARNINGS
// µœ÷memmove
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
void* My_memmove(void* dest, const void* src,size_t count)
{
	void* ret = dest;
	assert(dest);
	assert(src);
	if(dest < src)
	{
		while (count--)
		{
			*((char*)dest)++ = *((char*)src)++;
		}
	}
	else
	{
		while (count--)
		{
			*(((char*)dest) + count) = *(((char*)src) + count);
		}
	}
	return ret;
}
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	My_memmove(arr + 2, arr, 20);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}