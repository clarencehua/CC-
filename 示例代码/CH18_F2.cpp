
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv)
{
	double a = atof(argv[1]);
	int n = atoi(argv[2]);
	double result = pow(a, n);
	printf("result: %.2f\n", result);
	return 0;
}


