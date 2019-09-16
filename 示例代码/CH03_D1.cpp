#include <stdio.h>
int main()
{
	const int  a = 10;
	const double pi = 3.1415926;
	a = 11;   // 错误! 不允许赋值操作！
	pi = 3.1415927; // 错误! 不允许赋值操作！
	return 0;
}
