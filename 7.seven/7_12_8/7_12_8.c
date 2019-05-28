// #  7.12.8
#include <stdio.h>
#define over_time  1.5 * 10
#define three_hundred_rate  0.15
#define one_hundred_half_rate  0.2
#define more_then_four_hun_half_rate  0.25
#define three_hundred  45
#define four_hundred_half  75
float rate(float n);
int main(void)
{
    float hours;
    float wage;
    float basic_wage = 0;
    int grade;
//    printf("grade is %d\n", grade);
    
   
   
    part:printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1) $8.75/hr                     2) $9.33/hr\n");
    printf("3) $10.00/hr                    4) $11.20/hr\n");
    printf("5) quit                                     \n");
    printf("*****************************************************************\n");
        
        if (scanf("%d", &grade) == 1 && (grade > 0)  && (grade < 6))
        {
    		switch (grade)
    		{
    			case 1:
    					  basic_wage = 8.75;
    					  break;
    			case 2:
    					  basic_wage = 9.33;
    					  break;
    			case 3:
    					  basic_wage = 10.00;
    					  break;
    			case 4:
    					  basic_wage = 11.20;
    					  break;
    			case 5:
    					  goto quit;
    		}
            
//            printf("basic_wage is %f\n", basic_wage);
            printf("请输入工作时长：");
            scanf("%f", &hours);
            if (( hours <= (float)40) && (hours >= 0))
                wage = basic_wage * hours;
            else 
                wage = basic_wage * 40 + (hours - (float)40) * over_time;
            printf("工资总额:%.2f，税金：%.2f，净收入：%.2f\n",
                    wage, rate(wage), wage - rate(wage));
            
            printf("*****************************************************************\n");
            printf("Enter the number corresponding to the desired pay rate or action:\n");
            printf("1) $8.75/hr                     2) $9.33/hr\n");
            printf("3) $10.00/hr                    4) $11.20/hr\n");
            printf("5) quit                                     \n");
            printf("*****************************************************************\n");
             scanf("%d", &grade);

        }
        
             printf("请输入正确选项！\n");
             goto part;
    

    quit: printf("再见！\n");
    return 0;
}

float rate(float n)    // 函数定义
{
    float tax;
    if (n <= 300)
        tax = three_hundred_rate * n;
    else if (n <= 450)
        tax = three_hundred + (n - (float)300) * one_hundred_half_rate;
    else 
        tax = four_hundred_half + (n - (float)450) * more_then_four_hun_half_rate; 

    return tax;    // 返回tax的值
}


