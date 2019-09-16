#include <stdio.h>

class Object
{
public:
	int x; // 成员变量
	void Test(int x) // 局部变量（参变量）
	{
		printf("x = %d \n", x);// 最近的：函数内定义的x
	}
};


int main()
{
	Object obj;
	obj.x = 123;
	obj.Test(456);
	return 0;
}



