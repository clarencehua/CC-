#include <stdio.h>

int main()
{
	int x = 71; // x����ͨ��scanf���û�����
	if(x>=90)
		printf("Got A \n");
	else if(x>=80)
		printf("Got B \n");
	else if(x>=70)
		printf("Got C \n");
	else if(x>=60)
		printf("Got D \n");
	else 
		printf("Got E \n");
	printf("That's over \n");
	return 0;
}
