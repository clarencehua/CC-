#include <stdio.h>
int main()
{
	int a = 10;
	int b = 11;
	int* p ; // ����һ��ָ��, ע��int*��Ϊһ������
	p = &a; // pָ��a
	printf("%d \n", *p); // *p: ���ڴ��ֵ
	p = &b; // pָ��b
	printf("%d \n", *p); // *p: ���ڴ��ֵ

	return 0;
}

