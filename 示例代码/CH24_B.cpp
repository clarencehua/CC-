#include <stdio.h>
#include <string.h>
class Object
{
public:
	Object(int id, const char* name)
	{		
		this->id = id;
		strcpy(this->name, name);
	}	
private:
	int id;
	char name[128];
};

int main()
{
	Object a ( 1, "some" );
	Object b ( a );
	return 0;
}
