// 5.12 _test  while 循环判断问题
#include <stdio.h>
#define NUM 5
int main(void)
{
	int num=NUM;

	while (--num  > 0)
	{
		printf("%d\n", num);
		printf("%d\n", num - 1);
		printf("我是看不见的分隔符.\n");
	}

	return 0;
}
