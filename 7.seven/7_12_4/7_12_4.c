// # 7.12.4
#include <stdio.h>
int main(void)
{
    int Exclamationtoperiod = 0;  // 感叹号替换句号次数
    int two2one = 0;              // 两个感叹号替换一个感叹号次数
    char ch;

    while ((ch = getchar()) != '#')
    {
        if (ch == '.')
        {
            putchar('!');
            ++Exclamationtoperiod;
        }
        else if (ch == '!')
        {
            putchar('!');
            putchar('!');
            ++two2one;
        }
        else
            putchar(ch);
    }

    printf("\n替换了%d次\n", two2one + Exclamationtoperiod);

    return 0;
}
