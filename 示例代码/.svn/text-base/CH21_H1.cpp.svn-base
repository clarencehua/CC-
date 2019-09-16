#include <stdio.h>

class Object
{
public:
	Object(int v) : value(v)
	{		
	}
	void Print() const
	{
		printf("Value:%d\n", value);
	}
private:
	int value;
};

void Test(Object obj)
{
	obj.Print();
}

void Test2(const Object& obj)
{
	obj.Print();
}

int main()
{
	Object a(1);
	a = 2;  // 发生了隐式类型转换, 相当于 a = (Object) 2; 
	a.Print();

	a = (Object)3; // 显式类型转换
	a.Print();

	Test(4);
	Test2(5);
	return 0;
}




