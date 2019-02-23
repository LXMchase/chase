#define _CRT_SECURE_NO_WARNINGS 1
// µœ÷memcpy
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
void* My_memcpy(void* dest, const void* src, size_t count)
{
	const void* ret = dest;
	assert(dest);
	assert(src);
	while (count--)
	{
		*((char*)dest)++ = *((char*)src)++;
	}
	return (void* )ret;
}
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int* ret=(int*)My_memcpy(arr+5, arr, 20);
	for (i = 0; i < 20; i++)
	{
		printf("%d", arr[i]);
	}
	system("pause");
	return 0;
}