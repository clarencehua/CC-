#include <stdio.h>
#include <string.h>

unsigned int Hex2Int(const char* str)
{
	int size = strlen(str);
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
		
		result = result * 16 + value;
	}
	return result;
}

int main()
{
	unsigned int result = Hex2Int("ABCD");
	return 0;
}

