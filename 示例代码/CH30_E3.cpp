
#include <stdio.h>
#include <string>      //  ① 引用头文件
using namespace std;    // ② 引用命名空间

void ParseName(const string& name)
{
	int p1 = name.find_first_of(" \t"); // 空格, TAB
	if(p1 >= 0)  // 找到分隔符
	{
		string first_name = name.substr(0, p1);
		int p2 = name.find_first_not_of(" \t", p1);
		if(p2 >= 0)
		{
			string second_name = name.substr(p2);
			printf("%s,%s\n", first_name.c_str(),  second_name.c_str());
		}
	}
}


int main()
{
	ParseName("Li Ming");
	return 0;
}



