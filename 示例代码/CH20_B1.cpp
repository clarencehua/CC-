#include <stdio.h>

class Object
{
public:
	int x;
	int y;
	void Test()
	{
		printf("hello,world!\n");
	}
};	


int main()
{
	Object obj;
	obj.Test();  // �õ�ŷ��ʳ�Ա����

	Object* p = &obj;
	p->Test();  // �ü�ͷ���ʳ�Ա����

	return 0;
}

