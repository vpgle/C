// 4.7.2
#include <stdio.h>
#define Q "His Hamlet was funny without being vulgar."
int main(void)
{

	// a.
	printf("He sold the painting for $%2.2f.\n", 2.345e2);
	// b.
	printf("%c%c%c\n", 'H', 105, '\41');
	// c.
	printf("%s\nhas %d characters.\n", Q, strlen(Q));
	// d.
	printf("Is %02.2e the same as %2.2f?\n", 1201.0, 1201.0);
	/*	1.2010e3 01.20e3  与预期有差距	*/
	return 0;
}
