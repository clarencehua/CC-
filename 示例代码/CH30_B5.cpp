
#include <stdio.h>
#include <vector>      //  ① 引用头文件
using namespace std;    // ② 引用命名空间

struct  Object
{
	int  id;  
	char name[32]; 
};

vector < Object>  objs (1000);

// 添加对象
void AddObject(const Object& s)
{
	for(vector <Object>::iterator iter = objs.begin();
		iter != objs.end(); iter ++)
	{
		Object& p = *iter;
		if(s.id < p.id)  // 判断比较，插到指定位置
		{
			// 在该位置插入新元素s
			objs.insert( iter,  1,  s);  			
			break;
		}
	}
}

// 删除对象
void DelObject(int id)
{
	for(vector <Object>::iterator iter = objs.begin();
		iter != objs.end(); iter ++)
	{
		Object& p = *iter;
		if(p.id == id)
		{
			objs.erase(iter);
			break;
		}
	}
}


int main()
{
	objs.clear();
	
	Object a1 = {1, "aaa"};
	Object a2 = {2, "bbb"};
	Object a3 = {3, "ccc"};
	AddObject(a1);
	AddObject(a2);
	AddObject(a3);


	return 0;
}



