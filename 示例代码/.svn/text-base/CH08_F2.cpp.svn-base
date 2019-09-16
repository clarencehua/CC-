#include <stdio.h>

// 声明本页面内的函数
int is_alpha(char ch);
void print_ascii();


int main()
{
	print_ascii();
	return 0;
}


// 打印所有字母的ASCII码
void print_ascii()
{
	for(int i=0; i<127; i++)
	{
		if(is_alpha(i))
		{
			printf("%c - %d \n", i, i);
		}
	}
}

// 如果ch是字母，则返回1；否则返回0
int is_alpha(char ch)
{
	if(ch >= 'a' && ch <= 'z')
		return 1;
	if(ch >= 'A' && ch <= 'Z')
		return 1;
	return 0;
}