#include <stdio.h>
void C()
{
	throw 1.2;
	printf("C exit\n");
}
void B()
{
	C();	
	printf("B exit\n");
}
void A()
{
	try{
		B();
	}
	catch(int ex)
	{
		printf("Got: (int) %d \n", ex);
	}
	printf("A exit\n");
}
int main()
{
	A();
	printf("main exit \n");
	return 0;
}
