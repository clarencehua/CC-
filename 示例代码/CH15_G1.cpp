#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Object
{
	int id;
	char* name;
};

void Create(Object* p, int id, const char* name)
{	
	p->id = id;

	int len = strlen(name);
	p->name = (char*) malloc(len + 1);
	strcpy(p->name,  name);
}

void Destropy(Object* p)
{
	free(p->name);  
}

void Copy(Object* dst, const Object* src)
{
	dst->name = (char*) malloc ( strlen(src->name) + 1);
	strcpy(dst->name, src->name);
	dst->id = src->id;
}

int main()
{
	Object obj;
	Create(&obj, 1, "something");
	printf("id: %d, name: %s \n", obj.id, obj.name);

	Object obj2 = obj;
	Copy(&obj2, &obj);
	printf("obj2: id: %d, name: %s \n", obj2.id, obj2.name);

	Destropy(&obj2);
	Destropy(&obj);

	return 0;
}
