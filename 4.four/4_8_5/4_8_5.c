// 4.8.5
#include <stdio.h>
int main(void)
{
	float downspeed;
	float filesize;
	printf("请输入下载速度：");
	scanf("%f", &downspeed);
	printf("请输入文件大小：");
	scanf("%f", &filesize);

	printf("At %2.2f megabits per second, a file of %.2f megabytes\n"
		"downloads in %.2f seconds.", downspeed, filesize, (filesize*8)/downspeed);
	return 0;
}
