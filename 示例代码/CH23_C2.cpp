
#include <stdio.h>

class Base
{
public:
	void Test()
	{
		printf("����Test...\n");
	}
};

class Child : public Base
{
public:
	void Test()
	{		
		Base::Test(); // �ȵ��ø���Ĵ���
		printf("����Test: ...\n");
	}
};

int main()
{
	Child ch;
	ch.Test();
	return 0;
}


