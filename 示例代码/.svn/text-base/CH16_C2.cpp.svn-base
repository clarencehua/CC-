
#include <stdio.h>
#include <time.h>

int main()
{
	time_t t = time(NULL);
	tm info = *localtime(&t);
	printf("%04d-%2d-%02d %02d:%02d:%02d \n",
		info.tm_year + 1900,
		info.tm_mon + 1,
		info.tm_mday,
		info.tm_hour,
		info.tm_min,
		info.tm_sec);

	return 0;
}


