#include <stdio.h>

class ChildA
{
public:
	ChildA()
	{
		printf("����A ...\n");
	}
	~ChildA()
	{
		printf("����A ...\n");
	}
};
class ChildB
{
public:
	ChildB()
	{
		printf("����B ...\n");
	}
	~ChildB()
	{
		printf("����B...\n");
	}
};
class Object
{
public:
	Object()
	{
		printf("����Object...\n");
	}
	~Object()
	{
		printf("����Object...\n");
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




