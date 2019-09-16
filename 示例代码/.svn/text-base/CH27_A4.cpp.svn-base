
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

	// Fraction + Fraction
	Fraction operator + (const Fraction& other)
	{
		Fraction result;
		result.den = den * other.den; // 分母相乘
		result.num = num*other.den + den * other.num; // 分子交叉相乘
		return result;
	}
	// Fraction + int
	Fraction operator + (int n)
	{
		Fraction result;
		result.num = num + den * n; // 分母不变，分子变化
		return result;
	}
public:
	int num;
	int den;
};


int main()
{
	Fraction fa(2, 3);
	Fraction fc = fa + 4;

	return 0;
}


