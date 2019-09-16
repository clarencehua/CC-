
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// 存储数据
int save()
{
	const char* filename = "c:/aaa.cfg";
	FILE* fp = fopen(filename, "wb" );
	if(fp == NULL)
	{
		printf("failed to open file!\n");
		return -1;
	}

	char ip[]="192.168.1.100";
	int port = 8080;

	fprintf (fp, "ip=%s\n",   ip);
	fprintf (fp, "port=%d\n", port);

	fclose(fp);
	return 0;
}

// 读取数据
int load()
{
	const char* filename = "c:/aaa.cfg";
	FILE* fp = fopen(filename, "rb" );
	if(fp == NULL)
	{
		printf("failed to open file!\n");
		return -1;
	}

	char buf[512];  // 缓冲区，用于存储一行的内容
	while(! feof(fp))
	{
		char* line = fgets(buf, 512, fp);
		if(line)
		{
			printf("line: %s", line);
			// 解析这一行,得到key和value			
		}
	}


	fclose(fp);
	return 0;
}

int main()
{
	save();
	load();
	return 0;
}


