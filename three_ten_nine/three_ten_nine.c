#include <stdio.h>
int main(void)
{
	char ch = '\r';
	printf("ch = %c\n", ch);

	int cha = 13;
	printf("ch = %d\n", ch);

	int chb = '\015';
	printf("ch = %#o\n", ch);			//  小写o			,表示%#o 输出八进制数

	int chc = '\0xd';
	printf("ch = %#X\n", ch);

getchar();
	return 0;
}
