// 7.11.3
#include <stdio.h>
int main(void)                              //  1
{                                           //  2
    float weight, height; /* weight以磅为单位，height以英寸为单位*/
                                            //  4
    scanf("%f %f", weight, height);         //  5
    if (weight < 100 && height > 64)        //  6
    {   if (height >= 72)                   //  7
            printf("You are very tall for your weight.\n");
        else if (height < 72 && height > 64)                //  9
            printf("You are tall for your weight.\n");      //  10
        else if (weight > 300 && !(weight <= 300)           //  11
            && height < 48)                                 //  12
        if (!(height >= 48))
                printf(" You are quite short for your weight.\n");
    else
        printf("Your weight is ideal.\n");

    return 0;
}
