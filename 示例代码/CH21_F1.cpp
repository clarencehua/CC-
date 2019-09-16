#include <stdio.h>

class ChildA
{
public:
	ChildA()
	{
		printf("创建A ...\n");
	}
	~ChildA()
	{
		printf("销毁A ...\n");
	}
};
class ChildB
{
public:
	ChildB()
	{
		printf("创建B ...\n");
	}
	~ChildB()
	{
		printf("销毁B...\n");
	}
};
class Object
{
public:
	Object()
	{
		printf("创建Object...\n");
	}
	~Object()
	{
		printf("销毁Object...\n");
	}
private:
	ChildA a;
	ChildB b;
};


int main()
{
	Object obj;

	return 0;
}




