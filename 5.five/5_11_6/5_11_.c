// 5.11.5
#include <stdio.h>
void day(int days);     // ANSI函数原型声明
int main(void)
{
    int d;
    printf("请输入天数：");
    
    scanf("%d", &d);
    day(d);
    scanf("%d", &d);
    day(d);
    return 0;

}

void day(int days)
{
    int total = 0;
    int init = 1;
    while (init <= days)
    {
        total = init * init + total;
        init++;
    }
    printf("total is %d\n", total);
    printf("请再次输入天数：\n");
}
