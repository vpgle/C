// 5.11.7
#include <stdio.h>
void cube(double n);
int main(void)
{
    double num;
    printf("请输入一个double类型的数：");
    scanf("%lf", &num);
    cube(num);
    return 0;
}

void cube(double n)
{
    double double_num;
    long double longdouble_num;
    double_num = n * n * n;
    longdouble_num = n * n * n;
    printf("n's cube is %e\n", double_num);
    printf("n's cube is %le\n", longdouble_num);
}
