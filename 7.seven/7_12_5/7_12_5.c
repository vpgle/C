// # 7.12.4
#include <stdio.h>
int main(void)
{
    int Exclamationtoperiod = 0;
    int two2one = 0;
    char ch;

    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
            case '.':
                     putchar('!');
                     ++Exclamationtoperiod;
                     break;
            case '!':
                     putchar('!');
                     putchar('!');
                     ++two2one;
                     break;
            default:
                     putchar(ch);
        }
    }

    printf("\n替换了%d次\n", two2one + Exclamationtoperiod);

    return 0;
}
