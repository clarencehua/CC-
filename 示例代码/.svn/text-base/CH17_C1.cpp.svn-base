
#include <stdio.h>

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
	fwrite(&x, 1, 4, fp);  // x: 写入4个字节
	fwrite(&y, 1, 4, fp);  // y: 写入4个字节

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
	int x, y;
	fread(&x, 1, 4, fp);
	fread(&y, 1, 4, fp);
	printf("loading ... x=%d, y=%d \n", x, y);
	fclose (fp);
	return 0;

}

int main()
{
	Save();
	Load();
	return 0;
}
