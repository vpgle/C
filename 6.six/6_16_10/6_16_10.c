// 6.16.10
#include <stdio.h>
int main(void)
{
    int upperlimit = 7;
    int lowerlimit = 6;
    int init;
    int sum = 0;

        printf("Enter lower and upper integer limits: ");
        scanf("%d %d",  &lowerlimit, &upperlimit);
//         scanf("%d", &lowerlimit);
//        printf("%d %d\n", lowerlimit, upperlimit);

    while ( upperlimit > lowerlimit)
   {
        //   upperlimit 是最大值，lowerlimit 是最小值
        init = 0;
        for (init = lowerlimit; init <= upperlimit; init++)
        {
//            printf("init is %d\n", init);
//            printf("lowerlimit is %d\n", lowerlimit);
//            printf("upperlimit is %d\n", upperlimit);
            sum = sum + init * init;
//            printf("sum is %d\n", sum);
        }
            printf("The sums of the squares from %d to %d is %d\n", lowerlimit * lowerlimit,
                    upperlimit * upperlimit, sum);
           sum = 0;
            printf("The next set of limits: ");
            scanf("%d %d",  &lowerlimit, &upperlimit);
        

    }
    printf("Done\n");
    return 0;
}
