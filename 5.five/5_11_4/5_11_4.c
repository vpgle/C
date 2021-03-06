// 5.11.4
#include <stdio.h>
#define FEET_TO_INCH 12
#define CM_TO_INCH 0.3937008
int main(void)
{
    float shengao;
    float fi;
    int feet;
    float inch;
    printf("Enter a height in centimeters: ");

    scanf("%f", &shengao);
    while (shengao > 0)
    {
        fi = shengao * CM_TO_INCH;
        feet = (int)fi / FEET_TO_INCH;
        inch = fi - feet * FEET_TO_INCH;
        printf("%.1f cm = %d feet, %.1f inches\n", shengao, feet, inch);
        printf("Enter a height in centimeters (<=0 to quit): ");
        scanf("%f", &shengao);
    }
    printf("bye\n");

    return 0;

}
