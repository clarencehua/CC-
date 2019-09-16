#include <stdio.h>
#include <stdlib.h>

/* 对象类型 */
struct ResultSet
{
	int data[200];
	int n;
};

/* 创建一个对象
   返回值：对象 ，若为NULL表示创建失败
*/
ResultSet* create()
{
	ResultSet* obj = (ResultSet*) malloc(sizeof(ResultSet));
	obj->n = 0;
	return obj;
}

/* 销毁对象
   obj: 对象指针
*/
void destroy(ResultSet* obj)
{
	free(obj);
}

/* 查询已存储的元素的个数
   obj: 对象指针
   返回值：对象中所存储的元素的个数
*/
int count(ResultSet* obj)
{
	return obj->n;
}

/* 取得第i个元素的值
   obj: 对象指针
   i: 索引
*/
int at(ResultSet* obj, int i)
{
	return obj->data[i];
}

/* 存入一个数
   a: 待存入的数
   返回值：1，表示存入成功。0，表示未存入
*/
int push(ResultSet* obj, int a)
{
	for(int i=0; i<obj->n; i++)
	{
		if(a == obj->data[i])
			return 0;
	}
	
	obj->data[obj->n] = a;
	obj->n += 1;
	return 1;
}

/* 存入一组数 
  arr: 数组的首地址
  n: 数组长度
  返回值：实际存入的个数。去除重复。
*/
int push(ResultSet* obj, int arr[], int n)
{
	int total = 0;
	for(int i=0; i<n; i++)
	{
		if(push(obj, arr[i]))
			total ++;
	}
	return total;
}



int main()
{
	ResultSet* obj = create();

	// 存入数据
	int  a[] = { 1, 2, 3};
	int  b[] = { 4, 5, 6};
	int  c[] = { 1, 3, 5, 7};
	push(obj, a, 3);
	push(obj, b, 3);
	push(obj, c, 4);

	// 查看结果
	for(int i=0; i<count(obj); i++)
	{
		printf("%d ", at(obj, i));
	}

	// 可以直接访问其成员，但这样破坏了其封装性
	for(int i=0; i<obj->n; i++)
	{
		printf("%d ", obj->data[i]);
	}

	destroy(obj);
	return 0;
}
