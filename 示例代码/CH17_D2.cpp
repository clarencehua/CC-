
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// 存储数据
int save()
{
	const char* filename = "c:/aaa.xyz";
	FILE* fp = fopen(filename, "wb" );
	if(fp == NULL)
	{
		printf("failed to open file!\n");
		return -1;
	}

	char name[32] = "shaofa";
	unsigned short length = strlen(name);
	fwrite(&length, 1, 2, fp);   // 写入2个字节，表示字符串的长度
	fwrite(&name, 1, length, fp); // 写入字符串的有效字节

	fclose(fp);
	return 0;
}

// 读取数据
int load()
{
	const char* filename = "c:/aaa.xyz";
	FILE* fp = fopen(filename, "rb" );
	if(fp == NULL)
	{
		printf("failed to open file!\n");
		return -1;
	}

	char name[32];
	unsigned short length ;
	fread(&length, 1, 2, fp);   // 先读2个字节，得到字符串的长度
	fread(&name, 1, length, fp); // 读出指定长度的有效字节
	name[length] = 0; // 加上结束符



	fclose(fp);
	return 0;
}

int main()
{
	save();
	load();
	return 0;
}


