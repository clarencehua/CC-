#include <stdio.h>
#include <string.h>
#include <stdlib.h>

class Text
{
public:
	Text()
	{
		m_buf = NULL;  // ��ʼ��Ϊ��ָ��
		m_size = 0;
	}
	~Text()
	{
		if(m_buf) free(m_buf);
	}

	// ����һ���ַ���
	void Copy(const char* str)
	{
		// �ͷ�ԭ�����ڴ�
		if(m_buf)
		{
			free(m_buf);
			m_buf = NULL;
		}
		// ����һ�����ڴ棬���������� 
		m_size = strlen(str)+1;
		m_buf = (char*)malloc(m_size);
		strcpy(m_buf, str);
	}
	// ��ӡ��ʾ
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
	printf("����: %s \n", t.GetText());
	t.Copy("bbbb");
	printf("����: %s \n", t.GetText());
	return 0;
}



