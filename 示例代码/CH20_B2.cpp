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
private:
	void Test2() // �ú�����private���Σ����ܱ��ⲿ����
	{
		printf("Private function!\n");
	}
};

int main()
{
	Object obj;
	obj.Test2();  // ������󣡽�ֹ����private��Ա!

	Object* p = &obj;
	p->Test2();  //  ������󣡽�ֹ����private��Ա!

	return 0;
}

