#include <stdio.h>
int Test(int a)
{
	printf("this is a test \n");
	return a* a;
}
int main()
{
	Test ( 2 );  // 忽略Test函数的返回值
	return 0;
}

