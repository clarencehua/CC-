#include <stdio.h>

int Fn(int n)
{
	// 终止条件
	if(n==1)
		return 1;
	if(n==2)
		return 1;

	// 缩减问题规模
	return Fn(n-1) + Fn(n-2);
}

int main()
{
	for(int i=1; i<= 10; i++)
	{
		printf("%d ", Fn(i));
	}
	return 0;
}

