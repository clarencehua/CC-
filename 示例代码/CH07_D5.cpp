#include <stdio.h>

int main()
{
	int count = 0;
	for(int i=1 ; i<= 100; i+=1 )
	{
		if(i % 2) 
			continue;  // �������䱻����...

		count ++;
		printf("Even Number: %d \n", i);
	}
	printf("Total : %d \n", count);


	return 0;
}
