#include <stdio.h>
#include <string.h>

// Text����û�ж��忽�����캯��
class Text
{
public:
	Text(const char* str)
	{
		// ����һ���ڴ�, ������ַ���
		m_size = strlen(str) + 1;
		m_buf = new char[m_size];
		strcpy(m_buf, str);		
	}
	~Text()
	{
		// �ͷŴ��ַ���
		delete [] m_buf;
	}
private:
	int m_size;
	char* m_buf;
};

int main()
{
	// �����һ������
	Text t1("helloworld");
	// �ڶ���������t1Ϊ�������п���
	Text t2(t1);
	return 0;
}
