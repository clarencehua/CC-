
#include <stdio.h>
#include <list>      //  �� ����ͷ�ļ�
using namespace std;    // �� ���������ռ�

int main()
{
	list<int>  mylist;
	mylist.push_back(1);
	mylist.pop_back();
	mylist.push_front(2);
	mylist.pop_front();

	return 0;
}



