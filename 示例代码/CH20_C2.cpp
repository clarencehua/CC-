#include <stdio.h>

int x = 789; // ȫ�ֱ���

class Object
{
public:
	int x;
	void Test()
	{
		printf("x = %d \n", x);// �����x:��Ա����x
	}
};

int main()
{
	Object obj;
	obj.x = 123;
	obj.Test();
	return 0;
}



