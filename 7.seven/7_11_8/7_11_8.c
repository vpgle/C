// # 7.11.8
/* retire.c */
#include <stdio.h>
int main(void)
{
    int age = 60;
    while (++age <= 65)
    {
        if ((age % 20) == 0) /*age是否能被20整除？ */
            printf("You are %d. Here is a raise.\n", age);
        if (age = 65)                          //  注意这行                             
            printf("You are %d. Here is your gold watch.\n", age);
        printf("age is %d\n", age);
    }
    return 0;
}
