// # 8.11.3.c
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    int upper = 0, lower = 0, total = 0;

    while ((ch = getchar()) != EOF)
    {
        ++total;
        if (islower(ch) > 0)
            ++lower;
        else if (isupper(ch) > 0)
            ++upper;
    }

    printf("大写字母%d个，小写字母%d个，共%d个字符\n", upper, lower, total);
    return 0;
}
