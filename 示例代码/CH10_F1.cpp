
#include <stdio.h>

struct Object
{
	int id;
	char name[256];
};

// ��ֵ��ʽ
void Test1(Object a)
{
	printf("id: %d, name: %s \n", a.id, a.name);
}

// ����ַ��ʽ
void Test2(Object* p)
{
	printf("id: %d, name: %s \n", p->id, p->name);
}

int main()
{
	Object obj = { 123, "shaofa" };
	Test1(obj);  // ��������ֵ
	Test2(&obj); // �������ĵ�ַ
	return 0;
}

