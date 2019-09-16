
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student
{
	int id;
	char name[16];
	Student* next;   // 添加一个指针, 用于指向下一个对象
};


Student m_head = {0}; // 定义头节点

// 在最前面插入一个节点
void add(Student* obj)
{
	obj->next = m_head.next;
	m_head.next = obj->next;
}

// 按顺序插入节点
int insert(Student* obj)
{
	Student* cur = m_head.next; // 当前节点current
	Student* pre = &m_head;  // 上一个节点previous
	while(cur)
	{		
		if(obj->id < cur->id) // 找到这个位置
			break;
		pre = cur;
		cur = cur->next;  // 找到最后一个对象
	}

	// 插入到pre节点的后面
	obj->next = pre->next;
	pre->next = obj;
	return 0;
}

// 按id查找并删除节点
void remove(int id)
{
	Student* cur = m_head.next; // 当前节点current
	Student* pre = &m_head;  // 上一个节点previous
	while(cur)
	{		
		if(id == cur->id) // 找到这个位置
		{
			// 删除该节点
			pre->next = cur->next;
			free(cur);
			break;
		}
		pre = cur;
		cur = cur->next;  // 找到最后一个对象
	}
}

// 遍历
void show_all()
{
	Student* p = m_head.next; 
	while(p)
	{
		printf("ID: %d, name: %s\n", p->id, p->name);
		p = p->next; // 下一个对象
	}
}


int main()
{
	Student* obj = (Student*)malloc (sizeof(Student));
	obj->id = 12;
	strcpy(obj->name, "X");
	add(obj);

	return 0;
}

