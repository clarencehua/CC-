#include <stdio.h>
int main()
{
	int a = 1; 
	if(1)
	{
		int a = 2; // ����һ��ͬ���ı���
		printf("level2: a=%d \n", a);
	}
	printf("end: a= %d\n", a); 
	return 0;
}
