#include <stdio.h>

class Circle
{
public:
	Circle ()
	{
		x = y = 0;
		radius = 1;
	}
public:
	int x, y;
	int radius;
};

int main()
{
	Circle c1; // ����һ������, ��ʹ����
	printf("location:(%d,%d), radius:%d \n", c1.x, c1.y, c1.radius);
	return 0;
}



