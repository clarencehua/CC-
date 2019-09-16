#include <stdio.h>

/* Circle:  代表一个圆 */
class Object
{
public:
	Object(int v) : value(v)
	{		
		printf("构造对象\n");
	}
	Object(const Object& other)
	{
		this->value = other.value;
		printf("拷贝构造对象\n");
	}	

private:
	int value;
};

void Test(Object obj)
{
	// 
}

int main()
{
	Object a ( 123 );
	Object b ( a );  // 以a为蓝本创建对象b
	Object* p = new Object(a);
	Test(a);
	return 0;
}
