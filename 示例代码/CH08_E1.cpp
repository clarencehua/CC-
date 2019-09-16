#include <stdio.h>

int Test(int a)
{ 
	int b = a + 10;
	int c = a + b;
	return c;
}

int main()
{
	int a = 10;
	int b = Test(a);
	return 0;
}


