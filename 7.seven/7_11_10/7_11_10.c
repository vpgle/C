// # 7.11.9
/*
q
c
h
b
*/
#include <stdio.h>
int main(void)
{
    char ch;

    while ((ch = getchar()) != '#')
    {
        if (ch == '\n')
            ;
        printf("Step 1\n");
        if ( ch == 'c')
            ;
        else if (ch == 'b')
            break;
        else if (ch == 'h')
            printf("Step 3\n");
        printf("Step 2\n");
        
    }
    printf("Done\n");
    return 0;
}
