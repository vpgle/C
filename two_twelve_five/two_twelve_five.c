#include <stdio.h>
void br(void);
void ic(void);

void br(void)
{
	printf("Brazil, Russia");
}

void ic(void)
{
	printf("India, China");
}

int main(void)
{
	br();
	printf(", ");
	ic();
	printf("\n");	
	ic();
	printf(",");
	printf("\n");
	br();

	getchar();
	return 0;
}
