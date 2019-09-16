#include <stdio.h>

class Object
{
private:   // x,y是private的, 但用this->可以访问
	int x;
	int y;
public:
	void Set(int a, int b)
	{
		this->x = a;
		this->y = b;
	}
	int Add()
	{
		return this->x + this->y; // 用this->调用其他成员
	} 
	void Test()
	{
		printf("Sum: %d \n", this->Add()); // 用this->调用其他成员
	}
};

int main()
{
	Object obj;
	obj.Set(1, 2);
	obj.Test();
	return 0;
}



