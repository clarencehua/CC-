#include <stdio.h>

// �Ѿ�һ����Object��һ��ȫ�ֺ���Print()
class Object
{
	// ��Print() ����ΪObject������
	friend  void  Print(Object* p);

public:
	Object(int v) : value(v)
	{
	}
private:
	int value;
};

// ��ȫ�ֺ��������Object��private��Ա
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
