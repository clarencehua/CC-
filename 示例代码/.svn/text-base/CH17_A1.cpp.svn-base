
#include <stdio.h>

int main()
{
	const char* filename = "c:/aaa.txt";
	FILE* fp = fopen (filename, "wb" );
	if(fp == NULL)
	{
		printf("failed to open file!\n");
		return -1;
	}
	char buf[] = "hello";
	int n = fwrite (buf, 1, 5, fp);
	fclose (fp);
	return 0;
}
