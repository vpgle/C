// 4.8.4
#include <stdio.h>
int main(void)
{
	char name[40];
	int   nn;
    float num;
	
	printf("请输入身高（单位：英寸）：");
	scanf("%f", &num);
	printf("请输入姓名：");
	scanf("%s", name);

	printf("%s, your are %.3f feet tall\n", name, num);

	return 0;
}
