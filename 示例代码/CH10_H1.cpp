
#include <stdio.h>
#include <string.h>

struct CellPhone
{
	char model[32]; // 型号
	char producer[32];  // 制造商
	short  year;    // 上市年份
	short  price;  // 参考价格
};


int main()
{
	CellPhone phones[3];
	strcpy(phones[0].model, "RongYao");
	strcpy(phones[0].producer, "Huawei");
	phones[0].year = 2012;
	phones[0].price = 1800;

	strcpy(phones[1].model, "Mi4");
	strcpy(phones[1].producer, "XiaoMi");
	phones[1].year = 2013;
	phones[1].price = 1900;

	strcpy(phones[2].model, "Note3");
	strcpy(phones[2].producer, "Samsung");
	phones[2].year = 2013;
	phones[2].price = 2600;

	for(int i=0; i<3; i++)
	{
		CellPhone* p = &phones[i];
		printf("%s \t%s \t%d \t%d \n",
			p->model, p->producer, p->year, p->price);
	}
	return 0;
}

