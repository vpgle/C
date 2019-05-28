// # 7.12.3
#include <stdio.h>
int main(void)
{
    int odd_number = 0;
    int even_number = 0;
    int odd_sum = 0;
    int even_sum = 0;
    int num;

    while ( scanf("%d", &num) == 1)
    {
        if(num != 0)
        {
            if((num % 2) == 1)
            {
                odd_sum += num;
                ++odd_number;
            }
            else if ((num % 2) == 0)
            {
                even_sum += num;
                ++even_number;
            }
        }
        else 
            break;
    }
    printf("奇数%d个，平均值是%f；偶数%d个，平均值是%f。\n",
            odd_number, (float)odd_sum / odd_number,
            even_number, (float)even_sum / even_number);

    return 0;
}
