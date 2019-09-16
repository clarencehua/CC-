#include <stdio.h>

void A(char* p)
{
	*p = 123;  // ∑√Œ ø’÷∏’Î
}
int main()
{
	try{
		A(NULL);
	}catch(...)
	{
		printf("catch all exception...\n");
	}
	return 0;
}
