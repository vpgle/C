#include <stdio.h>
char get_first(void);
int main(void)
{
    char ch;
    while (1)
    {
        ch = get_first();
        putchar(ch);
        putchar('\n');
    }
    return 0;
}

char get_first(void)
{
    int ch;
    ch = getchar();
    while (getchar() != '\n')
        continue;
    return ch;
}
