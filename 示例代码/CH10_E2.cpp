
#include <stdio.h>
#include <string.h>


int main()
{
	// 结构体类型也可以在函数内定义
	struct Contact
	{
		int id;
		char name[16];
		char phone[16];
	};

	Contact a = { 20141003, "AnXin", "18601011223"};
	return 0;
}

