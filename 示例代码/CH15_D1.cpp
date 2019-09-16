#include <stdio.h>
#include <string.h>

int main()
{
	int ret = strcmp("Jack", "Jacky");
	printf("Result: %d \n", ret);  // 返回值-1，表示"Jack" < "Jacky"
	return 0;
}
