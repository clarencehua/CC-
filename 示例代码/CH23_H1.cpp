
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
	ch.x = 10; // 编译错误! x被调整为protected，外部无法访问
	return 0;
}


