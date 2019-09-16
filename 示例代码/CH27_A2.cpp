
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

	// ���ؼӺŲ�����
	Fraction operator + (const Fraction& other)
	{
		Fraction result;
		result.den = den * other.den; // ��ĸ���
		result.num = num*other.den + den * other.num; // ���ӽ������
		return result;
	}

public:
	int num;
	int den;
};


int main()
{
	Fraction fa(2, 3);
	Fraction fb(3, 5);
	Fraction fc = fa + fb;

	return 0;
}


