#include <stdio.h>
int main(void)
{
	float high;

	printf("请输入身高（英寸）：");
	scanf("%f", &high);

	high = high * 2.54;
	printf("你身高%f厘米", high);

	return 0;
}
