#include <stdio.h>
int main(void)
{
	int asc;

	printf("请输入一个ACSII码值： ");
	scanf("%d", &asc);

	printf("显示ACSII码值%d 对应的字符 %c\n", asc, asc);

	return 0;
}
