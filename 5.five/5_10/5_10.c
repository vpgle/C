/*	add_one.c  --  递增： 前缀和后缀   */
#include <stdio.h>
int main(void)
{
	int ultra = 0 , super = 0;

	while (super < 5)
	{
//		printf("super = %d, ultra = %d \n", super, ultra);
		super++;
		++ultra;
		printf("super = %d, ultra = %d \n", super, ultra);
	}

	return 0;
}
/*
		super     ultra
init   	0		  0
first   0		  1
second  1		  2
third   2		  3
fourth  3		  4
fifth   4		  5

*/	
