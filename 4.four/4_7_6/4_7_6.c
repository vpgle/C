// 4.7.6
#include <stdio.h>
int main(void)
{
	// a.  %d
	// b.  %4.2hX		--- 答案%4X
	printf("8A is \n<%4.2hX>\n<%4X>\n", 0X8A, 0X8A);
	printf("8A is \n<%4.2hX>\r      <%4X>\n", 0X8A, 0X8A);
	// c.  %10.3f
	// d.  %12.2e
	// e.  %-30s

	return 0;
}
