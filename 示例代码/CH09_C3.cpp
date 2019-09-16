#include <stdio.h>

int main()
{
	int arr[4] = {0,1,2,3};
	int* p = arr;  // 指向arr[0]
	p += 2;        // 指向arr[2]
	printf("%d \n", *p); // 打印输出为2

	p -= 1; // 指向arr[1]
	printf("%d \n", *p); // 打印输出为1

	return 0;
}

