#include <stdio.h>

void  Show ( int x, int y, int z=1) // ��3����������Ĭ��ֵ
{
	printf("location: (%d, %d), layer: %d \n", x, y, z);
}	
int main()
{
	Show(400,300); // δָ����3�����������3������ȡĬ��ֵ1
	Show(200,300, 2); // ָ����3������
	return 0;
}
