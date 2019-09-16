
#include <stdio.h>

#define ENABLE_OUTPUT

int main()
{
#ifndef ENABLE_OUTPUT
	printf("aaaa\n");
#endif
	return 0;
}
