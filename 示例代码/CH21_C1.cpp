#include <stdio.h>

class Object
{
public:
	~Object()
	{
		printf("����...\n");
	}

	int value;
};

int main()
{
	{
		Object obj;
		obj.value = 1;
		printf("...... aaa ......\n");
	} // �ֲ�����obj�����ڵ��˽���

	printf("...... bbb .......\n");
	return 0;
}



