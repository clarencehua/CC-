#include <stdio.h>
#include <string.h>
#include <stdlib.h>

class Text
{
public:
	Text()
	{
		m_buf = NULL;  // 初始化为空指针
		m_size = 0;
	}
	~Text()
	{
		if(m_buf) free(m_buf);
	}

	// 拷贝一个字符串
	void Copy(const char* str)
	{
		// 释放原来的内存
		if(m_buf)
		{
			free(m_buf);
			m_buf = NULL;
		}
		// 创建一块新内存，拷贝其内容 
		m_size = strlen(str)+1;
		m_buf = (char*)malloc(m_size);
		strcpy(m_buf, str);
	}
	// 打印显示
	const char* GetText()
	{
		return m_buf;
	}

private:
	char* m_buf;
	int m_size;
};

int main()
{
	Text t;
	t.Copy("aaaa");
	printf("内容: %s \n", t.GetText());
	t.Copy("bbbb");
	printf("内容: %s \n", t.GetText());
	return 0;
}



