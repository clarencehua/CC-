
#include <stdio.h>
#include <stack>
using namespace std;   

struct Object
{
	int id;
	char name[64];
};
int main()
{
	Object a = {1, "aaaa"};
	Object b = {2, "bbbb"};

	stack<Object> stk;   // 定义一个stack
	stk.push(a);   //  推入一个对象
	stk.push(b);  // 再推入一个对象
	stk.pop();  // 弹出一个对象
	if(stk.size() > 0)
	{
		Object & obj = stk.top();  // 取得顶部对象，返回reference
		printf("top element: id=%d, name=%s \n", obj.id, obj.name);
	}

	return 0;
}



