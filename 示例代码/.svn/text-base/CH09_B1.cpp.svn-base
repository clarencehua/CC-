
int main()
{
	int a = 0;
	int* p = &a; // p指向a
	*p = 0xA0A0A0A0;  // 写操作：修改p指向的内存的值
	*p = 0x13141516;      // 写操作：修改p指向的内存的值

	int b = *p;  // 读操作：读取p指向的内存的值
	int c = *p + 2; // 读操作：读取p指向的内存的值
	return 0;
}

