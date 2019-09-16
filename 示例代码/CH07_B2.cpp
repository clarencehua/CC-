#include <stdio.h>

int main()
{
	int x = 61; // x可能通过scanf让用户输入
	if(x >= 60)
	{
		printf("Pass !\n");
		printf("Go for a celebration! \n"); // 庆祝一下
	}
	else
	{
		printf("Fail !\n");
		printf("Pay more efforts !\n"); // 更须努力
	}

	return 0;
}
