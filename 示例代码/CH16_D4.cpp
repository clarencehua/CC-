
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{

	srand (time (NULL));
	int code[7];   // һע����Ϊ7������
	for(int i=0; i<7; i++)
	{
		int r = rand () % 10; 
		code[i] = r;
	}	

	return 0;
}


