// 4.8.7
#include <stdio.h>
#include <float.h>
int main(void)
{
	double dbe = 1.0/3.0;
	float  flt = 1.0/3.0;

	printf("FLT_DIG is %.6f, DBL_DIG is %.16f\n", FLT_DIG, DBL_DIG);
	printf("%.6f  %.6f\n", flt, dbe);

	printf("FLT_DIG is %.6f, DBL_DIG is %.16f\n", FLT_DIG, DBL_DIG);
	printf("%.12f  %.12f\n", flt, dbe);


	printf("FLT_DIG is %.6f, DBL_DIG is %.16f\n", FLT_DIG, DBL_DIG);
	printf("%.16f  %.16f\n", flt, dbe);


	return 0;
}
