#include <stdio.h>

void A()
{
	throw 12.34;
}
int main()
{
	try
	{
		A();
		printf("Won't get here \n"); // 此行不被执行
	}
	catch(double ex)
	{
	}	
	printf("main exit \n");
	return 0;
}
