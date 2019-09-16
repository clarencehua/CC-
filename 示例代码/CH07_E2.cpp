#include <stdio.h>
int main()
{
	int a[100];
	int i = 0;  // 初始化
	while(1) // 总是执行
	{
		if(i>=100) break; // 条件判断放在大括号里面

		a[i] = i + 1;
		i++;  // 后置过程
	}

	return 0;
}
