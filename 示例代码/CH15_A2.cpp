#include <stdio.h>

int show_string (const char* str) //  ��ָ������ַ���
{
	const char* p = str;
	while (*p)  
	{
		char ch = *p ++;
		printf("%c ", ch);
	}
	return 0;
}

int main()
{
	show_string("hello,world");

	return 0;
}
