
#include <stdio.h>
#include <string.h>

struct Object
{
	int id;
	char name[8];
};

int main()
{
	Object obj = { 0x12345678,  "shaofa" };

	return 0;
}

