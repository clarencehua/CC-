
#include <stdio.h>
#include <string>      //  ① 引用头文件
using namespace std;    // ② 引用命名空间

void ToLowercase(string& str)
{
	for(int i=0; i<str.length(); i++)
	{
		char&  ch = str.at(i);    // 取得该位置的reference
		if(ch >= 'A' && ch <= 'Z')
		{
			ch += ('a' - 'A');
		}
	}
}

int main()
{
	string str = "Hello,World";
	ToLowercase(str);
	printf("Result: %s \n", str.c_str());
	return 0;
}



