
#include <stdio.h>

struct Object
{
	int value;
};

Object the_object = { 123 }; // 全局对象

Object& Test()
{
	return the_object; // 返回某个对象的引用
}

int main()
{
	Object& r = Test();
	r.value = 456; // 被引用的对象有效
	return 0;
}

