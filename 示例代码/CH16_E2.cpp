
#include <stdio.h>
#include <string.h>
int main()
{
	char* s = "LiMing";
	char* p = strchr(s, 'M');  // 返回值p指向字符'M'的地址
	if(p!= NULL)
	{
		printf("find: %s \n", p);
	}

	return 0;
}


