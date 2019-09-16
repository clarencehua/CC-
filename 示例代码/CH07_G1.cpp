#include <stdio.h>

int main()
{
	int score[23]  = 
	{ 
		89, 98, 80, 87, 56, 57, 68, 68, 
		65, 87, 78, 77, 65, 98, 67 
	};

	int num_of_A = 0;
	int num_of_B = 0;
	int num_of_C = 0;
	for(int i=0; i<23; i++)
	{
		int s = score[i];
		if (s >= 80) 
		{
			num_of_A ++;
		}
		else if(s >= 60)
		{
			num_of_B ++;
		}
		else	
		{
			num_of_C ++;
		}
	}
	printf("A: %d,  B: %d,  C: %d \n",num_of_A, num_of_B, num_of_C );
	return 0;
}