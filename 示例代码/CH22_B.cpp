#include <stdio.h>

/* Circle:  ����һ��Բ */
class Circle
{
public:
	Circle() : x(0), y(0), radius(1)
	{
	}
	Circle(int x, int y, int radius) :x(x), y(y), radius(radius)
	{
	}
private:
	int x, y;  // Բ������
	int radius; // �뾶 
};


int main()
{
	Circle* p1 = new Circle();
	Circle* p2 = new Circle();
	Circle* p3 = new Circle(1,1,4);

	delete p1;
	delete p2;
	delete p3;
	return 0;
}
