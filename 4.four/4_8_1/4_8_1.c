// 4.8.1 
#include <stdio.h>
int main(void)
{
	char firstname[40];
	char lastname[40];
 
	printf("firstname is ");
	scanf("%s", firstname);
	printf("lastname is ");
	scanf("%s", lastname);
	printf("%s,%s\n", firstname, lastname);

	return 0;
}
