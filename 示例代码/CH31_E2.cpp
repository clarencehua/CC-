#include <stdio.h>

class NullPointerException
{
};

void A(char* p)
{
	if(p == NULL) 
		throw NullPointerException(); // 使用无名对象
	*p = 123;  // 访问空指针
}
int main()
{
	try{
		A(NULL);
	}catch(NullPointerException ex)
	{
		printf("Got NullPointerException...\n");
	}
	return 0;
}
