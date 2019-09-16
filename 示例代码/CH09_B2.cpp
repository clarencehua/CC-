#include <stdio.h>
int main()
{
	int a = 10;
	int b = 11;
	int* p ; // 定义一个指针, 注意int*作为一个整体
	p = &a; // p指向a
	printf("%d \n", *p); // *p: 读内存的值
	p = &b; // p指向b
	printf("%d \n", *p); // *p: 读内存的值

	return 0;
}

