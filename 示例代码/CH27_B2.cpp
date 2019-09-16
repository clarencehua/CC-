
#include <stdio.h>
#include <string.h>

class Text
{
public:
	Text(const char* str)
	{
		m_buf = NULL;
		*this = str; // 直接调用赋值操作符
	}
	Text(const Text& other) 
	{
		m_buf = NULL;
		*this = other; // 直接调用赋值操作符
	}
	~Text()
	{
		// 释放此字符串
		delete [] m_buf;
	}

	// Text = Text
	Text& operator= (const Text& other) 
	{
		if(this == &other) return *this; // 避免赋值给自己

		// 删除现有内容
		if(m_buf)
		{
			delete [] m_buf;
			m_buf = NULL;
		}

		// 申请一块内存，复制内容
		m_size = strlen(other.m_buf) + 1;
		m_buf = new char[m_size];
		strcpy(m_buf, other.m_buf);		

		return *this;
	}
	// Text = const char*
	Text& operator = (const char* str) 
	{
		if(this->m_buf == str) return *this; // 避免赋值给自己

		// 删除现有内容
		if(m_buf)
		{
			delete [] m_buf;
			m_buf = NULL;
		}

		// 申请一块内存，复制内容
		m_size = strlen(str) + 1;
		m_buf = new char[m_size];
		strcpy(m_buf, str);		

		return *this;
	}

private:
	int m_size;
	char* m_buf;
};

int main()
{
	Text t1("helloworld");
	Text t2("na");
	t2 = t1; 
	t1 = "changed";
	return 0;
}

