#include <stdio.h>
#include <string.h>

// ��Ŀ����: Project Manager
class PM
{
	friend class CTO;

public:
	PM(const char* name, const char* text)
	{
		strcpy(m_name, name);
		strcpy(m_report, text);
	}
private:
	char m_name[64];  // ���������
	char m_report[256]; // ��һ�ܵ��ܱ�
};

// ��ϯ������
class CTO
{
public:
	// �Ķ���Ŀ������ܱ�
	void ReadReport(PM& p)
	{
		printf("[ %s ] : %s \n", p.m_name, p.m_report);
	}
};


int main()
{
	PM xiaoming("xiaoming", "��һ�ܸ��˾��춯�ص�����");
	CTO mr ;
	mr.ReadReport(xiaoming);

	return 0;
}
