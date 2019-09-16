#include <stdio.h>

int Power(int base, int n)
{
	int result = 1;
	for(int i=0; i<n; i++)
	{
		result *= base;
	}
	return result;	
}

int main()
{
	int result = Power (2,5); // 
	printf(" result: %d \n", result);

	return 0;
}
