// 4.7.8
#include <stdio.h>
int main(void)
{
	// a. %6.4d
	// b. %*o
	// c. %2c
	// d. %+4.2f   // 答案 %+0.2f
	printf("%+4.2f\n%+0.2f\n", 3.13, 3.13);
	// e. %-7.5s

	return 0;
}
