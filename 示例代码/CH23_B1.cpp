
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Base
{
public:
	Base(): a(1), b(2), c(3) { }

	int a;
protected:
	int b;
private:
	int c;
};

class Child : public Base
{
public:
	void Test()
	{		
		printf("a=%d \n", a); // a���̳�
		printf("b=%d \n", b); // b���̳�
		// printf("c=%d \n", c); // ������c����Ϊcû�б��̳�
	}
};



int main()
{
	Child ch;
	ch.a = 101;   // a��public��
	//ch.b = 102; // ����������b��protected���ε��޷�����
	ch.Test();
	return 0;

	return 0;
}


