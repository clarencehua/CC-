
#include <stdio.h>

struct Color
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
};
struct Object
{
	int x, y;
	Color rgb;
};

int main()
{
	Object obj =
	{
		1,   // x
		2,   // y
		{  0xFF, 0x00, 0x00 }  // rgb
	};
	printf("obj: (%d,%d)  color: #%02X%02X%02X \n", 
		obj.x, obj.y,
		obj.rgb.r, 
		obj.rgb.g, 
		obj.rgb.b);

	return 0;
}

