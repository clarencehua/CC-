#include <stdio.h>

// ������ҳ���ڵĺ���
int is_alpha(char ch);
void print_ascii();


int main()
{
	print_ascii();
	return 0;
}


// ��ӡ������ĸ��ASCII��
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

// ���ch����ĸ���򷵻�1�����򷵻�0
int is_alpha(char ch)
{
	if(ch >= 'a' && ch <= 'z')
		return 1;
	if(ch >= 'A' && ch <= 'Z')
		return 1;
	return 0;
}