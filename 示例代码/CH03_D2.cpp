#include <stdio.h>
int main()
{
	const int  MAX_SIZE = 1024;
	printf("a: %d \n", MAX_SIZE); // ��ȡconst������ֵ
	int  b = MAX_SIZE;  // ��MAX_SIZE��ֵ��ֵ������b
	printf("b: %d \n", b); 
	return 0;
}
