// sizeof.c -- 使用sizeof运算符
// 使用C99新增的%zd 转换说明 
//  -- 如果编译器不支持%zd, 请改成%u或%lu
#include <stdio.h>
int main(void)
{
	int n = 0;
	size_t intsize;
	size_t size_tsize;

	intsize = sizeof (int);
	size_tsize = sizeof (size_t);
	printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n",
		n, sizeof n, intsize);
	printf("size_t is %zd\n", sizeof (size_t));

	return 0;
}
