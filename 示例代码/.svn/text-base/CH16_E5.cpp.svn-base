
#include <stdio.h>
#include <string.h>

// 在第index位置插入字符ch
void insert(char* buf, char ch, int index)
{
	int size = strlen(buf); // 原长度	
	char* p = buf + index;// 待插入位置
	memmove(p+1, p, size-index); // 后移
	*p = ch; // 插入字符
}
int main()
{
	char str[128] = "hello";	
	insert(str, 'i', 1);

	return 0;
}



