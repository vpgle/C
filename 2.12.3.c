#include <stdio.h>
int main(void)
{
	int nianling, day;

	nianling = 30;
	day = 365 * nianling;
	
	printf("My order is %d, day is %d", nianling, day);

	getchar();
	return 0;
}
