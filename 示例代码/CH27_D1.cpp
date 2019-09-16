
#include <stdio.h>

class Fraction
{
public:
	Fraction(): num(1), den(1)
	{
	}
	Fraction(int n, int d) : num(n), den(d)
	{
	}

	// 类型转换操作符
	operator double()
	{
		return (double)num/den;
	}

public:
	int num;
	int den;
};


int main()
{
	Fraction fa(4, 5);
	double value = (double)fa; 
	printf("value of the fraction: %.3f \n", value);
	return 0;
}


