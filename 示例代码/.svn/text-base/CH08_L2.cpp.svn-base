#include <stdio.h>

int Fn (int n)
{
	if(n==1) return 1;
	if(n==2) return 1;

	int an_2 = 1;
	int an_1 = 1;
	int an = 0;
	for(int i=3; i<=n ; i++)
	{
		an = an_2 + an_1;  // A(n) = A(n-2) + A(n-1)
		an_2 = an_1;
		an_1 = an;
	}
	return an;
}

int main()
{
	for(int i=1; i<= 10; i++)
	{
		printf("%d ", Fn(i));
	}
	return 0;
}

