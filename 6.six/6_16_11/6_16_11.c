// 6.16.11
#include <stdio.h>
int main(void)
{
    int integer[8]= {1,2,3,4,5,6,7,8};
    int loop;


    for (loop = 7; loop >= 0; loop--)
    {
        printf("%d ", integer[loop]);
    }
    printf("\n");
    return 0;
    
}
