// 6.16.4
#include <stdio.h>
int main(void)
{
    int i, j, k = 65;

    for (i = 1; i < 7; i++)
    {
        for (j = k; j < k + i; j++)
        {
            printf("%c", j);
        }
        k = j;
        printf("\n");
    }
    return 0;
 }


/*
65
66|67
68|69|70
71|72|73|74
75|76|77|78|79
80|81|82|83|84|85
*/
