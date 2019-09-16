
#include <stdio.h>

class Base
{
public:
	void Test()
	{
		printf("父类Test...\n");
	}
};

class Child : public Base
{
public:
	void Test()
	{		
		Base::Test(); // 先调用父类的代码
		printf("子类Test: ...\n");
	}
};

int main()
{
	Child ch;
	ch.Test();
	return 0;
}


