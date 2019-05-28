// floatcnv.c -- 不匹配的浮点型转换
#include <stdio.h>
int main(void)
{
	float n1 = 3.0;
	double numnull1;
	double n2 = 3.0;
	double numnull2;
	long n3 = 2000000000;
	double numnull3;
	long n4 = 1234567890;

//	printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);	// 错误的类型转换说明符
//	printf("%ld %ld\n", n3, n4);
//	printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);		// 错误的类型转换说明符
	/*	这种错误可以用分别在每个变量之间添加一个未定义的变量即可。解决正常输出。*/
	// 程序按顺序把传入的值放入被称为栈(stack)的内存区域.
	printf("n1 is %f\n", n1);
	printf("n2 is %e %f\n", n2, n2);
	printf("n3 is %ld\n", n3);
	printf("n4 is %ld\n", n4);
	printf("%f %f %ld %ld\n", n1, n2, n3, n4);

	return 0;
}
