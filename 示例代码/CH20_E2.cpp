#include <stdio.h>

class Object
{
public:
	// const版本
	void Test() const
	{
		printf("const : %d \n", value);
	}
	// 普通版本
	void Test()
	{
		value += 1;
		printf("non-const: %d \n", value);
	}
public:
	int value;
};

void use_it(const Object* p)
{
	p->Test(); // 调用是的const版本的Test()
}
void use_it2(Object* p)
{
	p->Test(); // 调用的是普通版本的Test()
}
int main()
{
	Object obj;
	obj.value = 123;

	use_it(&obj);
	use_it2(&obj);
	return 0;
}
