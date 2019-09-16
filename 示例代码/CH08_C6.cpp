#include <stdio.h>
int Test(int a)
{
	return a* a;
}
int main()
{
	printf("Ressult: %d \n",   Test ( 2 ) );  // 忽略Test函数的返回值
	return 0;
}

