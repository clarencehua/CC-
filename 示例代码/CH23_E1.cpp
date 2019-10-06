
#include <stdio.h>

class Base
{
public:
	Base() : x(0), y(0)
	{
		printf(" ......base create ....\n");
	}
	Base(int x, int y): x(x), y(y)
	{
		printf(" ......base create: x=%d, y=%d ....\n", x, y);
	}
	~Base()
	{
		printf(" ......base destroy ....\n");
	}
public:
	int x, y;
};

class Child : public Base
{
public:
	Child()
	{
		printf(" ......child create ....\n");
	}
	~Child()
	{
		printf(" ......child destroy ....\n");
	}
};

int main()
{
	Child c1;
	return 0;
}


