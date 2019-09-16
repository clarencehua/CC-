
#include <stdio.h>
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

	Object a = { 1, "aaaa" };
	Object b = { 2, "bbbb"  };

	// 添加第一个key-value
	objs.insert(ObjectMap::value_type(1, a)); 
	objs.insert(ObjectMap::value_type(2, b)); 

	return 0;
}



