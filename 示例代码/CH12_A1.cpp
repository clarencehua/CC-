
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* p = (int*) malloc(100 * 4); // ����100*4�ֽ�
	for(int i=0; i<100; i++)
	{
		p[i] = i * i;  // ʹ������ڴ�
	}
	free(p); // �������ͷ�
	return 0;
}


