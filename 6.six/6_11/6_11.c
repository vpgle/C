// sweeie2.c -- 使用for循环的计数循环
#include <stdio.h>
int main(void)
{
    const int NUMBER = 5;
    int count;

    for (count = 1; count <= NUMBER; count++)
        {
            printf("count is %d\n", count);
            printf("Be my Valentine!\n");
            printf("count is %d\n", count);
        }
    return 0;
}
