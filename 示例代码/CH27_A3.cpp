
#include <stdio.h>

class Fraction
{
	friend Fraction operator + (const Fraction& a, const Fraction& b);

public:
	Fraction(): num(1), den(1)
	{
	}
	Fraction(int n, int d) : num(n), den(d)
	{
	}
public:
	int num;
	int den;
};

// 重载全局操作符
Fraction operator + (const Fraction& a, const Fraction& b)
{
	Fraction result;
	result.den = a.den * b.den; // 分母相乘
	result.num = a.num * b.den + a.den * b.num; // 分子交叉相乘
	return result;
}

int main()
{
	Fraction fa(2, 3);
	Fraction fb(3, 5);
	Fraction fc = fa + fb;

	return 0;
}


