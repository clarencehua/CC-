#include <stdio.h>

void test(int* p) // ��һ���ڴ��ַ����һ������
{
	*p += 1;
}

int main()
{
	int a = 0;
	test(&a); // a��ֵ��Ϊ1
	printf("a : %d \n", a);
	return 0;
}

