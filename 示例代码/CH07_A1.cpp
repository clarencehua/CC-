#include <stdio.h>
int main()
{
	int a = 10;
	//下面的复合语句里包含了3条单语句
	{
		a += 2;
		a *= 3;
		printf("a=%d \n", a);
	}	
	return 0;
}
