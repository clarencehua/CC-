
#include <stdio.h>
#include <string.h>

struct Contact
{
	int id;
	char name[16];
	char phone[16];
};

// 传值
void test(Contact a)
{
	printf("id: %d , name: %s \n", a.id, a.name);
}
// 传地址
void test(Contact* p)
{
	printf("id: %d , name: %s \n", p->id, p->name);
}

Contact  create (int id)
{
	Contact a;
	a.id = id;
	return a; // 像基本类型一样，直接 return
};

void create(int id, Contact* a)
{
	a->id = id;
}


int main()
{
	Contact a = { 20141003, "AnXin", "18600100100"};
	Contact b;

	b = a; // 赋值

	Contact* p = &a; // 定义结构体指针
	p->id = 20141011; // 使用->访问对象的成员
	strcpy(p->phone, "13800100100"); // 使用->访问对象的成员

	test(a);
	test(&a);

	return 0;
}

