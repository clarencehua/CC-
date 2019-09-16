#include <stdio.h>

int main()
{
	char  src [] = "hello";   // Ô´
	char  dst[128];    // Ä¿±ê
	int i = 0;
	while (1)
	{
		dst[i] = src[i] ; 
		if(src [i] == 0) break;   
		i ++;
	}
	printf("result: %s \n", dst);
	return 0;
}
