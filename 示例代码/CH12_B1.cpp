
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Movie
{
	int id;
	char* title;  // 影片名称
	int title_len; // 影响名称长度
};

void SetTitle(Movie* m, const char* title)
{
	m->title_len = strlen(title);  // 影响名称的实际长度
	m->title = (char*) malloc(m->title_len + 1); // 申请一块空间
	strcpy(m->title, title); // 将数据存储到这块空间
}

int main()
{
	Movie m = { 0 }; // 清零
	m.id = 1;
	SetTitle(&m, "The Bourne Identity");
	printf("id: %d, title:%s \n", m.id, m.title);

	// 最后要记得释放内存
	if(m.title) free(m.title);
	return 0;
}


