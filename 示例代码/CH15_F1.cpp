#include <stdio.h>

int main()
{
	char str[] = "hello,world";
	str[5]=0;
	char* part0 = str;
	char* part1 = str + 6;
	printf("part0: %s \n", part0);
	printf("part1: %s \n", part1);

	return 0;
}
