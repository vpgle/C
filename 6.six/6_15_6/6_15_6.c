// 6.15.6
#include <stdio.h>
int main(void)
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 8; j++)
            printf("$");
        printf("\n");
    }
    return 0;
}
