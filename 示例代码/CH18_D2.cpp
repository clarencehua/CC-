#include <stdio.h>
const int MUL = 1 + 2;
int main()
{
	int a = 4 * MUL; // MUL��ֵ��3, a��ֵ��12
	printf("%d, %d", MUL, a);
	return 0;
}
