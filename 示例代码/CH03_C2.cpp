#include <stdio.h>

int main()
{
	char  a = 0x1A;  // ��ʮ���Ƶ�26
	int   b = 0x1A2B3C4D;  // ��ʮ���Ƶ�439041101
	printf("a : address = %08X \n", &a);  // &a��ʾ����a�ĵ�ַ
	printf("b : address = %08X \n", &b);  // &b��ʾ����b�ĵ�ַ

	return 0;
}
