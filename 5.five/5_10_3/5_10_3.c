// 5.10.3 
#include <stdio.h>
int main(void)
{
	printf("a. 30.0 / 4.0 * 5.0:\n");
	printf("%f\n", 30.0 / 4.0 * 5.0);
	/*	30.0 / 4.0 浮点数除以浮点数，结果也为浮点数。7.5；
		7.5 再乘以 5.0；浮点数乘以浮点数，结果也为浮点数。37.500000；
	*/
	
	printf("\n");
	printf("b. 30.0 / (4.0 * 5.0):\n");
	printf("%f\n", 30.0 / (4.0 * 5.0));
	//	先计算4.0* 5.0 等于20.0
	//	再结算30.0/ 20.0 等于1.500000

	printf("\n");
	printf("c. 30 / 4 * 5:\n");
	printf("%d\n", 30 / 4 * 5);
	/*	优先级相同，从左往右计算，30 / 4 =7.5 自动转换类型得7
		然后再乘以5 结果得 35 */	
	
	printf("\n");
	printf("d. 30 * 5 / 4:\n");
	printf("%d\n", 30 * 5 / 4);
	//   30 * 5 = 150 ,150 /4 = 37.5  
	//		自动转换为37 


	printf("\n");
	printf("e. 30 / 4.0 * 5:\n");
	printf("%f\n", 30 / 4.0 * 5);
	//	整型除以浮点型结果为浮点型，乘以浮点型结果为浮点型
	//	30 / 4.0 = 7.5  7.5 * 5 = 37.500000

	printf("\n");
	printf("f. 30 / 4 * 5.0:\n");
	printf("%f\n", 30 / 4 * 5.0);
	//	30 / 4 = 7.5 自动转换为整型 ， 7
	//	7 * 5.0 得 35.000000
	return 0;
}











