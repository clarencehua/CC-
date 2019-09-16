#include <stdio.h>

int number = 1;

int* get()
{
	return &number; // 返回一个全局变量的指针
}

int main()
{
	int* p = get();
	*p = 12;
	return 0;
}

