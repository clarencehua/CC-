#include <stdio.h>
#include <string.h>

unsigned int Hex2Int(const char* str)
{
	int size = strlen(str);
	if(size > 8)
		throw -101; // 把错误信息throw出去
	unsigned int result = 0;
	for(int i=0; i<size; i++)
	{
		char ch = str[i];
		unsigned int value = 0;
		if(ch >= 'a' && ch <= 'f') 
			value = ch - 'a' + 10;
		else if(ch >= 'A' && ch <= 'F') 
			value = ch - 'A' + 10;
		else if(ch >= '0' && ch <= '9')
			value = ch - '0';
		else		
			throw -102; // 把错误信息throw出去
		result = result * 16 + value;
	}
	return result;
}

int main()
{
	try{
		unsigned int result = Hex2Int("ABCDG");
		printf("Got: %u", result);
	}
	catch(int err)
	{
		printf("Error: %d \n", err);
	}
	return 0;
}

