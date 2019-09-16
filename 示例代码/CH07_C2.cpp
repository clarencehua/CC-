#include <stdio.h>

int main()
{
	int day = 1;  // 用户输入数字0-6，代表周日、周一到周六

	switch(day)
	{
	case 1:
		printf("Go to office\n");
	case 2:
		printf("Go out \n");
	default:
		printf("Stay at home \n");
	}

	return 0;
}
