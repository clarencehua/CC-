
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
	// д������
	int x = 100;
	int y = 200;
	fwrite(&x, 1, 4, fp);  // x: д��4���ֽ�
	fwrite(&y, 1, 4, fp);  // y: д��4���ֽ�

	// �ر��ļ�
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
