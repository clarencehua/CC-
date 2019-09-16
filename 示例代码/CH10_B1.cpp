
#include <stdio.h>
#include <string.h>

struct Contact
{
	int id;
	char name[16];
	char phone[16];
};


int main()
{
	Contact  a;  // 定义一个变量，不指定初始值

	Contact b = 
	{ 
		201501,        // id: 一个int值
		"Jennifer",    // name: 一个char型数组
		"13810022334"  // phone: 一个char型数组
	};

	return 0;
}

