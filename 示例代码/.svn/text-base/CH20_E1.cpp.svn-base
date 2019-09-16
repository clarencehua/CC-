#include <stdio.h>

class Object
{
public:
	void Test() const
	{
		//value = 1; // const函数里不能修改成员变量
		printf("%d \n", value);
	}
public:
	int value;
};
int main()
{
	Object obj;
	obj.value = 123;
	obj.Test();
	return 0;
}
