#include <stdio.h>
const int MUL = 1 + 2;
int main()
{
	int a = 4 * MUL; // MUL的值是3, a的值是12
	printf("%d, %d", MUL, a);
	return 0;
}
