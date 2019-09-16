
#include <stdio.h>

struct Object
{
	int id;
	char name[256];
};

// 传值方式
void Test1(Object a)
{
	printf("id: %d, name: %s \n", a.id, a.name);
}

// 传地址方式
void Test2(Object* p)
{
	printf("id: %d, name: %s \n", p->id, p->name);
}

int main()
{
	Object obj = { 123, "shaofa" };
	Test1(obj);  // 传入对象的值
	Test2(&obj); // 传入对象的地址
	return 0;
}

