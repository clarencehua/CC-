#include <stdio.h>

class Object
{
public:
	int a;
	int b;
private:
	double c;
	double d;
};


int main()
{
	Object obj;
	obj.a = obj.b = 1;  // a,b被public修饰，可以访问
	obj.c = obj.d = 2.2; // c,d被private修饰，不可以访问, 编译器报错
	Object* p = &obj;
	p->a = 11;
	p->c = 13.0; // 编译错误！private成员！
	return 0;
}

