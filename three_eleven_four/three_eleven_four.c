#include <stdio.h>
int main(void)
{
	float flt;					//			为什么用double类型就不能得到想要的结果？

	printf("读取一个浮点数： ");
	scanf(" %f", &flt);

	printf("Enter a floating-point value:  %f\n", flt);
	printf("fixed_point notation:  %f\n", flt);
	
	printf("exponential notation: %e\n", flt);
	printf("p notation: %a\n", flt);

	return 0;
}
