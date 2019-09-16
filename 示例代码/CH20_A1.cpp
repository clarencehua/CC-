#include <stdio.h>

class Object
{
public:
	int a;
	int b;
	double c;
	double d;
};


int main()
{
	Object obj;
	obj.a = obj.b = 1;
	obj.c = obj.d = 2.2;

	Object* p = &obj; // Ö¸ÕëÀàĞÍ
	printf("%d, %d, %lf, %lf\n", 
		p->a, p->b, p->c, p->d);


	return 0;
}

