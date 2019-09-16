#include <stdio.h>

// 函数声明里加默认值
void  Show ( int x, int y, int z=1) ;

int main()
{
	Show(400,300); // 未指定第3个参数，则第3个参数取默认值1
	Show(200,300, 2); // 指定第3个参数
	return 0;
}

// 函数定义之处：不能加默认值
void  Show ( int x, int y, int z) 
{
	printf("location: (%d, %d), layer: %d \n", x, y, z);
}
