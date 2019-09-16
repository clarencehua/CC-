
#include <stdio.h>

class AAA1
{
public:
	int x, y;
};
class AAA2
{
public:
	int u, v;
};

class Child : public AAA1, public AAA2
{
public:
	int a, b;
};

int main()
{
	Child ch;
	ch.x = ch.y = 1; // 继承于AAA1
	ch.u = ch.v = 2; // 继承于AAA2
	ch.a = ch.b = 3; // 自己的成员
	return 0;
}


