#include <stdio.h>

void Test(int a)
{
	a += 1000;
	printf("a的地址: %08X \n", &a);
}
int main()
{
	int n = 1;
	printf("n的地址: %08X \n", &n);

	Test(n);
	printf("Now: n=%d \n", n); // n的值是1001吗？
	return 0;
}
