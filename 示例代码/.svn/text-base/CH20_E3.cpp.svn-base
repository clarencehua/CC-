#include <stdio.h>

class Object
{
public:
	void Test() // 普通版本
	{
		value += 1;
		printf("non-const: %d \n", value);
	}
public:
	int value;
};
void use_it(const Object* p)
{
	p->Test(); //  编译器报错！找不到const版本的Test()!
}


int main()
{
	Object obj;
	obj.value = 123;

	use_it(&obj);

	return 0;
}
