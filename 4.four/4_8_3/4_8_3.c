// 4.8.3
#include <stdio.h>
int main(void)
{
	float num;				// 定义成double类型却得不到想要的结果，为什么？
	scanf("%f", &num);
	printf("The input is%2.1for%.1e.\n", num, num);
	printf("The input is%+2.3for%.3E.\n", num, num);

	return 0;
}
