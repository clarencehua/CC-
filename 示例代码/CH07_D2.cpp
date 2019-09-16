#include <stdio.h>

int main()
{
	int a[100];
	int i = 0; // 在for语句之前面初始化
	for( ;  i<100; i++) // for语句中省去第一个表达式
	{
		a[i] = i + 1;
	}
	return 0;
}
