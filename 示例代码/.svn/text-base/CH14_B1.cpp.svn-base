
#include <stdio.h>

struct Object
{
	int value;
};

int main()
{
	Object a = {1};  // 第一个对象
	Object b = {2};  // 第二个对象
	Object & r = a;  // r与第一个对象绑定
	r = b;  // 这并不是重新绑定。这只是第二个对象的值赋值给了第一个对象
	printf("a: %d \n", a.value);
	return 0;
}

