
#include <stdio.h>
#include <string.h>


int main()
{
	// �ṹ������Ҳ�����ں����ڶ���
	struct Contact
	{
		int id;
		char name[16];
		char phone[16];
	};

	Contact a = { 20141003, "AnXin", "18601011223"};
	return 0;
}

