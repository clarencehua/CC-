#include <stdio.h>

int main()
{
	int n = 10;
	for(int i=0; i<n; i++)  // i���к�
	{
		for(int j=0; j<n; j++) // j:�к�
		{
			if(j == i || j == n-i-1) 
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n"); // ÿ��ĩβ
	}
}
