#include <stdio.h>

class Painter
{
public:
	// ���ڱ�ʾ��ɫ��ö������
	enum Color
	{
		RED = 0xFF0000,
		GREEN = 0x00FF00,
		BLUE = 0x0000FF
	};
	// ʡ�����͵�ö��
	enum { NORMAL=0, BOLD};
};

int main()
{
	Painter::Color clr = Painter::RED;
	int style = Painter::BOLD;

	return 0;
}

