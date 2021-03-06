/* shoes1.c  -- 把鞋码转换成英寸 */
#include <stdio.h>
#define ADJUST 7.31  //字符常量
int main(void)
{
	const double SCALE = 0.333;		// const变量
	double shoe, foot;

	shoe = 9.0;
	foot = SCALE * shoe + ADJUST;
	printf("Shoe size (men's)   foot length\n");
	printf("%9.1f %15.2f inches\n",  shoe, foot);
	/*	该程序演示了用#define指令创建符号常量和用const限定符创建在
		程序运行过程中不可更改的变量。
	*/
	return 0;
}
