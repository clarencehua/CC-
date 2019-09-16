#include <stdio.h>
int main()
{
	int a = 1; 
	if(1)
	{
		int a = 2; // 定义一个同名的变量
		printf("level2: a=%d \n", a);
	}
	printf("end: a= %d\n", a); 
	return 0;
}
