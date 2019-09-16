
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Base
{
protected:
	void Test()
	{
		printf("¸¸ÀàTest...\n");
	}
};

class Child : public Base
{
public:
	void Test()
	{		
		printf("×ÓÀàTest...\n");
	}
};

int main()
{
	Child ch;
	ch.Test();

	return 0;
}


