/* 4.7.7  */
#include <stdio.h>
int main(void)
{
	// a. %15lu
	// b. %4#x			// %#4x
	printf("%4#x\n%#4x\n", 0x8a, 0x8a);
	// c. %-12.2e		// %-12.2E
	// d. %+10.3f
	// e. %8.8s

	return 0;
}
