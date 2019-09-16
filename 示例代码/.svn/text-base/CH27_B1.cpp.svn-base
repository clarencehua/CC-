
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

	// Fraction = Fraction
	Fraction& operator= (const Fraction& other) 
	{
		this->num = other.num;
		this->den = other.den;
		return *this;
	}
	// Fraction = int
	Fraction& operator = (int n) 
	{
		this->num = n;
		this->den = 1;
		return *this;
	}

public:
	int num;
	int den;
};


int main()
{
	Fraction fa(2, 3);
	Fraction fb(5, 6);
	fa = fb;
	fb = 4;
	
	return 0;
}


