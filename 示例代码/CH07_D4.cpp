#include <stdio.h>
int main()
{
	int a[100];
	int i; 
	for( i=0 ; i<100 ; ) // 省去第3个表达式
	{
		a[i] = i + 1;
		i++;  // 后置过程写在大括号里面
	}
	return 0;
}
