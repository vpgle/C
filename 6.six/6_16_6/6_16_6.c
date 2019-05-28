/* 6.16.6
   */
#include <stdio.h>
int main(void)
{
    typedef long long llong;
    int upperlimit;
    int lowerlimit;
    int init;

    printf("请输入上限，下限，都是整数，且上限小于下限！\n");
    printf("请输入上限：");
    scanf("%d", &upperlimit);
    printf("请输入下限：");
    scanf("%d", &lowerlimit);

    while (upperlimit < lowerlimit)
    {

        printf("+---|------|---------+\n");
        for (init = upperlimit; init <= lowerlimit; init++)
        {
            printf(" %3d %6d %9lld\n", init, init * init, ((llong)init)*((llong)init)*((llong)init));
        }

    }
    return 0;
}

//            printf("int is %zd", sizeof(int));
//            printf("long is %zd", sizeof(long));
//            printf("long long is %zd", sizeof(long long));
//            printf("unsigned long long is %zd", sizeof(unsigned long long int));

