// skiptwo.c -- 跳过输入中的前两个整数
#include <stdio.h>
int main(void)
{
	int n;

	printf("Please enter three integers:\n");
	scanf("%*d %*d %d", &n);
	printf("The last integer was %d\n", n);

	// 　 e． catch 22 （但是 跳过 catch）

	int num;
	scanf("%*s %d", &num);
	printf("%d\n", num);

	return 0;
}
