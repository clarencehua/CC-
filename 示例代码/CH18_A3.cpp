
#include <stdio.h>

extern int abc; // ����һ��ȫ�ֱ���
extern void Print(int); // ����һ��ȫ�ֺ���

int main()
{
	abc = 11;
	Print(abc);
	return 0;
}

int abc = 0; // ȫ�ֱ����Ķ��� 
void Print(int val)
{
	printf("value: %d \n", val);
}
