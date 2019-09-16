#include <stdio.h>
int main()
{
	int a[100];
	int i = 0;  // 初始化
	while(i<100)
	{
		a[i] = i + 1;
		i++;  // 后置过程
	}

	return 0;
}
