#include <stdio.h>

class Object
{
public:
	int a;
	int b;
	void Test()
	{
		printf("a=%d, b=%d\n", this->a, this->b);
	}
};	

int main()
{
	Object obj;
	obj.a = 1;
	obj.b = 2;
	obj.Test();

	return 0;
}

