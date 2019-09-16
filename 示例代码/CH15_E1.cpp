#include <stdio.h>
#include <string.h>

// src: 源字符串, index:要删除的字符的位置
void  Erase (char* src,  int index)
{
	for (int i = index + 1;  ;  i ++)
	{
		src[ i - 1] = src [ i];
		if (src[i] == '\0' ) break;  	
	}
}

/* index:要插入的位置; ch:待插入的字符 */
void Insert (char* src, int index, char ch)
{
	int len = strlen(src);  // 取得长度
	for(int i= len; i> index; i--)
		src[i] = src[i-1]; // 逐个后移

	src[index] = ch;  // 在此位置插入字符
}


int main()
{
	char  src [] = "hello";   // 源
	Erase(src,1);
	printf("Result: %s \n", src);

	Insert(src, 1, 'E');
	printf("Result: %s \n", src);
	return 0;
}
