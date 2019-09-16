#include <stdio.h>

int test(char ch)
{
	if(ch >= 'A' && ch <= 'Z')
	{
		return 1;
	}
	else if(ch >= 'a' && ch <= 'z' )
	{
		return -1;
	}
	return 0;
}   


int main()
{
	int r = test ('M');
	printf("result: %d \n", r);
	return 0;
}
