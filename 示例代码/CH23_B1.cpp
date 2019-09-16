
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Base
{
public:
	Base(): a(1), b(2), c(3) { }

	int a;
protected:
	int b;
private:
	int c;
};

class Child : public Base
{
public:
	void Test()
	{		
		printf("a=%d \n", a); // a被继承
		printf("b=%d \n", b); // b被继承
		// printf("c=%d \n", c); // 看不见c，因为c没有被继承
	}
};



int main()
{
	Child ch;
	ch.a = 101;   // a是public的
	//ch.b = 102; // 编译器报错：b是protected修饰的无法访问
	ch.Test();
	return 0;

	return 0;
}


