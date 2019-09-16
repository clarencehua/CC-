#include <stdio.h>

void test(int* p) // 把一个内存地址传给一个函数
{
	*p += 1;
}

int main()
{
	int a = 0;
	test(&a); // a的值变为1
	printf("a : %d \n", a);
	return 0;
}

