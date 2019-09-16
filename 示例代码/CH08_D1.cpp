#include <stdio.h>

int number = 0; // 定义在函数之外，是全局变量

void Add(int n)
{
	number += n;
}

int main()
{
	number = 10;
	Add(1);
	printf("now: %d \n", number);
	return 0;
}
