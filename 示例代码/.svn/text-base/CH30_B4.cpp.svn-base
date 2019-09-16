
#include <stdio.h>
#include <vector>      //  ① 引用头文件
using namespace std;    // ② 引用命名空间

// 传入的const对象，只读访问
void test (const vector<int>& arr) 
{
	// 使用其内部类const_iterator
	for (vector<int>::const_iterator   iter =  arr.begin(); 
		iter != arr.end ();  iter ++)
	{
		const int& p = *iter;   // 这里是const reference
		printf("%d \n", p);
	}
}

int main()
{
	vector <int>  arr (128);   // 指定初始容量，要足够大
	arr.clear ();   // size清0，capacity不变
	arr.push_back ( 1 );
	arr.push_back ( 2 );
	arr.push_back ( 3 );
	// ...

	int size = arr.size ();  // 计算一下现在一共存入了多少个元素

	test(arr);
	return 0;
}



