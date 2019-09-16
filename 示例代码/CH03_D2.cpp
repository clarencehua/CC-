#include <stdio.h>
int main()
{
	const int  MAX_SIZE = 1024;
	printf("a: %d \n", MAX_SIZE); // 读取const常量的值
	int  b = MAX_SIZE;  // 将MAX_SIZE的值赋值给变量b
	printf("b: %d \n", b); 
	return 0;
}
