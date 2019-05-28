// # 7.12.6
#include <stdio.h>
int main(void)
{
    char ch;
    char prechar;
    int frequency = 0;

    while ((ch = getchar()) != '#')
    {
        if (ch == 'e')
            prechar = 'e';
        if ((ch == 'i') && (prechar == 'e'))
        {
            ++frequency;
            prechar = '\0';             //  字符赋空
        }
    }
    printf("共有%d个ei\n", frequency);

    return 0;
}
