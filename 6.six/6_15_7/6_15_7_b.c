// 6.15.7 a.
#include <stdio.h>
int main(void)
{
     int i;
    char ch;

    for (i = 0, ch = 'A'; i < 4; i++, ch += 2*i)
        printf("%c",  ch);                          // ACGM
    printf("\n");

    return 0;
}
