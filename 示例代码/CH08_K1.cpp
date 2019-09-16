#include <stdio.h>

void  Show ( int x, int y, int z=1) // 第3个参数具有默认值
{
	printf("location: (%d, %d), layer: %d \n", x, y, z);
}	
int main()
{
	Show(400,300); // 未指定第3个参数，则第3个参数取默认值1
	Show(200,300, 2); // 指定第3个参数
	return 0;
}
