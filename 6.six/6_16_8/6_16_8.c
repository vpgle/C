// 6.16.8
#include <stdio.h>
int main(void)
{
    float floatone;
    float floattwo;
    int bool_floatone;
    int bool_floattwo;
    float resultone;
    double resulttwo;

    printf("请输入两个浮点数：");
    printf("请输入第一个浮点数：");
    bool_floatone = scanf("%f", &floatone);
    printf("请输入第二个浮点数：");
    bool_floattwo = scanf("%f", &floattwo);

    while (bool_floatone == 1 && bool_floattwo == 1)
    {
        printf("结果是 %f\n", (floatone - floattwo) / (floatone * floattwo));
        printf("double is %.32lf\n", (floatone - floattwo) / (floatone * floattwo));
        printf("double is %.32lf\n", ((double)floatone - (double)floattwo) / ((double)floatone * (double)floattwo));

        printf("请输入两个浮点数：");
        printf("请输入第一个浮点数：");
        bool_floatone = scanf("%f", &floatone);
        printf("请输入第二个浮点数：");
        bool_floattwo = scanf("%f", &floattwo);
    }
    
    return 0;
}
