#include <stdio.h>


int* get()
{
	int number = 1;
	return &number; // 返回一个局部变量的指针
}

int main()
{
	int* p = get();
	*p = 12; // 错误！ p指向的变量已经失效，所以不能用星号操作!
	return 0;
}

