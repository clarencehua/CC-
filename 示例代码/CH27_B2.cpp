
#include <stdio.h>
#include <string.h>

class Text
{
public:
	Text(const char* str)
	{
		m_buf = NULL;
		*this = str; // ֱ�ӵ��ø�ֵ������
	}
	Text(const Text& other) 
	{
		m_buf = NULL;
		*this = other; // ֱ�ӵ��ø�ֵ������
	}
	~Text()
	{
		// �ͷŴ��ַ���
		delete [] m_buf;
	}

	// Text = Text
	Text& operator= (const Text& other) 
	{
		if(this == &other) return *this; // ���⸳ֵ���Լ�

		// ɾ����������
		if(m_buf)
		{
			delete [] m_buf;
			m_buf = NULL;
		}

		// ����һ���ڴ棬��������
		m_size = strlen(other.m_buf) + 1;
		m_buf = new char[m_size];
		strcpy(m_buf, other.m_buf);		

		return *this;
	}
	// Text = const char*
	Text& operator = (const char* str) 
	{
		if(this->m_buf == str) return *this; // ���⸳ֵ���Լ�

		// ɾ����������
		if(m_buf)
		{
			delete [] m_buf;
			m_buf = NULL;
		}

		// ����һ���ڴ棬��������
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

