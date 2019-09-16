#include <stdio.h>
#include <string.h>

class Base
{
public:
	int m1;
};

class Object : public Base
{
public:
	Object(int id, const char* name)
	{		
		this->id = id;
		strcpy(this->name, name);
	}	
	Object(const Object& other) 
		: Base(other)  // 调用父类的拷贝构造函数
	{
		this->id = other.id;
		strcpy(this->name, other.name);
	}
private:
	int id;
	char name[128];
};

int main()
{
	Object a ( 1, "some" );
	a.m1 = 123;
	Object b ( a );

	return 0;
}
