#include <stdio.h>

class Object
{
private:   // x,y��private��, ����this->���Է���
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
		return this->x + this->y; // ��this->����������Ա
	} 
	void Test()
	{
		printf("Sum: %d \n", this->Add()); // ��this->����������Ա
	}
};

int main()
{
	Object obj;
	obj.Set(1, 2);
	obj.Test();
	return 0;
}



