#include <stdio.h>

// ����һ��ȫ�ֱ���
int data[8] = {1,2,3,4,5,6,7,8};

// ���ش������
double Average()
{
	// �ں�����ֱ�Ӷ�ȡȫ�ֱ���data
	int total = 0;
	for(int i=0; i<8; i++)
	{
		total += data[i];
	}
	return total / 8.0;
}

int main()
{
	double result = Average();
	printf("result: %.3lf \n", result);
	return 0;
}
