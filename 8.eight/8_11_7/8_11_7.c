// #  7.12.8
#include <stdio.h>
#include <conio.h>
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
    char grade, grade_new;
    printf("grade is %c\n", grade);
    
   
   
    part:printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("a) $8.75/hr                     b) $9.33/hr\n");
    printf("c) $10.00/hr                    d) $11.20/hr\n");
    printf("q) quit                                     \n");
    printf("*****************************************************************\n");
        
        if (scanf("%c", &grade) == 1 && (((grade > 96)  && (grade < 101)) || (grade == 113)))
        {
    		switch (grade)
    		{
    			case 'a':
    					  basic_wage = 8.75;
    					  break;
    			case 'b':
    					  basic_wage = 9.33;
    					  break;
    			case 'c':
    					  basic_wage = 10.00;
    					  break;
    			case 'd':
    					  basic_wage = 11.20;
    					  break;
    			case 'q':
    					  goto quit;
    		}
            
//            printf("basic_wage is %f\n", basic_wage);
            printf("请输入工作时长：");
            scanf("%f", &hours);
            scanf("%c", &grade);
            if (grade == '\n')
            {    

                if (( hours <= (float)40) && (hours >= 0))
                    wage = basic_wage * hours;
                else 
                    wage = basic_wage * 40 + (hours - (float)40) * over_time;
                printf("工资总额:%.2f，税金：%.2f，净收入：%.2f\n",
                        wage, rate(wage), wage - rate(wage));
                
                printf("*****************************************************************\n");
                printf("Enter the number corresponding to the desired pay rate or action:\n");
                printf("a) $8.75/hr                     b) $9.33/hr\n");
                printf("c) $10.00/hr                    d) $11.20/hr\n");
                printf("q) quit                                     \n");
                printf("*****************************************************************\n");

            }
            putchar('*');
            putchar(grade);
            putchar('*');    
            printf("这是第二次输入： ");
            if (grade == '\n')
            {
                //scanf("%c", &grade_new);
                grade = fgetchar();
            }
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


