#include <stdio.h>
int main()
{
	char a = 0;
	scanf ("%d", &a);  // 错！不能用char或short接收用户输入！只能用int型变量！
	return 0;
}


