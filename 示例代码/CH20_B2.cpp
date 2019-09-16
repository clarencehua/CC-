#include <stdio.h>

class Object
{
public:
	int x;
	int y;
	void Test()
	{
		printf("hello,world!\n");
	}
private:
	void Test2() // 该函数被private修饰，不能被外部访问
	{
		printf("Private function!\n");
	}
};

int main()
{
	Object obj;
	obj.Test2();  // 编译错误！禁止访问private成员!

	Object* p = &obj;
	p->Test2();  //  编译错误！禁止访问private成员!

	return 0;
}

