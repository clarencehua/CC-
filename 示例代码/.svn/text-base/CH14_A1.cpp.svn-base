
#include <stdio.h>

struct Object
{
	int value;
};

int main()
{
	Object a = {1};
	Object& r = a;  // r引用的对象是a

	r.value = 2; // 对r的访问就是对a的访问
	printf("value: %d \n", a.value);
	return 0;
}

