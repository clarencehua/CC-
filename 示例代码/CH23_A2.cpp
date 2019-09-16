#include <stdio.h>

class Base
{
public:
	int x;
	void Print()
	{
		printf("x is %d \n", x);
	}
};

class Child: public Base
{
};

int main()
{
	Child ch;
	ch.x = 1;
	ch.Print();
	return 0;
}




