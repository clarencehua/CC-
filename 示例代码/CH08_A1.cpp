#include <stdio.h>

int Cube (int a)
{
	int result = a * a * a;  // ��������
	return result;  // ���ؽ��
}

int main()
{
	int n = Cube ( 12 ); // ���ú���������������õ�����ֵ
	printf(" result: %d \n", n);

	return 0;
}
