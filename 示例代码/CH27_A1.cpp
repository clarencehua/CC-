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
	int num; // 分子
	int den; // 分母
};


int main()
{
	Fraction fa(2,3); // 表示2/3
	Fraction fb(3,5); // 表示3/5
	Fraction fc = fa + fb; // 语法错误
	return 0;
}

