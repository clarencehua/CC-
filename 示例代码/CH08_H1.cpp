#include <stdio.h>

// ���������еĽϴ�ֵ
double find_max(double a, double b)
{
	return a > b ? a : b;
}

// ���������е����ֵ
double find_max(double a, double b, double c)
{
	double m = a > b ? a : b;
	return m > c ? m: c;
}

int main()
{
	double m1 = find_max(1.1, 2.2);
	double m2 = find_max(1.1, 2.2 , 3.3);
	return 0;
}


