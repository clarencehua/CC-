
#include <stdio.h>
#include <string.h>

struct Student
{
	int id;
	char name[16];
	Student* next;   // 添加一个指针, 用于指向下一个对象
};

// 4个对象
Student ss[4] = 
{
	{201501, "John",		0 },
	{201502, "Jennifer",	0 },
	{201503, "AnXi",      0 },
	{201504, "Unnamed",	0 }
};

int main()
{
	// 把4个对象串起来, 构造一个链表
	ss[0].next = &ss[1];
	ss[1].next = &ss[2];
	ss[2].next = &ss[3];
	ss[3].next = 0;

	//  从头节点开始，遍历每一个节点
	Student* p = &ss[0];
	while(p)
	{
		printf("ID: %d, name: %s\n", p->id, p->name);
		p = p->next; // 下一个对象
	};


	return 0;
}

