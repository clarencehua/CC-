#include <stdio.h>
#include <string.h>

class IOException
{
public:
	IOException(int error, const char* descr)
	{
		this->error = error;
		strcpy(this->descr, descr);
	}
public:
	int error;
	char descr[128];
};

void A()
{
	throw IOException(-10, "File is readonly");
}
int main()
{
	try
	{
		A();
		printf("Won't get here \n"); // 此行不被执行
	}
	catch(IOException ex)
	{
		printf("(%d) %s \n", ex.error, ex.descr);
	}	
	printf("main exit \n");
	return 0;
}
