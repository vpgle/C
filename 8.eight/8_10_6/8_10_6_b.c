// # 8.10.6.b
#include <stdio.h>
int main(void)
{
    // Harhar[enter]
    char ch;

    while ((ch = getchar()) != '\n')
    {
        putchar(ch++);
        putchar(++ch);
    }
    // HJacrthjacrt
    putchar('\n');
    return 0;
}
