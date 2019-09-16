#include <stdio.h>

int main()
{
	int a = 0;
	printf("size: %d \n",  sizeof(a) );  // 用sizeof测量变量a的大小
	printf("size: %d \n",  sizeof(int) );  // 用sizeof测量类型int的大小
	return 0;
}
