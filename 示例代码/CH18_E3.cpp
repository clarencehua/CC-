
#include <stdio.h>

#define ENABLE_OUTPUT
#undef ENABLE_OUTPUT

int main()
{
#ifdef ENABLE_OUTPUT
	printf("aaaa\n");
#endif
	return 0;
}
