
#include <stdio.h>

struct Object
{
	int value;
};

int main()
{
	Object a = {1};
	Object& r = a;  // r���õĶ�����a

	r.value = 2; // ��r�ķ��ʾ��Ƕ�a�ķ���
	printf("value: %d \n", a.value);
	return 0;
}

