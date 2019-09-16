#include <stdio.h>

int* get(int* arr, int i)
{
	return &arr[i]; // 返回数组arr的第i个元素的指针
}

int main()
{
	int a = 10;
	int* p = &a; // p指向了变量a
	int**pp = &p; // pp指向了变量p


	return 0;
}
