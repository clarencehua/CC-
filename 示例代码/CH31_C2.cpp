#include <stdio.h>
int main()
{
	try{
		throw 1.2;
	}
	catch(int ex)
	{
		printf("Got exception: (int) %d \n", ex);
	}
	catch(...)
	{
		printf("Default Handler ...\n");
	}
	return 0;
}
