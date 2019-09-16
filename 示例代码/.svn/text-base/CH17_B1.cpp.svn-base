
#include <stdio.h>

int main()
{
	const char* filename = "c:/aaa.txt";
	FILE* fp = fopen (filename, "rb" );
	if(fp == NULL)
	{
		printf("failed to open file!\n");
		return -1;
	}
	char buf[128] ;
	int n = fread (buf, 1, 128, fp);
	fclose (fp);
	return 0;
}
