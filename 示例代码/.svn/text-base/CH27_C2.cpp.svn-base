
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

	// Fraction == Fraction
	bool operator == (const Fraction& other)
	{
		if(num * other.den  == den * other.num)
		{
			return true;
		}
		return false;
	}

	// Fraction == int
	bool operator == (int n)
	{
		if(num == den * n)
		{
			return true;
		}
		return false;
	}

public:
	int num;
	int den;
};


int main()
{
	Fraction fa(6, 3);
	if(fa == 2)  // 编译器报错！不支持==
	{
		printf("相等\n");
	}

	return 0;
}


