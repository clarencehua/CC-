#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 从字符串中的查找和删除字符
char* Erase(const char* text, char del)
{
	int len = strlen(text); // 原字符串长度

	int count = 0;
	char* copy = (char*) malloc(len + 1);
	for(int i=0; i<len; i++)
	{
		char ch = text[i];
		if(ch != del )
		{
			copy[count] = ch;
			count ++;
		}
	}
	copy[count] = 0; // 添加结束符

	return copy;
}


int main()
{
	char input[128] = "China is a great country with a long history";
	char* copy = Erase(input, 'a');
	printf("result: %s \n", copy);
	free(copy);
	return 0;
}
