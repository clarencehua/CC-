
#include <stdio.h>
#include <string.h>
int main()
{
	unsigned char buf[128];
	memset(buf, 0, sizeof(buf));  // 全部填充为0
	memset(buf, 0xFF, 128); // 全部填充为0xFF
	memset(buf, 0x55, 100); // 前100个字节填充为0x55
	memset(buf+100, 0x77, 10); // 100..109填充为0x77

	unsigned int abc[4];
	memset(abc, 0x55, sizeof(abc)); // 按字节填充为0x55，所以a[0]为0x55555555;
	return 0;
}


