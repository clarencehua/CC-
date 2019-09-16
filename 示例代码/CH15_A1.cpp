#include <stdio.h>

//  °´Ë÷Òı±éÀú×Ö·û´®
int show_string (const char* str) 
{
	for(int i=0;  str[i]  ; i++)
	{
		printf("%c ", str[i]);
	}
	return 0;
}



int main()
{
	show_string("hello,world");

	return 0;
}
