
#include <stdio.h>
#include <vector>      //  �� ����ͷ�ļ�
using namespace std;    // �� ���������ռ�

int main()
{
	vector <int>  arr (128);   // ָ����ʼ������Ҫ�㹻��
	arr.clear ();   // size��0��capacity����
	arr.push_back ( 1 );
	arr.push_back ( 2 );
	arr.push_back ( 3 );
	// ...

	int size = arr.size ();  // ����һ������һ�������˶��ٸ�Ԫ��
	return 0;
}



