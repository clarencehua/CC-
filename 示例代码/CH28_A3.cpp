#include <stdio.h>

class Painter
{
public:
	// 用于表示颜色的枚举类型
	enum Color
	{
		RED = 0xFF0000,
		GREEN = 0x00FF00,
		BLUE = 0x0000FF
	};
	// 省略类型的枚举
	enum { NORMAL=0, BOLD};
};

int main()
{
	Painter::Color clr = Painter::RED;
	int style = Painter::BOLD;

	return 0;
}

