
#include <stdio.h>
#include <vector>      //  ① 引用头文件
using namespace std;    // ② 引用命名空间

int main()
{
	vector <int>  arr (128);   // 指定初始容量，要足够大
	arr.clear ();   // size清0，capacity不变
	arr.push_back ( 1 );
	arr.push_back ( 2 );
	arr.push_back ( 3 );
	// ...

	int size = arr.size ();  // 计算一下现在一共存入了多少个元素

	vector<int> :: iterator  iter;
	for (vector<int>::iterator iter = arr.begin();   
		iter != arr.end ();  iter ++)
	{
		int& p = *iter;  // iterator类支持*号操作
		printf("%d \n", p);
	}

	return 0;
}



