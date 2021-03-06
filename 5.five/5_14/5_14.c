/*   convert.c  -- 自动类型转换   */
#include <stdio.h>
int main(void)
{					//		参考转换序列表
	char ch;
	int i;
	float fl;

	fl = i = ch = 'C';		//  第9行
	printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);//  第10行
	//			 C		68         68.00		
	ch = ch + 1;										//  第11行
	//		69
	i = fl + 2 * ch;									//  第12行
	//		206
	fl = 2.0 * ch + i;									//  第13行
	//		344
	printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl); //  第14行
	//		D           206			344.00

	ch = 1107;											//  第15行
	printf("Now ch = %c\n",  ch);						//  第16行
	//   				R
	ch = 80.89;											//  第17行		
	printf("Now ch = %c\n",  ch);						//  第18行
	//					O
	return 0;
}
