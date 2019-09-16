#include <stdio.h>

int main()
{
	int* p = 0;
	if(1)
	{
		int a = 123; // a生命期开始
		p = &a; // 指向a
	} // a生命期结束

	printf("value: %d \n", *p);
	return 0;
}

