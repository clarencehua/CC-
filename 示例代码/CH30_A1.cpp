
#include <stdio.h>
#include <vector>      //  ① 引用头文件
using namespace std;    // ② 引用命名空间

int main()
{
	vector<int>  arr;    // ③ 定义实例
	arr.push_back(10);
	arr.push_back(11);
	arr.push_back(12);
	for(int i=0; i<arr.size(); i++)
	{
		int val = arr.at(i);
		printf("%d \n", val);
	}
	return 0;
}



