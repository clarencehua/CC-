#include <stdio.h>

void Test(int a)
{
	a += 1000;
}
int main()
{
	int n = 1;
	Test(n);
	printf("Now: n=%d \n", n); // n��ֵ��1001��
	return 0;
}
