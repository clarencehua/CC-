#include <stdio.h>

// �����������Ĭ��ֵ
void  Show ( int x, int y, int z=1) ;

int main()
{
	Show(400,300); // δָ����3�����������3������ȡĬ��ֵ1
	Show(200,300, 2); // ָ����3������
	return 0;
}

// ��������֮�������ܼ�Ĭ��ֵ
void  Show ( int x, int y, int z) 
{
	printf("location: (%d, %d), layer: %d \n", x, y, z);
}
