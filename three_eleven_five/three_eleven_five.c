#include <stdio.h>
int main(void)
{
	long long yeartosec ;
	unsigned short int  nianling;

	printf("请输入你的年龄： ");
	scanf("%d", &nianling);

	yeartosec = 3.156e7 * nianling;
	printf("\n%u岁的你已经活过%ld秒", nianling,  yeartosec);
	printf("\n");

	return 0;
}
