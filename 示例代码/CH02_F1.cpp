#include <stdio.h>

int main()
{
	double a = 0; // ��һ����
	double b = 0; // �ڶ�����

	printf("�������һ����: "); // ��ʾ�û�����
	scanf("%lf", &a);
	printf("������ڶ�����: "); // ��ʾ�û�����
	scanf("%lf", &b);

	double result = a * b; 	//������
	printf("%.3lf x %.3lf = %.3lf \n", a, b, result);
	return 0;
}



