#include <stdio.h>

// 定义一个全局变量
int data[8] = {1,2,3,4,5,6,7,8};

// 不必传入参数
double Average()
{
	// 在函数里直接读取全局变量data
	int total = 0;
	for(int i=0; i<8; i++)
	{
		total += data[i];
	}
	return total / 8.0;
}

int main()
{
	double result = Average();
	printf("result: %.3lf \n", result);
	return 0;
}
