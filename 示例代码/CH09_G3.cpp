#include <stdio.h>
int* get()
{
	int number = 123;
	return &number;
}
int main()
{
	int* p = get();
	printf("value: %d \n", *p);
	return 0;
}
