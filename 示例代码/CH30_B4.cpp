
#include <stdio.h>
#include <vector>      //  �� ����ͷ�ļ�
using namespace std;    // �� ���������ռ�

// �����const����ֻ������
void test (const vector<int>& arr) 
{
	// ʹ�����ڲ���const_iterator
	for (vector<int>::const_iterator   iter =  arr.begin(); 
		iter != arr.end ();  iter ++)
	{
		const int& p = *iter;   // ������const reference
		printf("%d \n", p);
	}
}

int main()
{
	vector <int>  arr (128);   // ָ����ʼ������Ҫ�㹻��
	arr.clear ();   // size��0��capacity����
	arr.push_back ( 1 );
	arr.push_back ( 2 );
	arr.push_back ( 3 );
	// ...

	int size = arr.size ();  // ����һ������һ�������˶��ٸ�Ԫ��

	test(arr);
	return 0;
}



