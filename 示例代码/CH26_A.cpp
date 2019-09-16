#include <stdio.h>

// 已经一个类Object，一个全局函数Print()
class Object
{
	// 将Print() 声明为Object的朋友
	friend  void  Print(Object* p);

public:
	Object(int v) : value(v)
	{
	}
private:
	int value;
};

// 在全局函数里，访问Object的private成员
void Print(Object* p)
{
	printf("value: %d \n", p->value);
}

int main()
{
	Object obj(123);
	Print(&obj);
	return 0;
}
