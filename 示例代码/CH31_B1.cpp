#include <stdio.h>

int main()
{
	try
	{
		throw 12.34;
		printf("Won't get here \n"); // 此行不被执行
	}
	catch(double ex)
	{

	}	
	printf("main exit \n");
	return 0;
}
