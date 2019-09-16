#include <stdio.h>

class Circle
{
public:
	Circle() ;
	Circle(int x, int y, int radius);
	~Circle();
private:
	int x, y;
	int radius;
};

Circle::Circle() : x(0), y(0), radius(1)
{
}
Circle::Circle(int x, int y, int radius) : x(x), y(y), radius(radius)
{
}
Circle::~Circle()
{
}

int main()
{
	Circle c1;
	return 0;
}




