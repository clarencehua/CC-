#include <stdio.h>

int* get(int* arr, int i)
{
	return &arr[i]; // ��������arr�ĵ�i��Ԫ�ص�ָ��
}

int main()
{
	int arr[4] = {0, 1,2,3};
	int* p = get(arr, 1);

	*p = 22;  // pָ���λ����arr[1]��arr��ǰ��Ч
	printf("value: %d \n", *p);

	return 0;
}
