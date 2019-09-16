#include <stdio.h>

class Object
{
public:
	Object() :value(0)
	{	
		printf("构造对象\n");
	}
	~Object()
	{
		printf("析构对象\n");
	}
	void Test()
	{
		printf("---- 测试 ----\n");
	}
private:
	int value;
};


int main()
{
	Object* p = new Object;
	p->Test();
	delete p;
	return 0;
}
