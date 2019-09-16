
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Object
{
	int id;
	int value;
};

// �洢����
int save()
{
	const char* filename = "c:/aaa.xyz";
	FILE* fp = fopen(filename, "wb" );
	if(fp == NULL)
	{
		printf("failed to open file!\n");
		return -1;
	}

	Object objs[100];
	int i;
	for(i=0; i<100; i++)
	{
		objs[i].id = i;
		objs[i].value = i*i;
	}
	
	// �ļ��д���100������
	fwrite(objs, 1, sizeof(objs), fp);
	
	fclose(fp);
	return 0;
}

// ��ȡ����
int load()
{
	const char* filename = "c:/aaa.xyz";
	FILE* fp = fopen(filename, "rb" );
	if(fp == NULL)
	{
		printf("failed to open file!\n");
		return -1;
	}

	Object obj = {0};

	// ����ָ��λ��
	fseek(fp, 56 * sizeof(Object) , SEEK_SET);
	fread(&obj, 1, sizeof(Object), fp);
	printf("id=%d, value=%d \n", obj.id, obj.value);

	// ����ָ��λ��
	fseek(fp, 81 * sizeof(Object) , SEEK_SET);
	fread(&obj, 1, sizeof(Object), fp);
	printf("id=%d, value=%d \n", obj.id, obj.value);

	fclose(fp);
	return 0;
}

int main()
{
	save();
	load();
	return 0;
}


