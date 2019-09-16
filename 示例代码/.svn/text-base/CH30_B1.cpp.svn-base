
#include <stdio.h>
#include <vector>      //  ① 引用头文件
using namespace std;    // ② 引用命名空间

int main()
{
	vector<int>  arr(128);
	for ( int  i=0;  i< arr.capacity() ; i++)
	{
		int& p = arr.at (i );
		p = 0;  // 全部初始化为0
	}

	return 0;
}



