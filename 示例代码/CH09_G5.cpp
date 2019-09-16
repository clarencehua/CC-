#include <stdio.h>

int* get(int* arr, int i)
{
	return &arr[i]; // 返回数组arr的第i个元素的指针
}

int main()
{
	int arr[4] = {0, 1,2,3};
	int* p = get(arr, 1);

	*p = 22;  // p指向的位置是arr[1]，arr当前有效
	printf("value: %d \n", *p);

	return 0;
}
