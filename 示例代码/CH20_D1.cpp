#include <stdio.h>


class Object
{
public:
	int x;
	void Test(); // (1) ��Ա����������
};

void Object::Test() //(2) ��Ա����д����ߣ����������޶�
{
	printf("....... testing ........\n");
}

int main()
{
	Object obj;
	obj.Test();
	return 0;
}



