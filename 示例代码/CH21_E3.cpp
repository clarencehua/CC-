#include <stdio.h>

class Object
{
public:
	Object(int& a): ref(a)
	{
	}
private:
	int& ref;
};


int main()
{
	int value = 1;
	Object obj(value);

	return 0;
}




