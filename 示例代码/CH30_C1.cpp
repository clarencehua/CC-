
#include <stdio.h>
#include <list>      //  ① 引用头文件
using namespace std;    // ② 引用命名空间

int main()
{
	list<int>  mylist;
	mylist.push_back(1);
	mylist.pop_back();
	mylist.push_front(2);
	mylist.pop_front();

	return 0;
}



