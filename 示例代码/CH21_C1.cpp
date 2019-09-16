#include <stdio.h>

class Object
{
public:
	~Object()
	{
		printf("销毁...\n");
	}

	int value;
};

int main()
{
	{
		Object obj;
		obj.value = 1;
		printf("...... aaa ......\n");
	} // 局部变量obj生命期到此结束

	printf("...... bbb .......\n");
	return 0;
}



