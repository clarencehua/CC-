
#include <stdio.h>

class Base
{
public:
	virtual void Test() // 加上virtual关键字
	{
		printf("父类Test...\n");
	}
};

class Child : public Base
{
public:
	void Test()
	{		
		printf("子类Test...\n");
	}
};

int main()
{
	Base* p = new Child;
	p->Test();
	return 0;
}


