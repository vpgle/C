// 7.5
/*  divisors.c -- 使用嵌套if语句显示一个数的约数 */
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    unsigned long num;    // 待测试的数
    unsigned long div;    // 可能的约数
    bool isPrime;         // 素数标记

    printf("Please enter an integer for analysis; ");
    printf("Enter q to quit.\n");
    while (scanf("%lu", &num) == 1)
    {
        for (div = 2, isPrime = true; (div * div) <= num; div++)
        {
            if (num % div == 0)
            {
                if ((div * div) != num)
                printf("%lu is divisible by %lu and %lu.\n",
                        num, div, num / div);
                else 
                     printf("%lu is divisible by %lu.\n", num, div);
                isPrime = false;    // 该数不是素数
            }
        }
        if (isPrime)
            printf("%lu is prime.\n", num);
        printf("Please enter another integer for analysis; ");
        printf("Enter q to quit.\n");
    }
    printf("Bye.\n");

    return 0;
}

/*

	一直以来，C都习惯用int作为标记的类型，其实新增的_Bool类型更合适。
	另外，如果在程序中包含了stdbool.h头文件，便可用bool代替_Bool类型，用true和false分别代替1和0。
*/
