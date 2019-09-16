#include <stdio.h>
#include <string.h>

// Text类中没有定义拷贝构造函数
class Text
{
public:
	Text(const char* str)
	{
		// 申请一块内存, 保存此字符串
		m_size = strlen(str) + 1;
		m_buf = new char[m_size];
		strcpy(m_buf, str);		
	}
	~Text()
	{
		// 释放此字符串
		delete [] m_buf;
	}
private:
	int m_size;
	char* m_buf;
};

int main()
{
	// 定义第一个对象
	Text t1("helloworld");
	// 第二个对象以t1为蓝本进行拷贝
	Text t2(t1);
	return 0;
}
