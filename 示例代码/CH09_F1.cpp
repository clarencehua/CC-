#include <stdio.h>

int number = 1;

int* get()
{
	return &number; // ����һ��ȫ�ֱ�����ָ��
}

int main()
{
	int* p = get();
	*p = 12;
	return 0;
}

