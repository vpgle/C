// floatcnv.c -- 不匹配的浮点型转换
#include <stdio.h>
int main(void)
{
	float n1 = 3.0F;
	long long unvar1;
	double n2 = 3.0;
	long long unvar2;
	long n3 = 2000000000;
	long long unvar3;
	long n4 = 1234567890;

	printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);
	printf("%ld %ld\n", n3, n4);
	printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);

	printf("n1 is %F\n", n1);
	printf("n2 is %e\n", n2);
	printf("n3, n4 is %ld %ld\n", n3, n4);

	return 0;
}
