// 5.10.2 
// 假设所有变量的类型的都是INT，下列各项变量的值是多少:
#include <stdio.h>
int main(void)
{
	printf("a. x = (int)3.8 + 3.3;	x = 6; \n");
	printf("(int)3.8 强制转换为INT类型值为3，3.3自动转换类型值为3.\n");	
	printf("\n");

	printf("b. x = (2 + 3) *10.5; 	x = 50;\n");
	printf("%f\n", (2 + 3) * 10.5);
	printf("%d\n", (2 + 3) * 10.5);
	printf("%d\n", 5 * 10.5);
	printf("（2+3） 为5，10.5先转换为10再求值，结果为50.\n");
	printf("\n");

	printf("c. x = 3 / 5 * 22.0;		x = 0;\n");
	printf("优先级相同，结合律从左往右计算\n");
	printf("3/5 = 0.6，但为INT类型所以结果是0，\n");
	printf("22.0自动转换类型值为22，最后结果为0；\n");
	printf("\n");

	printf("d. x = 22.0 * 3 / 5;		x = 13；\n");
	printf("先算22.0 * 3 ， 22.0自动转换为22 再乘以 3 得 66 ，\n");
	printf("再除以 5 ，得13.2，结果为13.\n");

	return 0;
}
