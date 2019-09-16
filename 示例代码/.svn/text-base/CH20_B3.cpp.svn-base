#include <stdio.h>

class Object
{
public:
	int a;
	int b;
	void Test(Object* that)
	{
		printf("a=%d, b=%d\n", that->a, that->b);
	}
};	

int main()
{
	Object obj;
	obj.a = 1;
	obj.b = 2;
	obj.Test(&obj);

	return 0;
}

