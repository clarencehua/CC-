
#include <stdio.h>
#include <string.h>
#include <map>      //  ① 引用头文件
using namespace std;    // ② 引用命名空间

struct Object
{
	int id;
	char name[64];
};

typedef map<int,Object>  ObjectMap;

int main()
{
	ObjectMap  objs;   // id - Object
	Object a = { 1, "aaaa"};
	Object b = { 2, "bbbb"};
	objs[1] = a;
	objs[2] = b;

	ObjectMap::iterator iter = objs.find(1);
	if(iter != objs.end())
	{
		Object& s = iter->second;
		printf("name: %s \n", s.name);
	} 

	return 0;
}



