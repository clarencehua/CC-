
#include <stdio.h>

class Base
{
public:
	void Test()
	{
		printf("����Test...\n");
	}
};

class Child : public Base
{
public:
	void Test()
	{		
		printf("����Test...\n");
	}
};

int main()
{
	Base* p = new Child;
	p->Test();
	return 0;
}


