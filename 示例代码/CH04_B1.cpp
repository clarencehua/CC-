
#include <stdio.h>

int main()
{
	int values[5] = {1�� 2�� 3�� 4�� 5}��

	values[0] = 11;
	printf("%d \n", values[0]);

	// �����е�Ԫ�����
	int total = values[0] + values[1] + values[2] + values[3] + values[4];

	// ��һ�����͵�������Ĳ�ֵ
	int delta = values[0] - values[4];

	return 0;
}

