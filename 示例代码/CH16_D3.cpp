
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	srand (time (NULL)); // ÉèÖÃÖÖ×Ó
	for(int i=0; i<10; i++)
	{
		printf("%d \n", rand());
	}
	return 0;
}


