#include <stdio.h>

// 求两个数中的较大值
double find_max(double a, double b)
{
	return a > b ? a : b;
}

// 求三个数中的最大值
double find_max(double a, double b, double c)
{
	double m = a > b ? a : b;
	return m > c ? m: c;
}

int main()
{
	double m1 = find_max(1, 2);
	return 0;
}
