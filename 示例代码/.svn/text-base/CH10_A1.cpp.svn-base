
#include <stdio.h>
#include <string.h>

int ids[4] = 
{ 
	201501, 201502, 201503, 201504
};
char names[4][16] = 
{
	"John", "Jennifer", "AnXin", "Unnamed"
};
char phones[4][16] = 
{
	"18601011223", "13810022334", "18600100100", "13111011011"
};

// 显示所有数据
void DisplayAll()
{
	for(int i=0; i<4; i++)
	{
		printf("%d \t%s\t%s\n", ids[i], names[i], phones[i]);
	}
}

// 按ID来查找
int Find(int id, char name[], char phone[])
{
	for(int i=0; i<4; i++)
	{
		if(ids[i] == id)
		{
			// 复制姓名和手机号
			strcpy(name, names[i]);
			strcpy(phone, phones[i]);
			return i;
		}
	}
	return -1;
}

int main()
{
	char name[16];
	char phone[16];
	Find(201502, name,phone);
	return 0;
}

