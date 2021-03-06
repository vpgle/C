// #  7.12.7
#include <stdio.h>
#define basic_wage  10.00
#define over_time  1.5 * 10
#define three_hundred_rate  0.15
#define one_hundred_half_rate  0.2
#define more_then_four_hun_half_rate  0.25
#define three_hundred  45
#define four_hundred_half  75
float rate(float);
int main(void)
{
    float hours;
    float wage;

    scanf("%f", &hours);
    if (hours <= (float)40)
        wage = basic_wage * hours;
    else 
        wage = basic_wage * 40 + (hours - 40.0) * over_time;
    printf("一周工作%.2f个小时，工资总额:%.2f，税金：%.2f，净收入：%.2f\n",
            hours, wage, rate(wage), wage - rate(wage));

    return 0;
}

float rate(float wage)    // 函数定义
{
    float tax;
    if (wage <= 300)
        tax = three_hundred_rate * wage;
    else if (wage <= 450)
        tax = three_hundred + (wage - (float)300) * one_hundred_half_rate;
    else 
        tax = four_hundred_half + (wage - (float)450) * more_then_four_hun_half_rate; 

    return tax;    // 返回tax的值
}
