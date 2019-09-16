#include <stdio.h>

// 全局函数
int Sum(int x, int y)
{
	return x + y;
}

class Object
{
public:
	// 成员函数
	int Sum(int x, int y)
	{
		return 2*(x + y);
	}
	void Test()
	{
		printf("sum: %d \n", Sum(3,4)); // 指向成员函数
		printf("sum: %d \n", ::Sum(3,4)); // 指向全局函数
	}
};


int main()
{
	Object obj;
	obj.Test();
	return 0;
}



