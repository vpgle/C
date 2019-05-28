// # 8.11.6
#include <stdio.h>
#include <ctype.h>
char get_first(void);
int main(void)
{
    while (1)
    {
        putchar(get_first());
    }
    return 0;
}

char get_first(void)
{
    int ch;
    while((ch = getchar()) != '\n')
    {
        if ((isgraph(ch) == 1) || (isgraph(ch) == 4)|| (isgraph(ch) == 8)|| (isgraph(ch) == 128))
            return ch;
        printf("请输入下一个字符： \n");
    }

    return 0;
}

