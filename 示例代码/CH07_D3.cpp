#include <stdio.h>

int main()
{
	int a[100];
	int i; 
	for( i=0 ;  ; i++) // ʡȥ��2�����ʽ
	{
		if(i>=100)
		{
			break; // break�����˳�for���
		}
		a[i] = i + 1;
	}
	return 0;
}
