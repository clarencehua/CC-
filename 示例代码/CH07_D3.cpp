#include <stdio.h>

int main()
{
	int a[100];
	int i; 
	for( i=0 ;  ; i++) // 省去第2个表达式
	{
		if(i>=100)
		{
			break; // break用于退出for语句
		}
		a[i] = i + 1;
	}
	return 0;
}
