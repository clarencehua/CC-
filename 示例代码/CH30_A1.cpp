
#include <stdio.h>
#include <vector>      //  �� ����ͷ�ļ�
using namespace std;    // �� ���������ռ�

int main()
{
	vector<int>  arr;    // �� ����ʵ��
	arr.push_back(10);
	arr.push_back(11);
	arr.push_back(12);
	for(int i=0; i<arr.size(); i++)
	{
		int val = arr.at(i);
		printf("%d \n", val);
	}
	return 0;
}



