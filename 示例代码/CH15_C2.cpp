#include <stdio.h>
#include <string.h>

int main()
{
	char  src [] = "hello";   // Դ
	char  dst[128];    // Ŀ��
	strcpy(dst, src);
	printf("result: %s \n", dst);
	return 0;
}
