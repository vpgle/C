// 6.16.14
#include <stdio.h>
int main(void)
{
    double arrayone[8];
    double arraytwo[8];
    int loop;

    for (loop = 0; loop < 8; loop++)
    {
        printf("请输入第%d个值：", loop + 1);
        scanf("%lf", &arrayone[loop]);
    }   
//     printf("arrayone[%d] is %lf", loop, arrayone[loop]);
    for (loop = 0; loop < 8; loop++)
    {
        printf("%9f ", arrayone[loop]);
    }
    printf("\n");
    for (loop = 1; loop < 8; loop++)
    {
        arraytwo[0] = arrayone[0];
//        printf("arrayone[0] is %f, arraytwo[0] is %f", arrayone[0], arraytwo[0]);
        arraytwo[loop] = arraytwo[loop - 1] + arrayone[loop];

    }

    for (loop = 0; loop < 8; loop++)
    {
        printf("%9f ", arraytwo[loop]);
    }
    return 0;
}

/*

arraytwo[0] = arraytwo[3] + arrayone[0];
arraytwo[1] = arraytwo[0] + arrayone[1];
arraytwo[2] = arraytwo[1] + arrayone[2];
arraytwo[3] = arraytwo[2] + arrayone[3];
arraytwo[4] = arraytwo[3] + arrayone[4];
arraytwo[5] = arraytwo[4] + arrayone[5];
*/
