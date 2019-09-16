#include <stdio.h>


class Object
{
public:
	int x;
	void Test(); // (1) 成员函数的声明
};

void Object::Test() //(2) 成员函数写在外边，加上类名限定
{
	printf("....... testing ........\n");
}

int main()
{
	Object obj;
	obj.Test();
	return 0;
}



