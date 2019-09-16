
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* p = (int*) malloc(100 * 4); // 申请100*4字节
	for(int i=0; i<100; i++)
	{
		p[i] = i * i;  // 使用这块内存
	}
	free(p); // 用完了释放
	return 0;
}


