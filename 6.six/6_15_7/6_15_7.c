// 6.15.7 a.
#include <stdio.h>
int main(void)
{
    int i = 0;

    while (++i < 4)
        printf("Hi! ");             // Hi! Hi! Hi! 
    do
        printf("Bye! ");            // Hi! Hi! Hi! Bye! Bye! Bye! Bye! Bye!      
    while (i++ < 8);

     return 0;
}
