
#include <stdio.h>
#include <string>      //  ① 引用头文件
using namespace std;    // ② 引用命名空间

int main()
{
	string str;
	str.append("something else");	// 附加一个字符串
	str.append("abcde", 5);    // 附加一个字符串：拷贝前5个字符
	str.append("abcde", 1, 3);  // 附加一个字符串：
	                     // 起点offset=1, 长度3，即拷贝"bcd"
	str.append(2, 'h'); // 附加2个’h’字符

	return 0;
}



