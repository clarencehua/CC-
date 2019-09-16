
#include <stdio.h>

struct Object
{
	int value;
};

void Test(Object& r)
{
	r.value += 1;
}

int main()
{
	Object a = {1}; 
	Test(a);
	return 0;
}

