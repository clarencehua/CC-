
#include <stdio.h>
#include <map>      //  �� ����ͷ�ļ�
using namespace std;    // �� ���������ռ�

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

	// ��ӵ�һ��key-value
	objs.insert(ObjectMap::value_type(1, a)); 
	objs.insert(ObjectMap::value_type(2, b)); 

	return 0;
}



