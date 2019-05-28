// 5.11.9
#include <stdio.h>
void Temperatures(double n);
int main(void)
{
    double gettemp;
    printf("请输入一个华氏温度：");
    while (scanf("%lf", &gettemp) == 1)     // scanf函数正确读取值则将状态保存为1
        {   
            Temperatures(gettemp);
            printf("\n再次输入一个华氏温度：");
        }
    
        printf("Bye\n");

    return 0;
}

void Temperatures(double n)
{
        const double c_to_k = 273.16;
        double ctemp;
        double ktemp;
        ctemp = 5.0 / 9.0 * (n - 32.0);
        ktemp = ctemp + c_to_k;
        printf("%.2lf ℉  等于 %.2lf ℃ 等于 %.2lf K", n, ctemp, ktemp);

}
