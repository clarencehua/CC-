
#include <stdio.h>

struct Object
{
	unsigned char a : 1;
	unsigned char b : 2;
	unsigned char c : 3;
};


int main()
{
	Object obj;
	obj.a = 1;
	obj.b = 3;
	obj.c = 4;

	return 0;
}

