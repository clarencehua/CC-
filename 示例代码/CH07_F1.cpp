#include <stdio.h>

int main()
{
	int key = 123; // ����
	int times = 0; // ���Դ���
	int passed = 0;  // 0: δͨ����֤, 1: ����������,ͨ����֤
	do 
	{
		times ++; // ���ԵĴ���

		// ��ʾ�û���������
		int input = 0;
		printf("Please input your password: ");
		scanf("%d", &input);

		// ��������Ƿ���ȷ
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

	// ��û��ͨ����֤
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


