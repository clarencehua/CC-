#include <stdio.h>

int main()
{
	int key = 123; // 密码
	int times = 0; // 尝试次数
	int passed = 0;  // 0: 未通过验证, 1: 已输入密码,通过验证
	do 
	{
		times ++; // 尝试的次数

		// 提示用户输入密码
		int input = 0;
		printf("Please input your password: ");
		scanf("%d", &input);

		// 检查密码是否正确
		if(key == input)
		{
			passed = 1;
			break;
		}
		else
		{
			printf("Bad Password!\n");
		}

	} while (times < 3);

	// 有没有通过验证
	if(passed)
	{
		printf("Welcome!\n");
	}
	else
	{
		printf("User Locked!\n");
	}
	return 0;
}


