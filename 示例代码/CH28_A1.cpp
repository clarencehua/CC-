#include <stdio.h>
#include <string.h>

class AAA
{
public:
	// 定义一个内部类
	class Inner
	{
	public:
		char  name[64];
	};

public:
	AAA()
	{
	}
};

int main()
{
	AAA::Inner a ;  // 使用该内部类时，类名使用全称 AAA::Inner
	strcpy(a.name, "AnXin"); // 其他使用方法和普通的类没有区别
	printf("Name: %s \n", a.name);
	return 0;
}

