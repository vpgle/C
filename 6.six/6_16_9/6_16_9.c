// 6.16.9
#include <stdio.h>
double result(float parameter1, float parameter2);
int main(void)
{
    float floatone;
    float floattwo;
    int bool_floatone;
    int bool_floattwo;
    float resultone;
    double resulttwo;

    printf("请输入两个浮点数\n");
    printf("请输入第一个浮点数：");
    bool_floatone = scanf("%f", &floatone);
    printf("请输入第二个浮点数：");
    bool_floattwo = scanf("%f", &floattwo);

    while (bool_floatone == 1 && bool_floattwo == 1)
    {
        
        printf("resultzhi is %.32lf\n", result(floatone, floattwo));
        printf("请输入两个浮点数：");
        printf("请输入第一个浮点数：");
        bool_floatone = scanf("%f", &floatone);
        printf("请输入第二个浮点数：");
        bool_floattwo = scanf("%f", &floattwo);
    }
    
    return 0;
}
double result(float parameter1, float parameter2)
{
        double resultzhi;

        resultzhi = ((double)parameter1 - (double)parameter2) / ((double)parameter1 * (double)parameter2);

        return resultzhi;
}

