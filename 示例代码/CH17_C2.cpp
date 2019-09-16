
#include <stdio.h>
#include <string.h>

int Save()
{
	const char* filename = "c:/aaa.txt";
	FILE* fp = fopen (filename, "wb" );
	if(fp == NULL)
	{
		printf("failed to open file!\n");
		return -1;
	}
	// 写入数据
	int x = 100;
	int y = 200;
	char buf[128];
	sprintf(buf, "x=%d,y=%d", x, y);
	fwrite(buf, 1,  strlen(buf),  fp);

	// 关闭文件
	fclose (fp);
}

int Load()
{
	const char* filename = "c:/aaa.txt";
	FILE* fp = fopen (filename, "rb" );
	if(fp == NULL)
	{
		printf("failed to open file!\n");
		return -1;
	}
	char buf[128];
	int n = fread(buf, 1, 128, fp);
	if(n > 0)
	{
		buf[n] = 0;
		int x, y;
		sscanf(buf, "x=%d,y=%d", &x, &y);
		printf("loading ... x=%d, y=%d \n", x, y);
	}

	fclose (fp);
	return 0;

}

int main()
{
	Save();
	Load();
	return 0;
}
