// 5.10.10
#include <stdio.h>
int main(void)
{
    // a.
    int x = 0;

    while (++x < 3)
        printf("%4d", x);
    //  ***1***2

    // b.
    printf("\n");
    int y = 100;

    while (y++ < 103)
        printf("%4d\n", y);

        printf("%4d\n", y);
    /*  *101
        *102
        *103
        *104
    */
    printf("\n");
    //  c.
        char ch = 's';
        
        while (ch < 'w')
        {
            printf("%c",  ch);
            ch++;
        }
        printf("%c\n", ch);
    /*  stuvw
    */
        return 0;


}
