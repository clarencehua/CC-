#include <stdio.h>
#include <string.h>

// 项目经理: Project Manager
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
	char m_name[64];  // 经理的名字
	char m_report[256]; // 这一周的周报
};

// 首席技术官
class CTO
{
public:
	// 阅读项目经理的周报
	void ReadReport(PM& p)
	{
		printf("[ %s ] : %s \n", p.m_name, p.m_report);
	}
};


int main()
{
	PM xiaoming("xiaoming", "这一周干了惊天动地的事情");
	CTO mr ;
	mr.ReadReport(xiaoming);

	return 0;
}
