// 7.12.11
#include <stdio.h>
#define artichoke 2.05
#define beet	  1.15
#define carrot	  1.09
#define discount  0.95
int main(void)
{
    double partichoke, sum_artichoke_pound = 0;
    double pbeet, sum_beet_pound = 0;
    double pcarrot, sum_carrot_pound = 0;
    double total, sum_pound, vegetable_total, Freight_packing_fee, saveoff;
    char ch;

    printf("a.artichoke is %f\n", artichoke);
    printf("b.beet is %f\n", beet);
    printf("c.carrot is %f\n", carrot);
    printf("q is quit!\n");
    while ((ch = getchar()) != 'q') 
    {
        switch (ch)
        {
            case 'a':
                {
                printf("Please artichoke pound is ");
                scanf("%lf", &partichoke);
                printf("partichoke is %f\n", partichoke);
                sum_artichoke_pound += partichoke;
                printf("sum_artichoke_pound is %f\n", sum_artichoke_pound);
                break;
                }
            case 'b':
                {
                printf("Please beet pound is ");
                scanf("%lf", &pbeet);
//                sum_beet_pound += pbeet;
                break;
                }
            case 'c':
                {
                printf("Please carrot pound is ");
                scanf("%lf", &pcarrot);
//                sum_carrot_pound += pcarrot;
                break;
                }
            case 'q':
                break;
        }
    printf("1a.artichoke is %f\n", artichoke);
    printf("2b.beet is %f\n", beet);
    printf("3c.carrot is %f\n", carrot);
    printf("4q is quit!\n");
        if ((ch = getchar()) == '\n');

    }

    return 0;
}
