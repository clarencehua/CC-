
#include <stdio.h>

class Base
{
public:
	int x;
};

class Child : protected Base
{

};

int main()
{
	Child ch;
	ch.x = 10; // �������! x������Ϊprotected���ⲿ�޷�����
	return 0;
}


