#include <stdio.h>
int main()
{
	int a[100];
	int i; 
	for( i=0 ; i<100 ; ) // ʡȥ��3�����ʽ
	{
		a[i] = i + 1;
		i++;  // ���ù���д�ڴ���������
	}
	return 0;
}
