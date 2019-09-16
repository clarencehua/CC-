
#include <stdio.h>

int main()
{
	int values[5] = {1， 2， 3， 4， 5}；

	values[0] = 11;
	printf("%d \n", values[0]);

	// 对所有的元素求和
	int total = values[0] + values[1] + values[2] + values[3] + values[4];

	// 第一个数和第五个数的差值
	int delta = values[0] - values[4];

	return 0;
}

